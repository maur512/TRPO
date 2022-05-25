#include "init.h"

std::vector<acc::UserAccounts> initSize() 
{

	std::vector<acc::UserAccounts> accounts;
	try 
	{
		std::ifstream in("accountmanager.txt");
		if (!in.is_open()) throw 0;
		int i = 0;
		std::string login_ = "", password_ = "";
		int role_;
		while (in >> login_ >> password_ >> role_) 
		{
			accounts.push_back(acc::UserAccounts(login_,password_,role_));
		}
			if (login_ == "") throw 1;
			in.close();
	}
	catch (int i) 
	{
		if (i = 0) 
		std::cout << "File 'accountmanager.txt' doesn't exist! Creating..." << std::endl;
		else 
		std::cout << "No accounts found!" << std::endl;
		std::ofstream out("accountmanager.txt");
		 std::cout << "Creating admin login..." << std::endl;
		accounts.push_back(acc::UserAccounts("admin", md5("admin"+acc::PASSWORD_SALT), 2));
		out << accounts[i].login << ' ' << accounts[i].password << ' ' << accounts[i].role;
		out.close();
		std::cout << "Successfully created! Login as admin/admin!" << std::endl;
	}
	return accounts;
}

std::vector<val::Values> initValues() 
{

	std::vector<val::Values> values;
	try 
	{
		std::ifstream in("valuesmanager.txt");
		if (!in.is_open()) throw 0;
		int i = 0;
		std::string worker_name_ = "", worker_pos_ = "";
		int worker_dep_, montly_wage_;
		while (in >> worker_name_ >> worker_pos_ >> worker_dep_ >> montly_wage_) 
		{
			values.push_back(val::Values(worker_name_,worker_pos_,worker_dep_,montly_wage_));
		}
		in.close();
	}
	catch (int i) 
	{
		if (i = 0) 
		std::cout << "File 'valuesmanager.txt' doesn't exist! Creating..." << std::endl;
		std::ofstream out("valuesmanager.txt");
		 std::cout << "Creating file.." << std::endl;
		out.close();
		std::cout << "Successfully created 'valuesmanager.txt'!" << std::endl;
	}
	return values;
}

std::vector<val::working_wage> initOneMonthWage() 
{

	std::vector<val::working_wage> oneMonthWage;
	try 
	{
		std::ifstream in("onemonthwage.txt");
		if (!in.is_open()) throw 0;
		int i = 0;
		std::string worker_NAME = "";
		std::vector<int> month_wage;
		int wage;
		while (in >> worker_NAME) 
		{
			if (in.peek() == '\n') {
				while (in >> wage){
					month_wage.push_back(wage);
					if (in.peek() == '\n' || in.peek() == EOF) break;
				}
			}
			
		oneMonthWage.push_back(val::working_wage(worker_NAME,month_wage));
		wage = 0;
		worker_NAME = "";
		month_wage.clear();
		if (in.peek() == EOF) break;
		}
		in.close();
	}
	catch (int i) 
	{
		if (i = 0) 
		std::cout << "File 'onemonthwage.txt' doesn't exist! Creating..." << std::endl;
		std::ofstream out("onemonthwage.txt");
		 std::cout << "Creating file.." << std::endl;
		out.close();
		std::cout << "Successfully created 'onemonthwage.txt'!" << std::endl;
	}
	return oneMonthWage;
}
