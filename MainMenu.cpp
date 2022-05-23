#include "MainMenu.h"

bool adminMenu(std::vector<acc::UserAccounts>* accounts_pointer, std::vector<val::Values>* values_pointer) {
    int menu_element = -1 , accounts_menu = -1, values_menu = -1, user_menu = -1, sort_menu = -1, find_menu = -1;
    while (menu_element != 0){
    showAdminMenu(0);
        menu_element = setIntValue();
        switch (menu_element) {
            case 0:
            break;
            case 1:
            while (accounts_menu != 0){
                showAdminMenu(1);
           accounts_menu = setIntValue();
            switch (accounts_menu) {
                case 0:
                break;
                case 1:
                addAccount(accounts_pointer);
                break;
                case 2:
                openAccount(accounts_pointer);
                break;
                case 3:
                editAccount(accounts_pointer);
                break;
                case 4:
                deleteAccount(accounts_pointer);
                break;
            }
            }
            accounts_menu = -1;
            break;
            case 2:
            while (values_menu != 0){
                showAdminMenu(2);
            values_menu = setIntValue();
            switch (values_menu) {
                case 0:
                break;
                case 1:
                openValue(values_pointer);
                break;
                case 2:
                addValue(values_pointer);
                break;
                case 3:
                editValue(values_pointer);
                break;
                case 4:
                deleteValue(values_pointer);
                break;
            }
            }
            values_menu = -1;
            break;
            case 3:
            while (user_menu != 0){
                showAdminMenu(3);
            user_menu = setIntValue();
            switch (user_menu) {
                case 0:
                break;
                case 1:
            openValue(values_pointer);
                break;
                case 2:
                    showFindMenu();
                    find_menu = setIntValue();
                
                    if (find_menu != 0) {
                        switch (find_menu) {
                        case 1:
                            findName(values_pointer);
                            break;
                        case 2:
                            findDep(values_pointer);
                            break;
                        case 3:
                            findWage(values_pointer);
                            break;
                        case 0:
                            break;
                        }
                    
                    }
                    find_menu = -1;
            
                break;
                case 3:
                while (sort_menu != 0) {
                while (sort_menu <0 || sort_menu >4){
            showSortMenu();
            sort_menu = setIntValue();
                }
            if (sort_menu != 0) valuesSort(values_pointer,sort_menu); else break;
            sort_menu = -1;
                }
            sort_menu = -1;
                break;
                case 4:

                break;
            }
            }
            user_menu = -1;
            break;
        }
        
    }
    menu_element = -1;
    return true;
}

bool userMenu(std::vector<val::Values>* values_pointer) {
int menu_element = -1 , sort_menu = -1, find_menu = -1, user_menu = -1;
    while (menu_element != 0){
    showUserMenu();
        menu_element = setIntValue();
        switch (menu_element) {
            case 0:
            break;
            case 1:
            openValue(values_pointer);
            break;
            case 2:
                showFindMenu();
                find_menu = setIntValue();
                if (find_menu != 0) {
                    switch (find_menu) {
                    case 1:
                        findName(values_pointer);
                        break;
                    case 2:
                        findDep(values_pointer);
                        break;
                    case 3:
                        findWage(values_pointer);
                        break;
                    case 0:
                        break;
                    }

                }
                find_menu = -1;
            break;
            case 3:
            while (sort_menu != 0) {
                while (sort_menu <0 || sort_menu >4){
            showSortMenu();
            sort_menu = setIntValue();
                }
            if (sort_menu != 0) valuesSort(values_pointer,sort_menu); else break;
            sort_menu = -1;
                }
            sort_menu = -1;
            break;
            case 4:
            break;
        }
    }
    menu_element = -1;
    return true;
}

bool logon(std::vector<acc::UserAccounts>::iterator login_account, std::vector<acc::UserAccounts>* accounts_pointer, std::vector<val::Values>* values_pointer) {
    char y_n = ' ';
    switch (login_account -> role)
    {
    case 2:
    adminMenu(accounts_pointer, values_pointer);
    std:: cout << "Вы хотите выйти? y/n" << std:: endl;
    std::cin >> y_n;
    if (y_n == 'y') return true;
    y_n = ' ';
    return false;
        break;
    
    case 1:
    userMenu(values_pointer);
    std:: cout << "Вы хотите выйти? y/n" << std:: endl;
    std::cin >> y_n;
    if (y_n == 'y') return true;
    y_n = ' ';
    return false;
        break;
    }
    return true;
}


