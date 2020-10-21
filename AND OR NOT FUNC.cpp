#include<iostream>
using namespace std;

int AND(int a, int b)
{
    if (a==1 && b==1)
    {
        return 1;
    }
    else
        return 0;
}
int OR(int a, int b)
{
    if (a==0 && b==0)
    {
        return 0;
    }
    else
        return 1;
}
int NOT(int a)
{
    if (a==0)
    {
        return 1;
    }
    else
        return 0;
}
int main()
{
    int x,y;
    cout<<"Enter input for AND Gate: ";
    cin>>x>>y;
    cout<<"AND Output: "<<AND(x,y)<<endl;

    cout<<"Enter input for OR Gate: ";
    cin>>x>>y;
    cout<<"OR Output: "<<OR(x,y)<<endl;

    cout<<"Enter input for NOT Gate: ";
    cin>>x;
    cout<<"NOT Output: "<<NOT(x)<<endl;

    return 0;
}
