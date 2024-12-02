//
// Created by hanes on 12/1/2024.
//

#ifndef QUICKSORT_H
#define QUICKSORT_H

class quickSortAlg {
    public:
    void quickSort(vector<int> &vec, int n){

        if(n<=1){return;}

        int pivot = vec[n/2];
        vector<int> left_vec; //Left
        vector<int> right_vec; //Right

        for(int i=0; i<n; i++){
            if(i != n/2){
                if(vec[i] < pivot){
                    left_vec.push_back(vec[i]);
                }
                else{
                    right_vec.push_back(vec[i]);
                }
            }
        }

        quickSort(left_vec, left_vec.size());
        quickSort(right_vec, right_vec.size());

        int i=0;
        for(int l:left_vec){
            vec[i] = l;
            i++;
        }

        vec[i] = pivot;
        i++;

        for(int r:right_vec){
            vec[i] = r;
            i++;
        }
    }
};

#endif //QUICKSORT_H
