#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[5]={5,8,7,2,5};
    list <int> myList(arr, arr+5);
    list <int>::iterator it;

//Printing list element.
cout<<"List Element: ";
    for(it = myList.begin(); it != myList.end(); it++ )
        cout<<*it<<" ";
//pop_front() will remove 1st element from list.
    myList.pop_front();

//After removing element 1st element.
    cout<<endl<<"After removing Front element: ";
    for(it = myList.begin(); it != myList.end(); it++ )
        cout<<*it<<" ";

//pop_front() will remove last element from list.
    myList.pop_back();

//After removing element last element.
    cout<<endl<<"After removing Last element: ";
    for(it = myList.begin(); it != myList.end(); it++ )
        cout<<*it<<" ";
}