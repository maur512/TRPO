/*
Менеджер поиска в базе работников.

*/


#pragma once
#include "includer.h"

// найти по имени
void findName (std::vector<val::Values>*);
// найти по должности
void findDep(std::vector<val::Values>*);
// найти по зп
void findWage(std::vector<val::Values>*);