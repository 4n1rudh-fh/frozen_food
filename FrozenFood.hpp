#ifndef FROZENFOOD_HPP_INCLUDED
#define FROZENFOOD_HPP_INCLUDED

class FrozenFood
{
    public:
        FrozenFood(float tempWeight, float tempPrice);
        void GetWeight();
        void GetPrice();
        virtual void Thaw() = 0;

    protected:
        float Weight;

    private:
        float Price;
};

#endif