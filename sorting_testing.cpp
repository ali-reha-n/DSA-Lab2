#include <iostream>
#include <cassert>


//Sort checking function
bool isSorted(const int *arr, const int size) {
        for(int i = 0; i < size - 1; i++) {
                if(arr[i] >= arr[i + 1]) {
                        return false;
                }
        }
        return true;
}

//TESTING FUNCTIONS


//Testing with an already sorted array
void testSortedArray(){
     int arr[] = {1, 2, 3, 4, 5};

    bool sorted = isSorted(arr, 5);

    assert(sorted == true);
}

//testing with an unsorted array
void testUnsortedArray(){
    int arr[] = {1, 2, 8, 4, 5};

    bool sorted = isSorted(arr, 5);

    assert(sorted == false);
}

//testing with an array containing duplicate values
void testDuplicateValues(){
    int arr[] = {1, 2, 2, 4, 5};

    bool sorted = isSorted(arr, 5);

    assert(sorted == true);
}

//testing with an array containing a single element
void testSingleElementArray(){
    int arr[] = {1};

    bool sorted = isSorted(arr, 1);

    assert(sorted == true);
}

//testing with an array wiht descending values
void testDescendingArray(){
    int arr[] = {5, 4, 3, 2, 1};

    bool sorted = isSorted(arr, 5);

    assert(sorted == false);
}

//testing with an array containing negative values
void testNegativeValues(){
    int arr[] = {-5, -4, -3, -2, -1};

    bool sorted = isSorted(arr, 5);

    assert(sorted == true);
}

//testing an array containing mixed values
void testMixedValues(){
    int arr[] = {-5, -4, 0, 2, 3};

    bool sorted = isSorted(arr, 5);

    assert(sorted == true);
}

//testing an empty array
void testEmptyArray(){
    int size=0;
    int *arr = new int[size];

    bool sorted = isSorted(arr, 0);

    assert(sorted == true);
}

int main() {

    testSortedArray();
    testUnsortedArray();
    testDuplicateValues();
    testSingleElementArray();
    testDescendingArray();
    testNegativeValues();
    testMixedValues();
    testEmptyArray();

    return 0;
}

