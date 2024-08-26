#include <iostream>

/*
Basics of variables: assignment and initialisation
*/



// Declare a variable called x that can hold an integer
// Can be done outside of a function
int x;
//x = 2;  Error: This is not allowed outside of a function

int main()
{
    int width;
    width = 5; // Copy assingment

    int depth { 5 }; // Direct list Initialisation
    int height = { 5 }; // Copy list Initialisation
    int weight{}; // Initialiser is empty (weight is 0)

    std::cout << width << " : width \n";
    std::cout << depth << " : depth \n";
    std::cout << height << " : height \n";
    std::cout << weight << " : weight \n";
    
    return 0;

}
