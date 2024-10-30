#include<stdio.h>
int main()
{
    int a[5 ]={11,24,56,86,45};
    int item =26;
    int i ,j;
    for(i=0;i<5;i++) {
    printf("\nElement in the array at index %d is %d", i ,a[i]);
    }
 // instead of this direct manipulation u can apply loop ok? 
    a[5]=a[4]; 
    a[4]=a[3];
    a[3]=a[2];
    a[2]=a[1];
    a[1]=item;
    for(i=0;i<6;++i) {
    printf("\narray after insertion is %d",a[i]);
    }
    return 0;
    }
    