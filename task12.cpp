#include<iostream>
using namespace std;
void display();
main()
{
    display();
}
void display()
{
    int number=0;
    cout<<"enter rows number:"<<endl;
    cin >> number;
    for(int x=1 ; x<=number; x++)
    {
        for(int y=1; y<=x ; y++)
        {
            cout<<"*";
        }
        cout<<endl;
    }

}