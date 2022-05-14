#include "ValuesManager.h"

void addValue(std::vector<val::Values>* values_pointer){
    std::string worker_name, worker_pos;
    int montly_wage = -1, worker_dep = -1;
    std::cout << "Введите имя нового работника: " << std::endl;    
    std::cin >> worker_name;
    std::vector<val::Values> :: iterator add_element;
    add_element = values_pointer -> begin();
    while (add_element != values_pointer -> end()) {
        if (add_element -> worker_name == worker_name) {
            std::cout << "Работник уже существует!" << std::endl;
            return;
        } 
        add_element++;
    }
    std::cout << "Введите отдел нового работника: " << std::endl;
    std::cin >> worker_dep;
    while (worker_dep < 1 || worker_dep > 20) {
    std::cout << "Введите отдел (от 1 до 20): " << std::endl;
    std::cin >> worker_dep;
    }
    std::cout << "Введите должность нового работника: " << std::endl;
    std::cin >> worker_pos;
    std::cout << "Введите заработную плату за месяц нового работника: " << std::endl;
    std::cin >> montly_wage;
    values_pointer -> push_back(val::Values(worker_name,worker_pos,worker_dep,montly_wage));

} 
 void deleteValue(std::vector<val::Values>* values_pointer){
    std::string worker_name;
    bool is_element_found = false;
	std::vector<val::Values> :: iterator delete_element;
    while (is_element_found !=true) {
    std::cout << "Введите имя работника для удаления (сверьте со списком) или 'E' чтобы выйти: " << std::endl;
    std::cin >> worker_name;
    if (worker_name == "E") {std::cout << "Не удалено ни одого работника."; return;}
    delete_element = values_pointer -> begin();
    while (delete_element != values_pointer -> end ()) {
        if (delete_element -> worker_name == worker_name) {is_element_found = true; break;}
    delete_element++;
}   
    }
    values_pointer->erase(delete_element);
    std::cout << "Запись работника удалена успешно." << std::endl;
    return;
 }

void editValue(std::vector<val::Values>* values_pointer){
    std::string worker_name, worker_pos;
    int worker_dep = -1, montly_wage = -1;
    std::cout << "Введите имя редактируемого работника:  " << std::endl;    
    std::cin >> worker_name;
    std::vector<val::Values> :: iterator edit_element;
    edit_element = values_pointer -> begin();
    while (edit_element != values_pointer -> end()) {
        if (edit_element -> worker_name == worker_name) {
    std::cout << "Введите новое имя редактируемого работника: " << std::endl;    
    std::cin >> worker_name;
        edit_element ->worker_name = worker_name;
    std::cout << "Введите новую должность редактируемого работника: " << std::endl;
    std::cin >> worker_pos;
        edit_element ->worker_pos = worker_pos;
        while (worker_dep < 1 || worker_dep > 20 ) {
    std::cout << "Введите новый отдел редактируемого работника (от 1 до 20): " << std::endl;
    std::cin >> worker_dep;
        }
        edit_element ->worker_dep = worker_dep;
        std::cout << "Введите новую заработную плату за месяц редактируемого работника: " << std::endl;    
    std::cin >> montly_wage;
        edit_element ->montly_wage = montly_wage;
        std::cout << "Запись успешно отредактирована!" << std::endl;
            return;
        } else edit_element++;
    }
    std::cout << "Такого работника не существует!"  << std::endl;
}
void openValue(std::vector<val::Values>* values_pointer){
    std::vector<val::Values> :: iterator open_element;
    open_element = values_pointer -> begin();
    int i = 0;
    while (open_element != values_pointer -> end()) {
    std::cout << i << ". Имя: " << open_element -> worker_name<<
            "; Должность: " << open_element -> worker_pos <<
            "; Отдел: " << open_element -> worker_dep <<
            "; З.П за месяц: " << open_element -> montly_wage << " руб. ;" << std::endl;
    open_element++;
    i++;
        } 
    }


val::Values::Values(std::string worker_name_, std::string worker_pos_,int worker_dep_, int montly_wage_) {
	worker_name = worker_name_;
    worker_dep = worker_dep_;
    worker_pos = worker_pos_;
    montly_wage = montly_wage_;
}

void saveValuesToFile(std::vector<val::Values> values){
    std::ofstream out("valuesmanager.txt");
    std:: cout << "Сохранение базы данных в файл..." << std:: endl;
    for (int i = 0; i < values.size(); i++){
    out << values[i].worker_name << ' ' << values[i].worker_dep 
    << ' ' << values[i].worker_pos << ' ' << values[i].montly_wage << std::endl;}
    out.close();
    std:: cout << "Сохранение завершено успешно!" << std:: endl;
}