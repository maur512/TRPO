#include "FindManager.h"

void findName (std::vector<val::Values>* value_pointer) {

    std::string find_item;
    std::cout << "Введите имя для поиска: \n";
    std::cin >> find_item;
    
    std::vector<val::Values> ::iterator find_iterator;
    find_iterator = value_pointer->begin();
    while (find_iterator != value_pointer->end()) {
        if (!find_iterator->worker_name.find(find_item)) {
            std::cout << "Найдено имя: " << find_iterator->worker_name << std::endl <<
            "имя:  " << find_iterator->worker_name << ", отдел:  " << find_iterator->worker_dep <<
            ", должность:  " << find_iterator->worker_pos << ", з.п.:  " << find_iterator->montly_wage << std::endl;
        }
        find_iterator++;
    }
}

void findDep(std::vector<val::Values>* value_pointer) {

    std::string find_item;
    std::cout << "Ввежите должность для поиска: \n";
    std::cin >> find_item;

    std::vector<val::Values> ::iterator find_iterator;
    find_iterator = value_pointer->begin();
    while (find_iterator != value_pointer->end()) {
        if (!find_iterator->worker_pos.find(find_item))
            std::cout << "Найдена должность: " << find_iterator->worker_pos << std::endl <<
            "имя:  " << find_iterator->worker_name << ", отдел:  " << find_iterator->worker_dep <<
            ", должность:  " << find_iterator->worker_pos << ", з.п.:  " << find_iterator->montly_wage << std::endl;
        find_iterator++;
    }
}

void findWage(std::vector<val::Values>* value_pointer) {

    int find_item;
    std::cout << "Введите з.п. для поиска: \n";
    find_item = setIntValue();

    std::vector<val::Values> ::iterator find_iterator;
    find_iterator = value_pointer->begin();
    while (find_iterator != value_pointer->end()) {
        if (find_iterator->montly_wage == find_item)
            std::cout << "Найдена з.п.: " << find_iterator->montly_wage << std::endl <<
            "имя:  " << find_iterator->worker_name << ", отдел:  " << find_iterator->worker_dep <<
            ", должность:  " << find_iterator->worker_pos << ", з.п.:  " << find_iterator->montly_wage << std::endl;
        find_iterator++;
    }
}