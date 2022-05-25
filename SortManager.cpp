



    #include "SortManager.h"
    
    void valuesSort(std::vector<val::Values>* values_pointer, int mode) 
    {

        switch(mode) 
        {
            case 1:
            std::sort(values_pointer->begin(),values_pointer ->end(), name_sort());
            break;
            case 2:

            std::sort(values_pointer->begin(),values_pointer ->end(), dep_sort());
            break;
            case 3:

            std::sort(values_pointer->begin(),values_pointer ->end(), pos_sort());
            break;
            case 4:

            std::sort(values_pointer->begin(),values_pointer ->end(), wage_sort());
            break;
        }
    }