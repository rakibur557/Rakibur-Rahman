#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[5]={1,2,3,5,8};

//coping array element to list element.
    list <int> li (arr, arr+5);
    list <int>::iterator it;

//printing list element to see is it coping or not
cout<<"List Element: ";
    for(it = li.begin(); it != li.end(); it++)
        cout<<*it<<" ";

            cout<<endl;
            int n; 
            cout<<"Enter element to find from list: "; 
            cin>>n;
/*
    find() works with #include<algorithm>
    find() will start from 1st list elemnt and find until end of the list element 
    find() will trying to find [n] as we said so.

    Now, [it] will points the address of the element [n].
*/
    it = find(li.begin(), li.end(), n);
        cout<<"Now [it] ponts to: "<<*it<<endl; //print to see it works or not

//if [it] point sto the last element than element is not exist in the list.
    if(it == li.end()){
        cout<<"Element Not Found!"<<endl;
    }

// insert() will insert an element [9] before [n].
    li.insert(it,9);

//Print to check inserting or not
    cout<<"After inserting 9: ";
    for(it = li.begin(); it != li.end(); it++)
        cout<<*it<<" ";

        cout<<endl;
    
}