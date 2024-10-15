//
//  printArray.cpp
//  classOct14
//
//  Created by Andrea d Cazares on 10/14/24.
//

#include "./printArray.hpp"
#include <iostream>

void printArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
       std:: cout << arr[i] << std::endl;
    }
}
