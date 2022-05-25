/*
Менеджер аккаунтов, отвечает за создание, редактирование и удаление аккаунтов, а также
сохранение базы данных аккаунтов в файл.
*/




#pragma once

#include "includer.h"
#include "md5.h"

// добавить аккаунт
void addAccount(std::vector<acc::UserAccounts>*);
// удалить аккаунт 
void deleteAccount(std::vector<acc::UserAccounts>*);
// изменить аккаунт
void editAccount(std::vector<acc::UserAccounts>*);
// вывести список всех аккаунтов
void openAccount(std::vector<acc::UserAccounts>*);
// сохранить аккаунты в файл
void saveAccountsToFile(std::vector<acc::UserAccounts>);