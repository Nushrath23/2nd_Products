#include "Clothings.h"

void Clothings::display()
{
    cout<<"Product code:"<<ProductCode<<endl;
    cout<<"Price"<<price<<endl;
    cout<<"Size:" <<size<<endl;
}
void Clothings::insert()
{
    cout<<"Enter Product code:";
    cin>>ProductCode;
    cout<<"Enter the price:";
    cin>>price;
    cout<<"Enter the size: ";
    cin>>size;
}