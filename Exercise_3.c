/********** [Program to deletion the elements of array] **********/

#include <stdio.h>
int main(){

    int x;
    printf("Enter no of elements : ");
    scanf("%d",&x);

    int arr[x],i,j,loc,n,k;

    for(i = 0; i < x; i++){
        printf("enter the element no %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    
    printf("how many elements you want to delet ? : ");
    scanf("%d",&n);


    for(j = 0; j < n; j++)
    {   
        printf("enter the location of the (%d) element to be deleted : ",n - j);
        scanf("%d",&loc);

        while(loc < x)
        {
            arr[loc - 1] = arr[loc];
            loc++;
            x--;
        }   
    }

    printf("the elements in array after deletion : ");
    for(k = 0; k < (x); k++)
    {
        printf("%d",arr[k]);
         if(k < x-1)
        printf(", ");
    }
    
return 0;    
}