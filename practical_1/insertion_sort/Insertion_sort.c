#include <stdio.h>

void insertion_sort(int arr[],int n)
{
    int i,j,key;
    for (i =1; i < n; i++)
    {
        key = arr[i];
        j = i-1;
        while(j>=0 && arr[j] > key)
        {
            arr[j+1] = arr[j];
            j = j-1;
        }
        arr[j+1] = key;
    }
}


 void print_array(int arr[], int n)
 {
     for(int i = 0; i< n; i++)
     {
         printf("%d ",arr[i]);
     }
 }
int main() {
    
    
    int n;
     
    printf("Enter your array size:");
    scanf("%d", &n);
    
    int arr[n];
    
    printf ("\nEnter your array elements:\n");
    for (int i = 0; i < n; i++)
    {
        printf("Enter arr[%d]:",i);
        scanf("%d", &arr[i]);
        printf("\n");
    }
    
    printf("Original array\n");
    print_array(arr,n);
    
    insertion_sort(arr,n);
    
    printf("\nSorted array\n");
    print_array(arr,n);
}