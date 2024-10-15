//
//  getAnswers.cpp
//  classOct14
//
//  Created by Andrea d Cazares on 10/14/24.
//

#include "./getAnswers.hpp"
#include "./myGlobalVariable.hpp"
#include "./expand.hpp"
int* getAnswers(){
    int* numbers =new int[1];
    int currentAllocatedSize = 1;
    //for(int i=0;true;i++){ //true will run loop indef.
    while (true) {
        int userNumbers;
        std::cout<< "enter a number: "<<std::endl;
        std::cout<< "or type 0 to stop"<<std::endl;
        std::cin>> userNumbers;
        if (userNumbers == 0) {
            break;
        }
        if(size >= currentAllocatedSize) { // Check if we need to expand
            numbers = expand(numbers, size, currentAllocatedSize * 2);
            //[size] = userNumbers;
            currentAllocatedSize *= 2;
        }
       /* else {
            numbers = expand (numbers,size,size*2);
           // ::size++;// ::specifys its a global variable
            numbers[size] = userNumbers;
        } */
        numbers[size] = userNumbers; // Store the user input
                size++;
    }
    return numbers;
}
