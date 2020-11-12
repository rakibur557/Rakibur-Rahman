#include<iostream>
#include<vector>
#include<iterator>  //before using iterator header must include
using namespace std;

int main()
{
//Vector declaration
    vector <int> value;
//iterator declaration, [it] is a iterator name here
    vector <int>::iterator it;
//push baacking values in vector container.
    for(int i=0; i<=5; i++)
    {
        value.push_back(i);
    }
//printing vector element
    for(int i=0; i<value.size(); i++) 
        cout<<value[i]<<" ";
   cout<<endl;
//[it] will point 1st element of vector
   it = value.begin();
//[it] is a pointer type, so printing..
   cout<< *it <<endl;
//pointing to next element of vector;
   it++;
   cout<<*it<<endl;
}