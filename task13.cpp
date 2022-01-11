#include<iostream>
using namespace std;
void display();
main()
{
    display();
}
void display()
{
    for(int x=1 ; x<=5; x++)
    {
        for(int y=1; y<=x ; y++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    for(int x=1; x<=5; x++)
    {
        for(int y=5 ; y>=x ; y--)
        {
            cout<<"*";
        }
        cout<<endl;
    }


}