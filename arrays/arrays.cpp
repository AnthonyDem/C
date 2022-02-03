#include <iostream>

namespace CarzyAni {
    enum CrazyAnimals {
        CHIKEN,
        GIRAFFE,
        DUCK,
        SNAKE,
        LION,
        ELEPHANT,
        MAX_NUM
    };
}

void printArray() {
    int testArray[] = {7, 5, 6, 4, 9, 8, 2, 1, 3 };
    const int arrayLen = sizeof(testArray) / sizeof(testArray[0]);
    for ( int index = 0; index < arrayLen; ++index) {
        std::cout<<"Elem "<<testArray[index]<<"\n";
    }
}

int main() {
    int legs[CarzyAni::MAX_NUM] = {2, 4, 2, 0, 4, 4};
    double tempreture[365] = {0.0};
    std::cout<<"You should check it "<<legs[CarzyAni::ELEPHANT]<<" wtf "<<CarzyAni::MAX_NUM;
    printArray();
    return 0;
}