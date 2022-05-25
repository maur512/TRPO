#include "includer.h"


int setIntValue()
{
    std::string number;
    int menu_value = -1;
    while (std::getline(std::cin, number))
    {
        std::stringstream ss(number);
        if (ss >> menu_value)
        {
            if (ss.eof())
            {
                return menu_value;
                break;
            }
        }
        std::cout << ":::  \n";
    }
}


val::Values::Values(std::string worker_name_, std::string worker_pos_,int worker_dep_, int montly_wage_) {
	worker_name = worker_name_;
    worker_dep = worker_dep_;
    worker_pos = worker_pos_;
    montly_wage = montly_wage_;
}

acc::UserAccounts::UserAccounts(std::string login_, std::string password_, int role_)
{
	password = password_;
	login = login_;
	role = role_;
}

val::working_wage::working_wage(std::string worker_NAME_, std::vector<int> one_month_wage_)
{
    worker_NAME = worker_NAME_;
    one_month_wage = one_month_wage_;
}