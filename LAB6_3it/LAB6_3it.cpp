#include <iostream>

template <typename T>
void fillArray(T* arr, int size) {
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 100;
    }
}

void fillArray(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 100;
    }
}

template <typename T>
void printArray(T* arr, int size) {
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

void printArray(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

template <typename T>
T findMaxT(T* arr, int size) {
    T maxElement = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > maxElement) {
            maxElement = arr[i];
        }
    }
    return maxElement;
}

int findMax(int* arr, int size) {
    int maxElement = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > maxElement) {
            maxElement = arr[i];
        }
    }
    return maxElement;
}

int main() {
    int size;

    std::cout << "Enter the size of the array: ";
    std::cin >> size;

    if (size <= 0) {
        std::cerr << "Invalid array size\n";
        return 1;
    }

    int* intArr = new int[size];
    fillArray(intArr, size);
    std::cout << "Array int: ";
    printArray(intArr, size);
    int maxIntElement = findMax(intArr, size);
    std::cout << "Max element in array (template): " << maxIntElement << std::endl;
    delete[] intArr;

    double* doubleArr = new double[size];
    fillArray(doubleArr, size);
    std::cout << "Array double: ";
    printArray(doubleArr, size);
    double maxDoubleElement = findMaxT(doubleArr, size);
    std::cout << "Max element in array (shablon): " << maxDoubleElement << std::endl;
    delete[] doubleArr;

    return 0;
}