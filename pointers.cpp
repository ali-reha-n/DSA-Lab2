#include <iostream>

void analyze_pointer(int *ptr){

    //Checking if the pointer is null or not
    if( ptr== nullptr){
        std::cout << "Pointer is null" <<std::endl;
    }else {
        //Printing the address the pointer is pointing to and the value at that address
        std::cout << "The pointer points to the address: " << ptr << std::endl;
        std::cout << "The pointer points to the value: " << *ptr << std::endl;
    }
}

int main(){

    //Creating an int in stack and analyzing it
    int i=167;
    analyze_pointer(&i);

    //Creating an int in the heap and analyzing it
    int *ptr = new int(42);
    analyze_pointer(ptr);

    delete ptr; // Freeing the allocated memory

    return 0;
}