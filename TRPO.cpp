﻿// TRPO.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//


#include "includer.h"
#include "menu.h"
#include "LoginAccess.h"
#include "accountManager.h"
#include "init.h"

using namespace std;

int main()
{
    std::vector<acc::UserAccounts>* accounts_pointer;
    std::vector<acc::UserAccounts> accounts ;
    accounts_pointer = &accounts;
    accounts = initSize();
    for (int i = 0; i < accounts.size(); i++) {
    cout << accounts[i].login << endl;
    cout << accounts[i].password << endl;
    cout << accounts[i].role << endl;
    cout << accounts[i].priority << endl;
    
    }
    setlocale(LC_ALL, "Russian");
   showLoginMenu();
   while (login_input() == false);
    while (password_input() == false);
        showAdminMenu(0);
        showAdminMenu(1);
        showAdminMenu(2);
        showAdminMenu(3);
        showSortMenu();
        showFindMenu();
        showUserMenu();
        addAccount(accounts_pointer);
        saveAccountsToFile(accounts);
    return 0;
}







// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
