#include<iostream>
#include<list> // must use header before use list 
#include<iterator>
using namespace std;

int main()
{
//Declaring list
    list <int> mylist;
    list <int>::iterator it;
//Assiging element in list to back.
    mylist.push_back(10);
    mylist.push_back(20);
//Assigning element in list in front.
    mylist.push_front(2);

//printing list element by Iterator.
    for(it = mylist.begin(); it != mylist.end(); it++)
        cout<<*it<<" ";

    cout<<endl;
//Reverse the list element.
    mylist.reverse();
    for(it = mylist.begin(); it != mylist.end(); it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
//To find size of list element
    cout<< mylist.size() <<endl;
//To clear list element.
    mylist.clear();
    cout<< mylist.size()<<endl; //to see list is clear or not
}