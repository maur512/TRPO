#include "WorkWageManager.h"

int averageWorkWage(std::vector<val::working_wage>* work_wage_pointer,std::string worker_name_)
{
    std::vector<val::working_wage> :: iterator work_wage_it;
    int average_wage = 0;

    work_wage_it = work_wage_pointer->begin();
    while (work_wage_it <= work_wage_pointer -> end())
    {
        if (work_wage_it ->worker_NAME == worker_name_) 
        break;
    work_wage_it++;
    }
    std::cout << work_wage_it ->worker_NAME << std::endl;
    for (int i = 0; i < work_wage_it ->one_month_wage.size(); i++){
        average_wage = average_wage + work_wage_it ->one_month_wage[i];
        std::cout << i << " :: " << work_wage_it -> one_month_wage[i] << std::endl;}
        std::cout << average_wage << std::endl;
        std::cout << work_wage_it -> one_month_wage.size() << std::endl;
    average_wage = average_wage / work_wage_it -> one_month_wage.size();
    return average_wage;

}

void setWorkWage(std::vector<val::working_wage>* work_wage_pointer, std::string worker_name_)
{
    std::vector<int> wage;
    int input_wage = 0;
    char y_n = ' ';
    while (y_n != 'n')
    {
    std::cout << "Ввести зарплату за месяц? (y/n) \n";
    std::cin >> y_n;
    if (y_n == 'n') break;
    else y_n = ' ';
    std::cout << "Введите зарплату за месяц:: \n";
        while (input_wage <= 0)
        {
        std::cin >> input_wage;
        if (input_wage <= 0) std::cout << "Зарплата за месяц не может быть нулевой/отрицательной! \n";
        }
    wage.push_back(input_wage);
    input_wage = 0;
    }
    work_wage_pointer->push_back(val::working_wage(worker_name_,wage));
    return;
}

void openWorkWage(std::vector<val::working_wage>* work_wage_pointer_, std::string worker_name_)
{
    std::vector<val::working_wage> :: iterator work_wage_it;
    work_wage_it = work_wage_pointer_->begin();
    while (work_wage_it != work_wage_pointer_->end())
    {
        if (work_wage_it ->worker_NAME == worker_name_) break;
        work_wage_it++;
    }
    std::cout << "Зарплаты по месяцам:: ";
    for (int i = 0; i < work_wage_it ->one_month_wage.size(); i++)
    std::cout << work_wage_it ->one_month_wage[i] << " руб. ; ";
    std::cout << "\n";

}

void deleteWorkWage(std::vector<val::working_wage>* work_wage_pointer_, std::string worker_name_)
{
    std::vector<val::working_wage> :: iterator work_wage_it;
    work_wage_it = work_wage_pointer_->begin();
    while (work_wage_it != work_wage_pointer_->end())
    {
        if (work_wage_it ->worker_NAME == worker_name_) break;
        work_wage_it++;
    }
    work_wage_pointer_->erase(work_wage_it);

}

void changeWorkWage(std::vector<val::working_wage>* work_wage_pointer_,std::string worker_name_, std::string worker_name_changed)
{
    std::vector<val::working_wage> :: iterator work_wage_it;
int wage = 0;
char y_n = ' ';
    work_wage_it = work_wage_pointer_->begin();
    while (work_wage_it <= work_wage_pointer_ -> end())
    {
        if (work_wage_it ->worker_NAME == worker_name_) 
        break;
    work_wage_it++;
    }
    while (y_n != 'n')
    {
    std::cout << "Ввести зарплату за месяц? (y/n) \n";
    std::cin >> y_n;
    if (y_n == 'n') break;
    else y_n = ' ';
    std::cout << "Введите зарплату за месяц:: \n";
        while (wage <= 0)
        {
        std::cin >> wage;
        if (wage <= 0) std::cout << "Зарплата за месяц не может быть нулевой/отрицательной! \n";
        }

    work_wage_it ->one_month_wage.push_back(wage);
    wage = 0;
    }
    work_wage_it -> worker_NAME = worker_name_changed;
    return;

}