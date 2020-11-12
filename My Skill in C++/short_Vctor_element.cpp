#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector <int> vec;

    for(int i=0; i<5; i++)
        vec.push_back(i);
//sorting Descending Order.
    sort(vec.begin(), vec.end(), greater<int>());

    for(int i=0; i<5; i++)
        cout<<vec[i]<<" ";

    cout<<endl;
//sorting Asecending Order.
    sort(vec.begin(), vec.end());

    for(int i=0; i<5; i++)
        cout<<vec[i]<<" ";
}