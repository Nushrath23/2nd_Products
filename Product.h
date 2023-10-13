#pragma once
#include "libraries.h"
class Product
{
    public:
    
        string ProductCode;
        float price;
        virtual void insert()=0;
        virtual void display()=0;
};


