#pragma once
#include "Product.h"
class Electronics : public Product
{
    private:
    int warrantyPer;
    public:
        void insert();
        void display();

};