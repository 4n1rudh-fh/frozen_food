#include "FrozenPizza.hpp"
#ifndef DEEPDISHPIZZA_HPP_INCLUDED
#define DEEPDISHPIZZA_HPP_INCLUDED

class DeepDishPizza : public FrozenPizza
{
    public:
        DeepDishPizza(float tempWeight, float tempPrice, float tempDiameter, float tempHeight);
        void DeepDishPizzaInfo();
        void DeepDishDensity();

        // Here we do not need to use the keyword 'virtual'. But it is always good to ensure to others that this function is virtual.
        virtual void Thaw();

    protected:
        float Height;
};

#endif