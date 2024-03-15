#include <iostream>

int main() {
    const int SIZE = 6;
    int arr[SIZE] = { 5, 2, 8, 1, 9, 6 }; 

    int evenCount = 0;
    int oddCount = 0;

   
    for (int i = 0; i < SIZE; ++i) {
        if (arr[i] % 2 == 0) {
            
            evenCount++;
        }
        else {
          
            oddCount++;
        }
    }

   
    std::cout << "Number of even numbers: " << evenCount << std::endl;
    std::cout << "Number of odd numbers: " << oddCount << std::endl;

    return 0;
}
