/*
Реализация интерфейса админа и пользователя, вход в аккаунты

*/



#pragma once
#include "ShowMenu.h"
#include "includer.h"
#include "accountManager.h"
#include "ValuesManager.h"
#include "SortManager.h"
#include "FindManager.h"
#include "IndividualPractice.h"

bool adminMenu(std::vector<acc::UserAccounts>*);
bool userMenu(std::vector<val::Values>*);
bool  logon(std::vector<acc::UserAccounts> :: iterator,std::vector<acc::UserAccounts>*, std::vector<val::Values>*);

const int   DEFAULT_MENU_POINT = -1,
            EXIT_MENU_POINT = 0,
            MENU_POINT_1 = 1,
            MENU_POINT_2 = 2,
            MENU_POINT_3 = 3,
            MENU_POINT_4 = 4;