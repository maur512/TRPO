#include "accountManager.h"

void addAccount(std::vector<acc::UserAccounts>* accounts_pointer){
    std::string login, password;
    int role = -1, priority = -1;
    std::cout << "Введите логин новой учётной записи: " << std::endl;    
    std::cin >> login;
    std::vector<acc::UserAccounts> :: iterator add_element;
    add_element = accounts_pointer -> begin();
    while (add_element != accounts_pointer -> end()) {
        if (add_element -> login == login) {
            std::cout << "Логин уже существует!" << std::endl;
            return;
        } 
        add_element++;
    }
    std::cout << "Введите пароль новой учётной записи: " << std::endl;
    std::cin >> password;
    password = md5(password+acc::PASSWORD_SALT);
    std::cout << "Введите приоритет новой учётной записи: " << std::endl;
    std::cin >> priority;
    std::cout << "Введите роль новой учётной записи: " << std::endl;
    std::cin >> role;
    accounts_pointer -> push_back(acc::UserAccounts(login, password, role, priority));

} 
 void deleteAccount(std::vector<acc::UserAccounts>* accounts_pointer){
    std::string login;
    bool is_element_found = false;
	std::vector<acc::UserAccounts> :: iterator delete_element;
    while (is_element_found !=true) {
    std::cout << "Введите логин учётной записи для удаления или 'E' чтобы выйти: " << std::endl;
    std::cin >> login;
    if (login == "E") {std::cout << "Не удалено ни одной учётной записи."; return;}
    delete_element = accounts_pointer -> begin();
    while (delete_element != accounts_pointer -> end ()) {
        if (delete_element -> login == login) {is_element_found = true; break;}
    delete_element++;
}   
    }
    accounts_pointer->erase(delete_element);
    std::cout << "Запись удалена успешно." << std::endl;
    return;
 }

void editAccount(std::vector<acc::UserAccounts>* accounts_pointer){
    std::string login, password;
    int role = -1, priority = -1;
    std::cout << "Введите логин редактируемой учётной записи: " << std::endl;    
    std::cin >> login;
    std::vector<acc::UserAccounts> :: iterator edit_element;
    edit_element = accounts_pointer -> begin();
    while (edit_element != accounts_pointer -> end()) {
        if (edit_element -> login == login) {
    std::cout << "Введите новый логин редактируемой учётной записи: " << std::endl;    
    std::cin >> login;
        edit_element ->login = login;
    std::cout << "Введите новый пароль редактируемой учётной записи: " << std::endl;
    std::cin >> password;
    
    password = md5(password+acc::PASSWORD_SALT);
    
        edit_element ->password = password;
    std::cout << "Введите новый приоритет редактируемой учётной записи: " << std::endl;
    std::cin >> priority;
        edit_element ->priority = priority;
    std::cout << "Введите новую роль редактируемой учётной записи: " << std::endl;
    std::cin >> role;
        edit_element ->role = role;
        std::cout << "Запись успешно отредактирована!" << std::endl;
            return;
        } else edit_element++;
    }
    std::cout << "Учетной записи с таким логином не существует!"  << std::endl;
}
void openAccount(std::vector<acc::UserAccounts>* accounts_pointer){
    std::vector<acc::UserAccounts> :: iterator open_element;
    open_element = accounts_pointer -> begin();
    int i = 0;
    while (open_element != accounts_pointer -> end()) {
    std::cout << i << ". login: " << open_element -> login <<
            "; password (hashed): " << open_element -> password <<
            "; role: " << open_element -> role << "; priority: " <<
            open_element -> priority << " ;" << std::endl;
    open_element++;
    i++;
        } 
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