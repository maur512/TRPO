// TRPO.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//


#include "includer.h"
#include "MainMenu.h"
#include "LoginAccess.h"
#include "init.h"

using namespace std;



int main()
{
std::vector<acc::UserAccounts> accounts;
std::vector<acc::UserAccounts>* accounts_pointer = &accounts;
std::vector<val::Values> values;
std::vector<val::Values>* values_pointer = &values;
std::vector<val::working_wage> work_wage;
std::vector<val::working_wage>* work_wage_pointer = &work_wage;
    accounts = initSize();
    values = initValues();
    work_wage = initOneMonthWage();
    set_work_wage_pointer_values(work_wage_pointer);
    setlocale(LC_ALL, "Russian");
        showLoginMenu();
       while( logon(password_input(login_input(accounts_pointer)),accounts_pointer,values_pointer) != true);
        saveAccountsToFile(accounts);
        saveValuesToFile(values);
        saveWagesToFile(work_wage);
    
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
