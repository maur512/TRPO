#include "init.h"

std::vector<acc::UserAccounts> initSize() {

	std::vector<acc::UserAccounts> accounts;
	try {
		std::ifstream in("accountmanager.txt");
		if (!in.is_open()) throw 0;
		int i = 0;
		std::string login_ = "", password_ = "";
		int role_, priority_;
		while (in >> login_ >> password_ >> role_ >> priority_) {
			accounts.push_back(acc::UserAccounts(login_,password_,role_,priority_));
			}
			if (login_ == "") throw 1;
	}
	catch (int i) {
		if (i = 0) 
		std::cout << "File 'accountmanager' doesn't exist! Creating..." << std::endl;
		else 
		std::cout << "No accounts found!" << std::endl;
		std::ofstream out("accountmanager.txt");
		 std::cout << "Creating admin login..." << std::endl;
		accounts.push_back(acc::UserAccounts("admin", md5("admin"+acc::PASSWORD_SALT), 9, 9));
		out << accounts[i].login << ' ' << accounts[i].password << ' ' << accounts[i].role << ' ' << accounts[i].priority;
		out.close();
		std::cout << "Successfully created! Login as admin/admin!" << std::endl;
	}
	return accounts;
}