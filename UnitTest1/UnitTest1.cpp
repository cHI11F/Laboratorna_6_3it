#include "pch.h"
#include "CppUnitTest.h"
#include "../LAB6_3it/LAB6_3it.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
    TEST_CLASS(UnitTest1)
    {
    public:

        static void printArray(double* arr, int size) {
            for (int i = 0; i < size; i++) {
                std::cout << arr[i] << " ";
            }
            std::cout << std::endl;
        }

        TEST_METHOD(ArrayFunctionsTest_FindMax_Int) {
            int size = 10;
            int* arr = new int[size];

            fillArray(arr, size);

            printArray(reinterpret_cast<double*>(arr), size); 

            int maxElement = findMax(arr, size);

            bool isCorrect = true;
            for (int i = 0; i < size; i++) {
                if (arr[i] > maxElement) {
                    isCorrect = false;
                    break;
                }
            }

            Assert::IsTrue(isCorrect);

            delete[] arr;
        }

        TEST_METHOD(ArrayFunctionsTest_FindMax_Double) {
            int size = 10;
            double* arr = new double[size];

            fillArray(arr, size);

            printArray(arr, size);

            double maxElement = findMaxT(arr, size); 

            bool isCorrect = true;
            for (int i = 0; i < size; i++) {
                if (arr[i] > maxElement) {
                    isCorrect = false;
                    break;
                }
            }

            Assert::IsTrue(isCorrect);

            delete[] arr;
        }
    };
}
