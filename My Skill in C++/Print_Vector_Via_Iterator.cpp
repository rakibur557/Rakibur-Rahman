#include<bits/stdc++.h>
using namespace std;
 int main()
 {
     vector <int> n;
     vector <int>::iterator it;

     for(int i=1; i<=5; i++)
        n.push_back(i);
/*  let point [it] to first element of vector.
    [it] should print untill the last element of vector.
    So, make condition that keep going untill [it] is end.
    and it continously go to next element by increamenting. 
*/
    for(it = n.begin(); it != n.end(); it++)
        cout<<*it<<" ";
 }