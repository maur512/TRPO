#pragma once

#include <iostream>
#include <string>
#include <fstream>
#include "md5.h"

const std::string PASSWORD_SALT = "var10var10var10";
namespace acc {
	struct user_accounts {
		std::string password, login;
		int role, priority;
	};
}
void addAccount();
void deleteAccount();
void editAccount();
void openAccount();
