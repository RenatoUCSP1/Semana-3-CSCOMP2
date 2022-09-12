#include <iostream>
#include <string>

int main()
{
date date1(30,15,2005);
cout<<"La fecha es ";
date1.displayDate();
cout<<"\n comparado con ";
date1.setmes(15);
date1.setyear(1998);
date1.displayDate();
};