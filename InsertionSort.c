#include <stdio.h>
void INSERTION(int a[], int n);
void main()
{
    int i, a[10], n;
    // Function declaration
    printf("\nProgram for INSERTION SORT\n");
    printf("Enter number of elements:\n");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &a[i]);
    }
    // Input section
    INSERTION(a, n);           // Calling function in main
    printf("Sorted array:\n"); // Output section
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}
void INSERTION(int a[], int n)
{
    int i, j, key;
    // Function definition

    for (j = 1; j < n; j++)
    {
        key = a[j];
        i = j - 1;
        while ((i >= 0) && (a[i] > key))
        {
            a[i + 1] = a[i];
            i = i - 1;
        }
        a[i + 1] = key;
    }
}