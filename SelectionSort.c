#include <stdio.h>
#define MAX_SIZE 10

void Selection_Sort(int a[], int n); // Function declaration

int main()
{
    int i, n, a[MAX_SIZE];
    printf("\nProgram for SELECTION SORT \n");
    printf("Enter the number of elements (max %d):\n", MAX_SIZE);
    scanf("%d", &n);

    if (n > MAX_SIZE)
    {
        printf("Error: Number of elements exceeds maximum size of %d.\n", MAX_SIZE);
        return 1; // Exit with error code
    }

    for (i = 0; i < n; i++)
    { // Use 0-based indexing
        printf("Enter element %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    Selection_Sort(a, n);      // Calling function
    printf("Sorted array:\n"); // Output section
    for (i = 0; i < n; i++)
    { // Use 0-based indexing
        printf("%d ", a[i]);
    }
    printf("\n"); // New line after printing the sorted array
    return 0;     // Return success
}

void Selection_Sort(int a[], int n)
{ // Function definition
    int i, j, min_idx, temp;
    for (i = 0; i < n - 1; i++)
    {
        min_idx = i; // Assume the minimum is the first element
        for (j = i + 1; j < n; j++)
        {
            if (a[j] < a[min_idx])
            {
                min_idx = j; // Update minimum index
            }
        }
        // Swap the found minimum element with the first element
        if (min_idx != i)
        {
            temp = a[i];
            a[i] = a[min_idx];
            a[min_idx] = temp;
        }
    }
}