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
    for(x=1;x<=5;x++)
    {
       add=add+x; 
    }      
    return add;
}
