//
//  main.cpp
//  classOct14
//
//  Created by Andrea d Cazares on 10/14/24.
//

#include <iostream>
#include "./getAnswers.hpp"
#include "./expand.hpp"
#include "./myGlobalVariable.hpp"
#include "./sum.hpp"
#include "./printArray.hpp"
using namespace std;

int* expand(int* arr,int size, int newSize);
int* getAnswers();
void printArray(int *arr, int size);



int main() {
    
    int *numbers = getAnswers();

    printArray(numbers, ::size);
    int total = sumOfNumbers(numbers, ::size);// ::specifys its a global variable
        std::cout << "Sum of numbers: " << total << std::endl;

    delete [] numbers;
    
    return 0;
}


