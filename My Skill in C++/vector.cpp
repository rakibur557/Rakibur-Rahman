#include <bits/stdc++.h>
using namespace std;
int main()
{
    ///Vector works with #include<vector>
    ///Declaring Vector [ vector <data_type> name ]
    vector <int> vec;

   ///Assigning value into vector
    vec.push_back(10);
    ///Printing value of one element in vector
    ///Starting from index 0
    cout<<vec[0]<<endl;


    vec.push_back(20);
    vec.push_back(30);

/// Printing multiple vector element
/// name.size() will find the size of a vector
    for(int i=0; i<vec.size(); i++)
    {
        cout<<vec[i]<<" ";
    }
    cout<<endl;
    ///Changing vector element
    vec[1]=5;
    for(int i=0; i<vec.size(); i++)
    {
        cout<<vec[i]<<" ";
    }
    cout<<endl;

    ///name(3,0); here 3 is size of vector and 0 means all the value will be zero
    vector <int> name(3,0);
     for(int i=0; i<name.size(); i++)
    {
        cout<<name[i]<<" ";
    }
    return 0;
}
