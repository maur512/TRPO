
#include "ShowMenu.h"



void showAdminMenu(int menu) {

	switch (menu) {
	case 0:
		std::cout << "----------------------------------------------------------- \n";
		std::cout << "|                   МЕНЮ АДМИНИСТРАТОРА                   | \n";
		std::cout << "|                  1. Управление учетными записями;       | \n";                    //admin menu 0
		std::cout << "|                  2. Редактирование данных;              | \n";
		std::cout << "|                  3. Работа с данными;                   | \n";
		std::cout << "|                  0. Выход в логин меню.                 | \n";
		std::cout << "----------------------------------------------------------- \n";
		break;
	case 1:
		std::cout << "----------------------------------------------------------- \n";
		std::cout << "|                    МЕНЮ АДМИНИСТРАТОРА                  | \n";
		std::cout << "|                  1. Добавить учётную запись ;           | \n";               //admin menu 1
		std::cout << "|                  2. Просмотр учетных записей;           | \n";
		std::cout << "|                  3. Редактирование учётной записи;      | \n";
		std::cout << "|                  4. Удаление учётной записи;            | \n";
		std::cout << "|                  0. Выход в главное меню.               | \n";
		std::cout << "----------------------------------------------------------- \n";
		break;
	case 2:
		std::cout << "----------------------------------------------------------- \n";
		std::cout << "|                    МЕНЮ АДМИНИСТРАТОРА                  | \n";
		std::cout << "|                  1. Просмотр данных;                    | \n";
		std::cout << "|                  2. Добавление новых данных;            | \n";                 //admin menu 2
		std::cout << "|                  3. Редактирование данных;              | \n";
		std::cout << "|                  4. Удаление данных;                    | \n";
		std::cout << "|                  0. Выход в главное меню.               | \n";
		std::cout << "----------------------------------------------------------- \n";
		break;
	case 3:
		std::cout << "----------------------------------------------------------- \n";
		std::cout << "|                    МЕНЮ АДМИНИСТРАТОРА                  | \n";
		std::cout << "|                  1. Просмотр данных;                    | \n";             //admin menu 3
		std::cout << "|                  2. Поиск и фильтрация данных;          | \n";
		std::cout << "|                  3. Сортировка;                         | \n";
		std::cout << "|                  4. Инд. задание;                       | \n";
		std::cout << "|                  0. Выход в главное меню.               | \n";
		std::cout << "----------------------------------------------------------- \n";
		break;
	}
}

void showUserMenu() {
	std::cout << "----------------------------------------------------------- \n";
	std::cout << "|                    Меню пользователя                    | \n";
	std::cout << "|                  1. Просмотр данных;                    | \n";             //admin menu 3
	std::cout << "|                  2. Поиск и фильтрация данных;          | \n";
	std::cout << "|                  3. Сортировка;                         | \n";
	std::cout << "|                  4. Инд. задание;                       | \n";
	std::cout << "|                  0. Выход в главное меню.               | \n";
	std::cout << "----------------------------------------------------------- \n";

}

void showSortMenu() {
	std::cout << "----------------------------------------------------------- \n";
	std::cout << "|                    МЕНЮ СОРТИРОВКИ                      | \n";
	std::cout << "|                  1. По имени;                           | \n";
	std::cout << "|                  2. По отделу;                          | \n";
	std::cout << "|                  3. По должности;                       | \n";
	std::cout << "|                  4. По размеру з.п;                     | \n";
	std::cout << "|                  0. Выйти в главное меню.               | \n";
	std::cout << "----------------------------------------------------------- \n";

}

void showFindMenu() {
	std::cout << "----------------------------------------------------------- \n";
	std::cout << "|                    МЕНЮ ПОИСКА                          | \n";
	std::cout << "|                  1. По имени;                           | \n";
	std::cout << "|                  2. По должности;                       | \n";
	std::cout << "|                  3. По размеру з.п.;                    | \n";
	std::cout << "|                  0. Выйти в главное меню.               | \n";
	std::cout << "----------------------------------------------------------- \n";

}

void showLoginMenu() {
	std::cout << "*********************************************************** \n";
	std::cout << "----------------------------------------------------------- \n";
	std::cout << "|                    МЕНЮ АВТОРИЗАЦИИ                     | \n";
	std::cout << "----------------------------------------------------------- \n";
	

}


void showIndividualMenu() {
	std::cout << "----------------------------------------------------------- \n";
	std::cout << "|                    МЕНЮ ЗАДАНИЯ                         | \n";
	std::cout << "|                  1. Средние выплаты;                    | \n";
	std::cout << "|                  2. Сотрудники с меньшим зп;            | \n";
	std::cout << "|                  0. Выйти в главное меню.               | \n";
	std::cout << "----------------------------------------------------------- \n";


}