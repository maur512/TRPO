#include "MainMenu.h"

bool adminMenu(std::vector<acc::UserAccounts>* accounts_pointer, std::vector<val::Values>* values_pointer) 
{

int ind_menu = DEFAULT_MENU_POINT, 
    menu_element = DEFAULT_MENU_POINT , 
    accounts_menu = DEFAULT_MENU_POINT, 
    values_menu = DEFAULT_MENU_POINT, 
    user_menu = DEFAULT_MENU_POINT, 
    sort_menu = DEFAULT_MENU_POINT, 
    find_menu = DEFAULT_MENU_POINT;


    while (menu_element != EXIT_MENU_POINT)
    {
        showAdminMenu(EXIT_MENU_POINT);
        menu_element = setIntValue();
            switch (menu_element) 
            {

                case EXIT_MENU_POINT:
                break;

                case MENU_POINT_1:
                while (accounts_menu != EXIT_MENU_POINT)
                {
                showAdminMenu(MENU_POINT_1);
                accounts_menu = setIntValue();
                    switch (accounts_menu) 
                    {

                        case EXIT_MENU_POINT:
                        break;

                        case MENU_POINT_1:
                        addAccount(accounts_pointer);
                        break;

                        case MENU_POINT_2:
                        openAccount(accounts_pointer);
                        break;

                        case MENU_POINT_3:
                        editAccount(accounts_pointer);
                        break;

                        case MENU_POINT_4:
                        deleteAccount(accounts_pointer);
                        break;

                    }
                }
                accounts_menu = DEFAULT_MENU_POINT;
                break;

                case MENU_POINT_2:
                while (values_menu != EXIT_MENU_POINT)
                {
                    showAdminMenu(MENU_POINT_2);
                    values_menu = setIntValue();
                    switch (values_menu) 
                    {
                        case EXIT_MENU_POINT:
                        break;

                        case MENU_POINT_1:
                        openValue(values_pointer);
                        break;

                        case MENU_POINT_2:
                        addValue(values_pointer);
                        break;

                        case MENU_POINT_3:
                        editValue(values_pointer);
                        break;

                        case MENU_POINT_4:
                        deleteValue(values_pointer);
                        break;

                    }
                }
                values_menu = DEFAULT_MENU_POINT;
                break;

                case MENU_POINT_3:
                while (user_menu != EXIT_MENU_POINT)
                {
                    showAdminMenu(MENU_POINT_3);
                    user_menu = setIntValue();
                    switch (user_menu) 
                    {
                        case EXIT_MENU_POINT:
                        break;

                    case MENU_POINT_1:
                    openValue(values_pointer);
                    break;

                    case MENU_POINT_2:
                    showFindMenu();
                    find_menu = setIntValue();
                    if (find_menu != EXIT_MENU_POINT) 
                    {
                        switch (find_menu) 
                        {
                            case MENU_POINT_1:
                            findName(values_pointer);
                            break;

                            case MENU_POINT_2:
                            findDep(values_pointer);
                            break;

                            case MENU_POINT_3:
                            findWage(values_pointer);
                            break;

                            case EXIT_MENU_POINT:
                            break;

                        }
                    
                    }
                    find_menu = DEFAULT_MENU_POINT;
                    break;

                    case MENU_POINT_3:
                    while (sort_menu != EXIT_MENU_POINT) 
                    {
                        while (sort_menu <EXIT_MENU_POINT || sort_menu >MENU_POINT_4)
                        {
                        showSortMenu();
                        sort_menu = setIntValue();
                        }
                        if (sort_menu != EXIT_MENU_POINT) valuesSort(values_pointer,sort_menu); 
                        else break;
                        sort_menu = DEFAULT_MENU_POINT;
                    }
                    sort_menu = DEFAULT_MENU_POINT;
                    break;

                    case MENU_POINT_4:
                    showIndividualMenu();
                    ind_menu = setIntValue();
                    if (ind_menu != EXIT_MENU_POINT) 
                    {
                        switch (ind_menu) 
                        {
                            case MENU_POINT_1:
                            allWageInDepartment(values_pointer);
                            break;
                            case MENU_POINT_2:
                            lowWageWorkers(values_pointer);
                            break;
                            case EXIT_MENU_POINT:
                            break;
                        }
                    }
                    ind_menu = DEFAULT_MENU_POINT;
                    break;
                    }
                }
                user_menu = DEFAULT_MENU_POINT;
                break;
            }
        
    }
    menu_element = DEFAULT_MENU_POINT;
    return true;
}

bool userMenu(std::vector<val::Values>* values_pointer) 
{
int menu_element = DEFAULT_MENU_POINT , 
    sort_menu = DEFAULT_MENU_POINT, 
    find_menu = DEFAULT_MENU_POINT, 
    user_menu = DEFAULT_MENU_POINT, 
    ind_menu = DEFAULT_MENU_POINT;

    while (menu_element != EXIT_MENU_POINT)
    {
    showUserMenu();
    menu_element = setIntValue();
        switch (menu_element) 
        {
            case EXIT_MENU_POINT:
            break;

            case MENU_POINT_1:
            openValue(values_pointer);
            break;

            case MENU_POINT_2:
            showFindMenu();
            find_menu = setIntValue();
            if (find_menu != EXIT_MENU_POINT)
            {
                switch (find_menu) 
                {
                        case MENU_POINT_1:
                        findName(values_pointer);
                        break;

                        case MENU_POINT_2:
                        findDep(values_pointer);
                        break;

                        case MENU_POINT_3:
                        findWage(values_pointer);
                        break;

                        case EXIT_MENU_POINT:
                        break;
                }

            }
            find_menu = DEFAULT_MENU_POINT;
            break;

            case MENU_POINT_3:
            while (sort_menu != EXIT_MENU_POINT) 
            {
                while (sort_menu <EXIT_MENU_POINT || sort_menu >MENU_POINT_4)
                {
                    showSortMenu();
                    sort_menu = setIntValue();
                }
            if (sort_menu != EXIT_MENU_POINT) valuesSort(values_pointer,sort_menu);
            else break;
            sort_menu = DEFAULT_MENU_POINT;
            }
            sort_menu = DEFAULT_MENU_POINT;
            break;

            case MENU_POINT_4:
            showIndividualMenu();
                    ind_menu = setIntValue();
                    if (ind_menu != EXIT_MENU_POINT) 
                    {
                        switch (ind_menu) 
                        {
                            case MENU_POINT_1:
                            allWageInDepartment(values_pointer);
                            break;

                            case MENU_POINT_2:
                            lowWageWorkers(values_pointer);
                            break;

                            case EXIT_MENU_POINT:
                            break;

                        }
                    }
                    ind_menu = DEFAULT_MENU_POINT;
            break;
        }
    }
    menu_element = DEFAULT_MENU_POINT;
    return true;
}

bool logon(std::vector<acc::UserAccounts>::iterator login_account, std::vector<acc::UserAccounts>* accounts_pointer, std::vector<val::Values>* values_pointer) 
{
    char y_n = ' ';
    
    switch (login_account -> role)
    {
        case MENU_POINT_2:
        adminMenu(accounts_pointer, values_pointer);
        std:: cout << "Вы хотите выйти? y/n" << std:: endl;
        std::cin >> y_n;
        if (y_n == 'y') return true;
        y_n = ' ';
        return false;
        break;
    
        case MENU_POINT_1:
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


