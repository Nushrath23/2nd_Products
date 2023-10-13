#pragma once
#include "Product.h"

class Clothings :public Product
{
    private:
        char size;
    public:
        void insert();
        void display();
};