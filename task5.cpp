#include<iostream>
using namespace std;
void printtable(int number);
main()
{
    printtable(24);
    printtable(50);
    printtable(29);
}
void printtable(int number)
{
    int x;
    if(number == 24)
    {
        for(x=1; x <= 10; x++ )
        {
            int result=number*x;
            cout<<number << "*" << x<<"="<<result<<endl;
           
        }
    }
    if(number == 50)
    {
        for(x=1; x <= 10; x++ )
        {
            int result=number*x;
            cout<<number << "*" << x<<"="<<result<<endl;
          
        }

    }
    else 
    {
       for(x=1; x <= 10; x++ )
        {
            int result=number*x;
            cout<<number << "*" << x<<"="<<result<<endl;

        } 
    }
}