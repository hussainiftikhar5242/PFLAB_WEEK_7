#include<iostream>
using namespace std;
void series(int length);
main()
{
    int length=0;
    cout<<"enter series length:";
    cin >>length;
    series(length);
}
void series(int length)
{
    int sum=0;
    int num2=1;
    int num1=0;
    cout<<num1<< ",";
    cout<<num2;
    for(int x =1; x < length-1; x=x+1 )
    {
        sum=num1+num2;
        cout<<","<<sum;
        num1=num2;
        num2=sum;
    }
}