#include "FrozenFood.hpp"
#ifndef FROZENPIZZA_HPP_INCLUDED
#define FROZENPIZZA_HPP_INCLUDED

class FrozenPizza : public FrozenFood
{
    public:
        // Constructor declaration
        FrozenPizza(float tempWeight, float tempPrice, float tempDiameter);
        void PizzaInfo();

        // Here we do not need to use the keyword 'virtual'. But it is always good to ensure to others that this function is virtual.
        virtual void Thaw();
          
    protected:
        float Diameter;
};

#endif