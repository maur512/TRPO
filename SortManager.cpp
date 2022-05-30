



    #include "SortManager.h"
    
    void valuesSort(std::vector<val::Values>* values_pointer, int mode) 
    {

        switch(mode) 
        {
            case 1:
            std::sort(values_pointer->begin(),values_pointer ->end(), name_sort());
            std::cout << "Сортировка по имени выполнена успешно!\n";
            break;
            case 2:

            std::sort(values_pointer->begin(),values_pointer ->end(), dep_sort());
            std::cout << "Сортировка по отделу выполнена успешно!\n";
            break;
            case 3:

            std::sort(values_pointer->begin(),values_pointer ->end(), pos_sort());
            std::cout << "Сортировка по должности выполнена успешно!\n";
            break;
            case 4:

            std::sort(values_pointer->begin(),values_pointer ->end(), wage_sort());
            std::cout << "Сортировка по размеру з.п. выполнена успешно!\n";
            break;
        }
    }