#include <stdio.h>

int binarySearch(int arr[], int low, int high, int key)    
{    
    int mid;    
    if(high >= low)     
    {    
        mid = low + (high - low) / 2;  

        if(arr[mid] == key)    
        {                 
            return mid;  
        }    
        else if(arr[mid] < key)     
        {  
            return binarySearch(arr, mid+1, high, key);    
        }    
        else     
        {  
            return binarySearch(arr, low, mid-1, key);    
        }          
    }    
    return -1;  
}   

int main() {
    int key;
    int arr[] = {11, 14, 25, 30, 39, 41, 52, 57, 70, 76, 88, 91}; 
    printf("Enter value you want to search: ");
    scanf("%d", &key);  

    int n = sizeof(arr) / sizeof(arr[0]); 
    int result = binarySearch(arr, 0, n-1, key);   

    if (result == -1) {  
        printf("\nElement not found in the array.\n");  
    } else {  
        printf("\nElement found at index: %d\n", result);  
    }  
    return 0;
}
