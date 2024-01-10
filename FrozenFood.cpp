#include <iostream>
#include "FrozenFood.hpp"

FrozenFood::FrozenFood(float tempWeight, float tempPrice)
{
    // Creating access methods for class FrozenFood for setting weight value of pizza
    if(tempWeight <= 0)
    {
        std::cout << "Invalid entry. Enter a positive value in kilograms!!" << std::endl;
        Weight = 0;
    } else if(tempWeight > 5)
    {
        std::cout << "This pizza will cause diabetes!! Enter a smaller value." << std::endl;
        Weight = 0;
    } else
    {
        Weight = tempWeight; 
    }

    // Creating access methods for class FrozenFood for setting price of pizza
    if(tempPrice <= 0)
    {
        std::cout << "Invalid entry. Enter a positive value of price!!" << std::endl;
        Price = 0;
    } else
    {
        Price = tempPrice; 
    }
}

void FrozenFood::GetWeight()
{   
    std::cout << "Category: Frozen Food" << std::endl;
    std::cout << "\tEntered weight is: " << Weight << " kg." << std::endl;
}

void FrozenFood::GetPrice()
{
    std::cout << "Category: Frozen Food" << std::endl;
    std::cout << "\tEntered price is: " << Price << " Euros" << std::endl;
}