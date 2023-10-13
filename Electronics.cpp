#include "Electronics.h"

void Electronics:: display()
{
    cout<<"Product code:"<<ProductCode<<endl;
    cout<<"Price"<<price<<endl;
    cout<<"Warranty Period(months):" <<warrantyPer<<endl;
}
void Electronics ::insert()
{
    cout<<"Enter Product code:";
    cin>>ProductCode;
    cout<<"Enter the price:";
    cin>>price;
    cout<<"Enter the warranty period in months: ";
    cin>>warrantyPer;
}