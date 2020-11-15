#include <iostream>
using namespace std;
int main()
{
     cout << "Enter size of array: ";
     int length;
     cin >> length;

///Declaring Dynamic Array
     int *array{ new int[length] }; /// use array new.  Note that length does not need to be constant!


     array[0] = 5; /// set element 0 to value 5
    array[2]=2;

///Printing Section
 cout<<"Array element: "<<endl;
     for(int i=0; i<length; i++)
         cout<<array[i]<<endl;

     cout<<endl;

     delete[] array; /// use array delete to deallocate array

     cout<<"After deallocating array: "<<endl;
    for(int i=0; i<length; i++)
         cout<<array[i]<<endl;

    return 0;
}
