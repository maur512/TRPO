/*
Менеджер работников, по аналогии с аккаунтами
*/


#pragma once

#include "includer.h"
#include "md5.h"
#include "WorkWageManager.h"

void addValue(std::vector<val::Values>*);
void deleteValue(std::vector<val::Values>*);
void editValue(std::vector<val::Values>*);
void openValue(std::vector<val::Values>*);
void saveValuesToFile(std::vector<val::Values>);

void saveWagesToFile(std::vector<val::working_wage>);

void set_work_wage_pointer_values(std::vector<val::working_wage>*);
std::vector<val::working_wage>* get_work_wage_pointer_values();