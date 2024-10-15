//
//  expand.cpp
//  classOct14
//
//  Created by Andrea d Cazares on 10/14/24.
//

#include "./expand.hpp"
int* expand(int* arr,int size, int newSize){
    int *newArr = new int[newSize];
    for (int i=0; i<size;i++){
        newArr[i] = arr[i];
    }
    delete [] arr;
    return newArr;
}
