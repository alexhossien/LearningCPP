#include <iostream>

/*
Basics of variables: assignment and initialisation
*/


// Declare a variable called x that can hold an integer
// Can be done outside of a function
int x{};
//x = 2;  Error: This is not allowed outside of a function

[[maybe_unused]] double y { 2.0 };  // Program will compile despite y not being used


int main()
{
    int width;
    width = 5; // Copy assingment

    int depth { 5 }; // Direct list Initialisation
    int height = { 5 }; // Copy list Initialisation
    int weight{}; // Initialiser is empty (weight is 0, or empty for other types) (default initialisation)

    std::cout << width << " : width \n";
    std::cout << depth << " : depth \n";
    std::cout << height << " : height \n";
    std::cout << weight << " : weight \n";
    
    std::cout << "Enter a number: ";
    std::cin >> x;
    std::cout << x << " : x \n";

    return 0;

}
