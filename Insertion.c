#include <stdio.h>
 

void main (){
    int size, ele, pos, i, j;
    int a[10];

    printf("Enter the size of array = ");
    scanf("%d",&size);

    for(i = 0; i < size; i++){
        printf("Enter the value of a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    // Reading the value at which element will insert 

    printf("Enter the position at which element will insert = ");
    scanf("%d", &pos);

    // Assigning the value of element to be inserted

    printf("Enter the element to be inserted in array at %d = ", pos);
    scanf("%d", &ele);

    // Shifting the element 

    for(i = size -1; i >= pos-1; i--){
       a[i+1] = a[i];
       
    }
     a[pos-1] = ele;

    // Printing the inserted array 

    for(i = 0; i < size + 1; i++){
        printf("the value at a[%d] \n", a[i]);
         
    }
    
    

}