
/*

Отвечает за инклуд, ввод правильной информации с клавиатуры, а также объявляет структуры
*/

#pragma once
#include <vector>
#include <iostream>
#include <string>
#include <fstream>
#include <iterator>
#include <sstream>


// структура аккаунтов
namespace acc 
{
	struct UserAccounts 
	{
		
		std::string password, login;
		int role;
		UserAccounts(std::string , std::string , int);
		
	};
    const std::string PASSWORD_SALT = "var10var10var10";
}

// структура работников
namespace val 
{
	struct Values 
	{
		
		std::string worker_name, worker_pos;
		int montly_wage, worker_dep;
		Values(std::string , std::string , int, int);
		
		
	};
struct working_wage
	{
		std::string worker_NAME;
		std::vector<int> one_month_wage;
		working_wage(std::string, std::vector<int>);
	};
}



// установить целочисленое значение переменной (проверка на буквы цина) 
int setIntValue();
