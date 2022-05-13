


#include "LoginAccess.h"



	std::vector<acc::UserAccounts> ::iterator login_input(std::vector<acc::UserAccounts>* accounts_pointer) {
		std::string login;
		std::cout << "login: " << std::endl;
		std::cin >> login;
		std::vector<acc::UserAccounts> ::iterator login_find = accounts_pointer->begin();
		while (login_find != accounts_pointer->end())
		{
			if (login == login_find->login) return login_find;
			else {
				std::cout << "Incorrect login! Try again!" << std::endl;
				std::cin >> login;
			}

		}
		
	}

	bool password_input(std::vector<acc::UserAccounts> ::iterator login_found) {
		std::string password;
		std::cout << "password: " << std::endl;
		std::cin >> password;
		while (md5(password + acc::PASSWORD_SALT) != login_found ->password) {
			std::cout << "Incorect password! Try again or input 'e' to exit!" << std::endl;
			std::cin >> password; if (password == "e") return false;
		} 
		return true;
	}
