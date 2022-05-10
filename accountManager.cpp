#include "accountManager.h"

/*
Реализую векторы. Программа будет считывать файл данных аккаунтов, если он пустой, будет
вызывать функцию firstStart, с аккаунтом админ админ
Читаем файл, записываем в векторы либо в массив структур
Работаем непосредственно с массивом\вектором
при выходе из программы сохраняем вектор\массив в файл
*/


void addAccount(){
    std::string login, password;
    int role = -1, priority = -1;

    std::cout << "Введите логин новой учётной записи: " << std::endl;    
    std::cin >> login;
    std::cout << "Введите пароль новой учётной записи: " << std::endl;
    std::cin >> password;
    password = md5(password+PASSWORD_SALT);
    std::cout << "Введите приоритет новой учётной записи: " << std::endl;
    std::cin >> priority;
    std::cout << "Введите роль новой учётной записи: " << std::endl;
    std::cin >> role;
    std::ofstream fout("accountmanager.txt",std::ios_base::app);
    fout << login << " " << password << " " << priority << " " << role << std::endl;
    fout.close();

}
void deleteAccount(){

}
void editAccount(){

}
void openAccount(){

}