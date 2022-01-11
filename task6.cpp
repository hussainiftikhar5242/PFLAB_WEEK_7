#include<iostream>
using namespace std;
int frequencyChecker(int number, int digit);
main()
{
    int number=0;
    int digit=0;
    cout<<"enter a number:"<<endl;
    cin >> number;
    cout<<"enter digit that you want ot find the frquence:"<<endl;
    cin >> digit;
    int result=frequencyChecker(number, digit);
    cout<<"frequence isequal to:"<<result;
}
int frequencyChecker(int number, int digit)
{
    int count=0;
   for (int i = number; i > 0; i=i/10)
   {
       int num=i%10;
       if (num == digit)
       {
           count=count+1;
       }
   }
    return count;
   
}
