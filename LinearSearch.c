#include <stdio.h>

int linearSearch(int arr[], int index, int key)
{
    int i;
    for (i = 0; i < index; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int key;
    int arr[] = {10, 2, 8, 5, 17, 11, 14, 21, 26, 29, 31, 27};
    printf("Enter value you want to search:");
    scanf("%d", &key);
    int index = sizeof(arr) / sizeof(arr[0]);
    int target = 8;
    int result = linearSearch(arr, index, key);
    if (result == -1)
    {
        printf("Element not found in the array.\n");
    }
    else
    {
        printf("Element found at index: %d\n", result);
    }
    return 0;
}