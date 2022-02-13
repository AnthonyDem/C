#include <iostream>


int enterNum() {
    int num;
    while (num < 1 || num > 9)
    {
        std::cout<<"Please enter a number from 1 to 9\n";
        std::cin>>num;

        if (std::cin.fail()) {
            std::cin.clear(); 
            std::cin.ignore(32767, '\n'); 
        }
    }
    return num;
}

int printAndFind(int number) {
    int array[] = { 7, 5, 6, 4, 9, 8, 2, 1, 3 };
    int index;
    const int length = sizeof(array) / sizeof(array[0]);
    for (int i = 0; i < length; i++) {
        std::cout<<array[i]<<"\n";
        if (array[i] == number){
            index = i;
        }
    }
    return index;
}


int main() {
    int number;
    number = enterNum();
    int index;
    index = printAndFind(number);
    std::cout<<"index of element is"<<index;
}