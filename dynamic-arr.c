#include<stdio.h>
#include<stdlib.h>

int main()
{
    int data[2] = {5,6}; /// static array of 2 ints

     printf("Static Array: \n");

     for(int i = 0; i<2; i++)  ///And this is the static array
        printf("data[%d] = %d\n", i, data[i]);


     int *data2 = (int*)malloc(3 * sizeof(int)); /// dynamic array of 3 ints

     for(int i = 0; i<3; i++) ///coping element from static to the dynamic array
            data2[i] = data[i];

//    data2[2]=7;

     printf("\nDynamic Array: \n");

     for(int i = 0; i<3; i++)   ///This is the dynamic array now
         printf("data2[%d] = %d\n", i, *(data2+i));


    free(data2); /// One difference is you have to free the memory when you're done

// ///   *************EXTRA************
    printf("\nAfter Free data2 from memory: \n\n");
     for(int i = 0; i<3; i++)   ///This is the dynamic array now
         printf("data2[%d] = %d\n", i, *(data2+i));


    return 0;
}
