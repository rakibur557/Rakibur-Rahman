#include<iostream>
#include<list>
#include<iterator>
using namespace std;
int main()
{
//Declaring & initializing array
    int array[5]={1,5,2,3,8};
//Passing/Coping array element to list.
    list <int> mylist (array, array+5);
//Printing the list element.
    list <int>::iterator it;
    for(it = mylist.begin(); it != mylist.end(); it++)
        cout<<*it<<" ";

}
