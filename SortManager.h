/*
Менеджер сортировки с компаратором
*/

#pragma once
#include <algorithm>
#include "includer.h"
  
  

struct wage_sort {
    bool operator()(const val::Values val1,const val::Values val2){
        return val1.montly_wage < val2.montly_wage;
    }
};

struct name_sort {
    bool operator()(const val::Values val1,const val::Values val2){
        return val1.worker_name < val2.worker_name;
    }
};

struct dep_sort {
    bool operator()(const val::Values val1,const val::Values val2){
        return val1.worker_dep < val2.worker_dep;
    }
};

struct pos_sort {
    bool operator()(const val::Values val1,const val::Values val2){
        return val1.worker_pos < val2.worker_pos;
    }
};

 
  void valuesSort(std::vector<val::Values>* , int);