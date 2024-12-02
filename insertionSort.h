//
// Created by hanes on 12/1/2024.
//

#ifndef INSERTIONSORT_H
#define INSERTIONSORT_H

#include <iostream>
#include <vector>
using namespace std;

class insertionSortAlg {
    public:
    void instertionSort(vector <int>& arr){
        int n = arr.size();

        for(int i = 1; i < n; i++){
            int key = arr[i];
            int j = i -1;

            while (j >= 0 && arr[j] > key){
                arr[j + 1] = arr[j];
                j = j -1;
            }

            arr[j + 1] = key;
        }
    }

};

#endif //INSERTIONSORT_H
