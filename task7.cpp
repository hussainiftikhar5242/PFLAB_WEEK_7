#include<iostream>
using namespace std;
void display();
main()
{
    display();
}
void display()
{
    char key;
    cout<<"press any key for start:";
    cin >> key;
    while(key == 'y'|| key == 'Y')
    {
        cout<<"I am happy :"<<endl;
        cout<<"press y to continue:";
        cin >> key;
    }
    
}