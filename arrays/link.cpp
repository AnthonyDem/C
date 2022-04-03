#include <iostream> 


template<typename T>
void switcher(T &firstV, T &secondV) 
{
    T temp = firstV;
    firstV = secondV;
    secondV = temp;
    
}

int main() 
{
    int firstInt = 7;
    int secondInt = 9;

    switcher(firstInt, secondInt);
    std::cout<<"switched values is "<<firstInt<<" "<<secondInt;

    return 0;
}