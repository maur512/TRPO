#pragma once
#include <vector>
#include <iostream>
#include <string>
#include <fstream>
#include <iterator>


namespace acc {
	struct UserAccounts {
		
		std::string password, login;
		int role, priority;
		UserAccounts(std::string , std::string , int , int );
		
	};
    const std::string PASSWORD_SALT = "var10var10var10";
}
