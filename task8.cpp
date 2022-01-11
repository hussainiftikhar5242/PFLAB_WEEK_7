#include<iostream>
using namespace std;
void display();
main()
{
    display();
}
void display()
{
    int number;
    cout<<"enter a number:"<<endl;
    
    cin >> number;
    while(number < 0)
    {
        cout<<"error "<<endl;
        cout<<"enter a positive number:";
        cin >> number;
    }
    cout<<"program end:"<<endl;
}