#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t; cin>>t;
    while (t--)
    {
        int a,b; 
        cout<<"Input num1: ";
        cin>>a;
        cout<<"Input num2: ";
        cin>>b;

        int *p1, *p2;
        p1 = &a; p2 = &b;

        swap(*p1, *p2);

        cout<<"Values after swapping: "<<endl;
        cout<<"Num1 = "<<*p1<<endl;
        cout<<"Num2 = "<<*p2<<endl;   
    }
    return 0;
}