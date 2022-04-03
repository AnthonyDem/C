#include <iostream> 

void switchValue(int *pointerA, int *pointerB);

int main() {
    int firstInt = 7;
    int secondInt = 9;

    switchValue(&firstInt, &secondInt);

    std::cout<<"switched values is "<<firstInt<<" "<<secondInt;

    return 0;
}

void switchValue(int *pointerA, int *pointerB) {
    int valueA = *pointerA;
    int valueB = *pointerB;

    *pointerA = valueB;
    *pointerB = valueA;
}