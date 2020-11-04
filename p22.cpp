#include<iostream>
#include<cstdlib>
#include<bits/stdc++.h>
using namespace std;

int isPrime(int n);
int main()
{
    int t,count=0;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;

        while(a<=b)
        {
            if(a==0 || a==1)
            {
                a++;
                continue;
            }
            count +=isPrime(a);
            a++;
        }
        cout<<count<<endl;
    }
    return 0;
}

int isPrime(int n)
{
  for(int i=2; i<=sqrt(n); i++)
  {
      if(n%2==0){
          return 0;
      }
  }
        return 1;
};
