#include "accountManager.h"

/*
Реализую векторы. Программа будет считывать файл данных аккаунтов, если он пустой, будет
вызывать функцию firstStart, с аккаунтом админ админ
Читаем файл, записываем в векторы либо в массив структур
Работаем непосредственно с массивом\вектором
при выходе из программы сохраняем вектор\массив в файл
*/



void addAccount(std::vector<acc::UserAccounts>* accounts_pointer){
    std::string login, password;
    int role = -1, priority = -1;
    std::cout << "Введите логин новой учётной записи: " << std::endl;    
    std::cin >> login;
    for (int i = 0; i < accounts_pointer -> size(); i++);
    std::cout << "Введите пароль новой учётной записи: " << std::endl;
    std::cin >> password;
    password = md5(password+acc::PASSWORD_SALT);
    std::cout << "Введите приоритет новой учётной записи: " << std::endl;
    std::cin >> priority;
    std::cout << "Введите роль новой учётной записи: " << std::endl;
    std::cin >> role;
    accounts_pointer -> push_back(acc::UserAccounts(login, password, role, priority));

} 
 void deleteAccount(){
       std::vector<acc::UserAccounts> accounts;
    std::string login;
    std::cout << "Введите логин новой учётной записи: " << std::endl;
    std::cin >> login;
	std::vector<acc::UserAccounts> :: iterator delete_element;
    delete_element = accounts.begin();
    int i;
    while (login != accounts[i].login){
    delete_element++;
    i++;
    }
    accounts.erase(delete_element);
    std::cout << "successfully deleted!" << std::endl;
}   

void editAccount(){

}
void openAccount(){

}

acc::UserAccounts::UserAccounts(std::string login_, std::string password_, int role_, int priority_) {
	password = password_;
	login = login_;
	role = role_;
	priority = priority_;
}

void saveAccountsToFile(std::vector<acc::UserAccounts> accounts){
    std::ofstream out("accountmanager.txt");
    for (int i = 0; i < accounts.size(); i++){
    out << accounts[i].login << ' ' << accounts[i].password 
    << ' ' << accounts[i].role << ' ' << accounts[i].priority << std::endl;}
    out.close();
}