#include "FindManager.h"

void findName (std::vector<val::Values>* value_pointer) {

    std::string find_item;
    std::cout << "������� ��� ��� ������: \n";
    cin >> find_item;
    
    std::vector<val::Values> ::iterator find_iterator;
    find_iterator = value_pointer->begin();
    while (find_iterator != value_pointer->end()) {
        if (find_iterator->worker_name.find(find_item))
            std::cout << "������� ���: " << find_iterator->worker_name << std::endl <<
            "���:  " << find_iterator->worker_name << ", �����:  " << find_iterator->worker_dep <<
            ", ���������:  " << find_iterator->worker_pos << ", �.�.:  " << find_iterator->montly_wage << std::endl;
        find_iterator++;
    }
}

void findDep(std::vector<val::Values>* value_pointer) {

    std::string find_item;
    std::cout << "������� ��������� ��� ������: \n";
    cin >> find_item;

    std::vector<val::Values> ::iterator find_iterator;
    find_iterator = value_pointer->begin();
    while (find_iterator != value_pointer->end()) {
        if (find_iterator->worker_dep.find(find_item))
            std::cout << "������� ���������: " << find_iterator->worker_dep << std::endl <<
            "���:  " << find_iterator->worker_name << ", �����:  " << find_iterator->worker_dep <<
            ", ���������:  " << find_iterator->worker_pos << ", �.�.:  " << find_iterator->montly_wage << std::endl;
        find_iterator++;
    }
}

void findWage(std::vector<val::Values>* value_pointer) {

    int find_item;
    std::cout << "������� �.�. ��� ������: \n";
    cin >> find_item;

    std::vector<val::Values> ::iterator find_iterator;
    find_iterator = value_pointer->begin();
    while (find_iterator != value_pointer->end()) {
        if (find_iterator->montly_wage = find_item)
            std::cout << "������� �.�.: " << find_iterator->montly_wage << std::endl <<
            "���:  " << find_iterator->worker_name << ", �����:  " << find_iterator->worker_dep <<
            ", ���������:  " << find_iterator->worker_pos << ", �.�.:  " << find_iterator->montly_wage << std::endl;
        find_iterator++;
    }
}