#pragma once
#include <vector>
#include <iostream>
#include <string>
#include <fstream>
#include <iterator>


namespace acc {
	struct UserAccounts {
		
		std::string password, login;
		int role;
		UserAccounts(std::string , std::string , int);
		
	};
    const std::string PASSWORD_SALT = "var10var10var10";
}

namespace val {
	struct Values {
		
		std::string worker_name, worker_pos;
		int montly_wage, worker_dep;
		Values(std::string , std::string , int, int);
		
	};
}