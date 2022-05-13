#include "MainMenu.h"

bool adminMenu(std::vector<acc::UserAccounts>* accounts_pointer) {
    int menu_element = -1 , accounts_menu = -1, values_menu = -1, user_menu = -1;
    while (menu_element != 0){
    showAdminMenu(0);
        std::cin >> menu_element;
        switch (menu_element) {
            case 0:
            break;
            case 1:
            while (accounts_menu != 0){
                showAdminMenu(1);
            std::cin >> accounts_menu;
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
            break;
            case 2:
            while (values_menu != 0){
                showAdminMenu(2);
            std::cin >> values_menu;
            switch (values_menu) {
                case 0:
                break;
                case 1:
                
                break;
                case 2:
                break;
                case 3:
                break;
                case 4:
                break;
            }
            }
            break;
            case 3:
            while (user_menu != 0){
                showAdminMenu(3);
            std::cin >> user_menu;
            switch (user_menu) {
                case 0:
                break;
                case 1:
                break;
                case 2:
                break;
                case 3:
                break;
                case 4:
                break;
            }
            }
            break;
        }
    }
    return true;
}