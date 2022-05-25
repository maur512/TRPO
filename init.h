/*
Первичная инициализация баз аккаунтов и работников
*/


#pragma once

#include "includer.h"
#include "md5.h"


std::vector<val::working_wage> initOneMonthWage();
std::vector<acc::UserAccounts> initSize();
std::vector<val::Values> initValues();