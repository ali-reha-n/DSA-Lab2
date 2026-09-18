#include <iostream>

int main(){
    //Creating a dynamically allocated string
    std::string *str = new std::string;

    //Taking the inout of the string
    std::cout << "Enter a string: ";
    std::cin >> *str;


    //Reversing the string
    for( int i=0 ; i < (*str).length()/2 ; i++){
        char temp = (*str)[i];
        (*str)[i] = (*str)[(*str).length() - 1 - i];
        (*str)[(*str).length() - 1 - i] = temp;
    }

    //Printing the reversed string
    std::cout << "Reversed string: " << *str << std::endl;

    delete str; // Freeing the allocated memory
    return 0;
}