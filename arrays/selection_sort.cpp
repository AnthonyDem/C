#include <iostream> 
#include <algorithm> 
 
int main()
{
	const int length = 5;
	int array[length] = { 30, 50, 20, 10, 40 };
 
	for (int startIndex = 0; startIndex < length - 1; ++startIndex)
	{
		int smallestIndex = startIndex;
		for (int currentIndex = startIndex + 1; currentIndex < length; ++currentIndex)
		{
			if (array[currentIndex] > array[smallestIndex])
				smallestIndex = currentIndex;
		}
 
		std::swap(array[startIndex], array[smallestIndex]);
	}
 
	for (int index = 0; index < length; ++index)
		std::cout << array[index] << ' ';
 
	return 0;
}