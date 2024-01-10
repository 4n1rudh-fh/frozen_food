#include <iostream>
#include "FrozenFood.hpp"
#include "FrozenPizza.hpp"
#include "DeepDishPizza.hpp"

int main(int argc, char* argv[])
{
    // FrozenFood Object cannot be created because of virtual functions
    // FrozenFood Nuggets(-2, -3);
    // Nuggets.GetWeight();
    // Nuggets.GetPrice();

    FrozenPizza PapaJohns(2, 4, 3);

    // The derived class can still access a private variable of the parent class as the member function being used here belongs to the parent class.
    PapaJohns.GetPrice();

    // Method inside the derived class
    PapaJohns.PizzaInfo();
    PapaJohns.Thaw();

    DeepDishPizza CafeEcstacy(1, 1, 2, 1);
    CafeEcstacy.DeepDishPizzaInfo();
    CafeEcstacy.DeepDishDensity();
    CafeEcstacy.PizzaInfo();
    CafeEcstacy.Thaw();

    return EXIT_SUCCESS;
}