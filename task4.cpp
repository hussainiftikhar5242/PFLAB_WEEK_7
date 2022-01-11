#include<iostream>
using namespace std;
int total_digit(int number);
main()
{
    int number=0;
    cout<<"enter a number:"<<endl;
    cin >> number;
    int result=total_digit(number);
    cout<<"total digit are:"<<result;
}
int total_digit(int number)
{
    int count=0;
    for(int num = number ; num > 0 ; num=num/10)
    {
        count=count+1;
    }
    return count;
}