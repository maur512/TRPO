


#include "LoginAccess.h"



	bool login_input() {
		std::string user_login;
		std::cout << "login: " << std::endl;
		std::cin >> user_login;
		/*
		
		Перебираем все логины, если находим, записываем пароль, если нет, вывод инкоррект и продо
		лжаем логиниться
		*/

		
		if (user_login != "0") {
			std::cout << "Incorrect login! Try again." << std::endl;
			return false;
		}
		else return true;

	}

	bool password_input() {
		std::string user_password;
		std::cout << "password: " << std::endl;
		std::cin >> user_password;

		/*
		Проверка пароля с мд5

		*/
		if (user_password != "0") {
			std::cout << "Incorrect password! Try again." << std::endl;
			return false;
		}
		else return true;
	}
