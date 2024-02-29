#include <iostream>

template <class T>
void bubbleSort(T arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                T temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

template <class T>
void printArray(T arr[], int size) {
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    int intArr[] = {64, 34, 25, 12, 22, 11, 90};
    int intSize = sizeof(intArr) / sizeof(int);
    std::cout << "Original array: ";
    printArray(intArr, intSize);
    
    bubbleSort(intArr, intSize);
    
    std::cout << "Sorted array: ";
    printArray(intArr, intSize);
    
    double doubleArr[] = {64.3, 34.2, 25.1, 12.5, 22.1, 11.7, 90.0};
    int doubleSize = sizeof(doubleArr) / sizeof(double);
    std::cout << "Original array: ";
    printArray(doubleArr, doubleSize);
    
    bubbleSort(doubleArr, doubleSize);
    
    std::cout << "Sorted array: ";
    printArray(doubleArr, doubleSize);
    
    return 0;
}