

#include "accountManager.h"

void addAccount(std::vector<acc::UserAccounts>* accounts_pointer)
{
    std::string login, password;
    int role = -1;
    std::vector<acc::UserAccounts> :: iterator add_element;

    std::cout << "Введите логин новой учётной записи: " << std::endl;    
    std::cin >> login;
    add_element = accounts_pointer -> begin();
    while (add_element != accounts_pointer -> end() ) 
    {
        if (add_element -> login == login) 
        {
            std::cout << "Логин уже существует!" << std::endl;
            return;
        } 
        add_element++;
    }
    std::cout << "Введите пароль новой учётной записи: " << std::endl;
    std::cin >> password;
    password = md5(password+acc::PASSWORD_SALT);
    while (role != 1 && role != 2) 
    {
    std::cout << "Введите роль новой учётной записи (1- user, 2 - admin): " << std::endl;
    role = setIntValue();
    }
    accounts_pointer -> push_back(acc::UserAccounts(login, password, role));

} 
 void deleteAccount(std::vector<acc::UserAccounts>* accounts_pointer)
 {
    std::string login;
    bool is_element_found = false;
	std::vector<acc::UserAccounts> :: iterator delete_element;

    while (is_element_found !=true) 
    {
    std::cout << "Введите логин учётной записи для удаления или 'E' чтобы выйти: " << std::endl;
    std::cin >> login;
        if (login == "E") 
        {
        std::cout << "Не удалено ни одной учётной записи."; return;
        }
    delete_element = accounts_pointer -> begin();
        while (delete_element != accounts_pointer -> end() ) 
        {
            if (delete_element -> login == login) 
            {
            is_element_found = true;
            break;
            }
        delete_element++;
        }   
    }
    accounts_pointer->erase(delete_element);
    std::cout << "Запись удалена успешно." << std::endl;
    return;
 }

void editAccount(std::vector<acc::UserAccounts>* accounts_pointer)
{
    std::string login, password;
    int role = -1, priority = -1;
    std::vector<acc::UserAccounts> :: iterator edit_element;

    std::cout << "Введите логин редактируемой учётной записи: " << std::endl;    
    std::cin >> login;
    edit_element = accounts_pointer -> begin();
    while (edit_element != accounts_pointer -> end()) 
    {
        if (edit_element -> login == login) 
        {
        std::cout << "Введите новый логин редактируемой учётной записи: " << std::endl;    
        std::cin >> login;
        edit_element ->login = login;
        std::cout << "Введите новый пароль редактируемой учётной записи: " << std::endl;
        std::cin >> password;
        password = md5(password+acc::PASSWORD_SALT);
        edit_element ->password = password;
            while (role != 1 && role != 2 ) 
            {
            std::cout << "Введите новую роль редактируемой учётной записи (1 - user, 2 - admin): " << std::endl;
            role = setIntValue();
            }
        edit_element ->role = role;
        std::cout << "Запись успешно отредактирована!" << std::endl;
        return;
        } else 
            edit_element++;
    }
    std::cout << "Учетной записи с таким логином не существует!"  << std::endl;
}
void openAccount(std::vector<acc::UserAccounts>* accounts_pointer)
{
    std::vector<acc::UserAccounts> :: iterator open_element;

    open_element = accounts_pointer -> begin();
    int i = 0;
    while (open_element != accounts_pointer -> end()) 
    {
    std::cout << i << ". login: " << open_element -> login <<
            "; password (hashed): " << open_element -> password <<
            "; role: " << open_element -> role << " ;" << std::endl;
    open_element++;
    i++;
    } 
}




void saveAccountsToFile(std::vector<acc::UserAccounts> accounts)
{
    std:: cout << "Сохранение аккаунтов в файл..." << std:: endl;
    std::ofstream out("accountmanager.txt");
    for (int i = 0; i < accounts.size(); i++){
    out << accounts[i].login << ' ' << accounts[i].password 
    << ' ' << accounts[i].role << std::endl;}
    out.close();
    std:: cout << "Сохранение завершено успешно!" << std:: endl;
}