


#include "LoginAccess.h"



	std::vector<acc::UserAccounts> ::iterator login_input(std::vector<acc::UserAccounts>* accounts_pointer)
	{
		std::string login;
		
		std::vector<acc::UserAccounts> ::iterator login_find = accounts_pointer->begin();
		std::cout << "Введите логин: " << std::endl;
		while (login != login_find -> login) 
		{
		std::cin >> login;
			while (login_find != accounts_pointer->end())
			{
				if (login == login_find->login) return login_find;
				else login_find++;
			}
		login_find = accounts_pointer -> begin();
		std::cout << "Неверный логин! Попробуйте ещё раз!" << std::endl;
		}
	}

	std::vector<acc::UserAccounts> :: iterator password_input(std::vector<acc::UserAccounts> ::iterator login_found) 
	{
		std::string password;
		std::cout << "Введите пароль: " << std::endl;
		std::cin >> password;
		while (md5(password + acc::PASSWORD_SALT) != login_found ->password) 
		{
			std::cout << "Неверный пароль!" << std::endl;
			std::cin >> password;
		} 
		if (md5(password + acc::PASSWORD_SALT) == login_found ->password) return login_found;
	}
