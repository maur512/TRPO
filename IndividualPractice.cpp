#include "IndividualPractice.h"



void allWageInDepartment(std::vector<val::Values>* values_pointer)
{
    int all_wage = 0, average_wage = 0;
    float result = 0;
    std::vector<val::Values> :: iterator wage_it = values_pointer->begin();

        for (int i = 1; i <= 20; i++)
        {
            while (wage_it != values_pointer -> end())
            {
                if (wage_it ->worker_dep == i) 
                {
                all_wage = all_wage + wage_it ->montly_wage;
                average_wage++;
                }
                wage_it++;
            }
            if (average_wage != 0) 
            {
            result = all_wage / average_wage;
            std::cout << "Выплаты по отделу №" << i << " составили " << all_wage << " руб. \n";
            std:: cout << "Средняя з/п по отделу №" << i << " составила " << result << " руб. \n";
            }
            all_wage = 0;
            average_wage = 0;
            result = 0;
            wage_it = values_pointer->begin();
        }

}


void lowWageWorkers(std::vector<val::Values>* values_pointer)
{
    std::cout << "Введите границу з.п.:  \n";
int low_Wage = setIntValue();
std::vector<val::Values> :: iterator low_wage = values_pointer->begin();
std::cout << "Сотрудники с меньшей з.п.: " << low_Wage << std::endl;
    while (low_wage != values_pointer->end())
    {
        if(low_wage ->montly_wage < low_Wage) 
        std::cout  <<
                "имя:  " << low_wage->worker_name << ", отдел:  " << low_wage->worker_dep <<
                ", должность:  " << low_wage->worker_pos << ", з.п.:  " << low_wage->montly_wage << std::endl;
    low_wage++;
    }

}