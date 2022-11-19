#include<iostream>
using namespace std;
int main()
{
    double a,b,c;
    char x;
    do
    {
        cout<<endl<<endl<<"Summation of Two number"<<endl;
        cout<<"Enter 1st Number= ";
        cin>>a;
        cout<<"Enter 2nd Number= ";
        cin>>b;
        c=a+b;
        cout<<"Summation= "<<c<<endl;
        cout<<endl<<"Wanna try again Y/N ?"<<endl<<"=> ";
        cin>>x;
        if(x=='N' || x=='n')
        {
            break;
        }
    } while (x=='Y' || x=='y');
}
