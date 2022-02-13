#include <iostream> 
#include <algorithm> 

int main() {	
    const int length(9);
    int array[length] = { 7, 5, 6, 4, 9, 8, 2, 1, 3 };
    for (int i = 0; i < length; i++) {
        std::cout<<"iterated\n";
        for (int j = 0; j < length-i; j++) {
            if (array[j] > array[j+1]){
                std::cout<<"inside\n";
                std::swap(array[j], array[j+1]);
            }
        }
    }

    for (int index = 0; index < length; ++index)
		std::cout << array[index] << ' ';


    return 0;
}