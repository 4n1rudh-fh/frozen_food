#include <iostream>
#include <cmath>
#include "DeepDishPizza.hpp"

DeepDishPizza::DeepDishPizza(float tempWeight, float tempPrice, float tempDiameter, float tempHeight) : FrozenPizza(tempWeight, tempPrice, tempDiameter)
{
    if(tempHeight < 0)
    {
        std::cout << "Invalid entry!! Enter a positive value of diameter." << std::endl;
        Height = 0;
    } else
    {
        Height = tempHeight;
    }
}

void DeepDishPizza::DeepDishPizzaInfo()
{
    std::cout << "Category: Deep Dish Pizza" << std::endl;
    std::cout << "\t Height of Deep Dish Pizza: " << Height << " inches." << std::endl;
}

void DeepDishPizza::DeepDishDensity()
{
    std::cout << "Category: Deep Dish Pizza" << std::endl;
    std::cout << "\t Volume of Deep Dish Pizza: " << (M_PI * std::pow((Diameter / 2), 2) * Height) << " cubic inches." << std::endl;
}

void DeepDishPizza::Thaw()
{
    std::cout << "Thawing... a Deep Dish Pizza." << std::endl;
}