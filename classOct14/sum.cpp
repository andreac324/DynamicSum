//
//  sum.cpp
//  classOct14
//
//  Created by Andrea d Cazares on 10/14/24.
//

#include "./sum.hpp"
#include <iostream>
int sumOfNumbers(int *numbers,int count){
    int sum = 0;
        for (int i = 0; i < count; i++) {
                sum += numbers[i];
    }
    return sum;
}
