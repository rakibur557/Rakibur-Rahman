#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[5]={1,8,7,2,5};
    list <int> myList(arr, arr+5);
    list <int>::iterator it;

//Printing list element.
cout<<"List Element: ";
    for(it = myList.begin(); it != myList.end(); it++ )
        cout<<*it<<" ";

//Check is there any element in list or not?
//empty() return 0 or 1

    if(myList.empty()) cout<<"EMPTY"<<endl;

    else cout<<endl<<"FILLED"<<endl;

//To know what is 1st element in list.
    cout<< "First element: " <<myList.front()<<endl;

//To know what is Last element in list.
    cout<<"Last element: " <<myList.back()<<endl;
}

/*
Learning Outcomes:
    1. empty()
    2. list_name.front()
    3. list_name.back()
*/