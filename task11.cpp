#include<iostream>
using namespace std;
int gcd(int num1 , int num2);
int lcm(int n1 ,int  n2);
main()
{
    int number1=0;
    int number2=0;
    cout<<"enter a number:";
    cin >> number1;
    cout<<"enter a number:";
    cin >> number2;
    int result1=gcd(number1 , number2);
    int result2=lcm(number1 ,number2);
    cout<<"GCD"<<result1<<endl;
    cout<<"LCM"<<result2<<endl;
    
}
int gcd(int num1 , int num2)
{
    if(num1 == 0)
    return num2;
    return gcd(num2 % num1 ,num1 );
}
int lcm(int n1,int n2)
{
    return (n1 * n2)/gcd(n1,n2);
}