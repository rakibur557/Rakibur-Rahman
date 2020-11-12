#include<bits/stdc++.h>
using namespace std;
int main()
{
    list <int> List;
    list <int>::iterator it;
//Inserting List element
    for(int i=1; i<5; i++)
        List.push_back(i);
//Printing list elemrnt
    cout<<endl<<"List element: ";
    for(it = List.begin(); it != List.end(); it++)
        cout<<*it<<" ";

    int n;
    cout<<endl<<"Enter element from list to remove: ";
    cin>>n;

//find() will find the [n] element and it will points to [it]
    it = find(List.begin(), List.end(),n);

//erase() will remove that particular [n] element.
    List.erase(it);

//Print to see it works or not
    cout<<"After removing: ";
    for(it = List.begin(); it != List.end(); it++)
        cout<<*it<<" ";

        cout<<endl;
}