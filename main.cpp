
#include "Electronics.h"
#include "Clothings.h"

int main()
{
    Product *p1;
    Electronics e1;
    Clothings c1;

    p1=&e1;
    p1->insert();
    p1->display();
    p1=&c1;
    p1->insert();
    p1->display();
    

}