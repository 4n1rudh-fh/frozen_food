#include <iostream>
#include "FrozenPizza.hpp"

// Constructor base class initialisation
FrozenPizza::FrozenPizza(float tempWeight, float tempPrice, float tempDiameter) : FrozenFood(tempWeight, tempPrice)
{
    // Access method for class FrozenPizza for Diameter
    if(tempDiameter <= 0)
    {
        std::cout << "Invalid entry. Enter a positive value of diameter in inches!!" << std::endl;
    } else
    {
        Diameter = tempDiameter;
    }
}

void FrozenPizza::PizzaInfo()
{
    std::cout << "Category: Frozen Pizza" << std::endl;
    std::cout << "\tThe weight of pizza is: " << Weight << " kg." << std::endl;
    std::cout << "\tThe diameter of pizza is: " << Diameter << " inches." << std::endl;
}

void FrozenPizza::Thaw()
{
    std::cout << "Thawing... a Frozen Pizza" << std::endl;
}