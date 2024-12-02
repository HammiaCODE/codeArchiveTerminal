//
// Created by hanes on 12/1/2024.
//

#ifndef LINEARSEARCH_H
#define LINEARSEARCH_H

#include <iostream>
using namespace std;

class linearSearchAlg {
public:
    int linearSearch(vector <int> linear, int search) {
        for (int i = 0; i < linear.size(); i++)
            if (linear[i] == search)
                return i;
        return -1;
    }
};

#endif //LINEARSEARCH_H
