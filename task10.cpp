#include<iostream>
using namespace std;
int sum(int x);
main()
{
    int num=1;
    int result=sum(num);
    cout<<"sum of 1st five natural number is :"<<result;
}
int sum(int x)
{
    int add=0;
    x=1;
    while(x<=5)
    {
       add=add+x;
       x++; 
    }      
    return add;
}
