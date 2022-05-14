#pragma once
#include "ShowMenu.h"
#include "includer.h"
#include "accountManager.h"
#include "ValuesManager.h"
#include "SortManager.h"

bool adminMenu(std::vector<acc::UserAccounts>*);
bool userMenu(std::vector<val::Values>*);
bool  logon(std::vector<acc::UserAccounts> :: iterator,std::vector<acc::UserAccounts>*, std::vector<val::Values>*);