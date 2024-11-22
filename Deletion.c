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

    // Assigning the position of element to be deleted

    printf("Enter the position of array to delete  = ");
    scanf("%d", &pos);

    // Shifting the element 

    for(i = pos - 1; i < size ; i++){
       a[i] = a[i+1];
       
    }
      

    // Printing the new array 

    for(i = 0; i < size - 1; i++){
        printf("the value at a[%d] is %d\n",i, a[i]);
         
    }
    
    

}
