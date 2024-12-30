#include <stdio.h>
void Merge_Sort(int a[], int p, int r); // Function declaration
void Merge(int a[], int p, int q, int r);
void main()
{
    int i, n, a[10];
    printf("\nProgram for MERGE SORT \n");
    printf("Enter the number of elements:\n"); // Input section
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        printf("Enter element %d: ", i);
        scanf("%d", &a[i]);
    }
    Merge_Sort(a, 1, n);       // Calling function
    printf("Sorted array:\n"); // Output section
    for (i = 1; i <= n; i++)
    {
        printf("%d ", a[i]);
    }
}
void Merge_Sort(int a[], int p, int r)
{ // Function definition
    int q;
    if (p < r)
    {
        q = (p + r) / 2;
        Merge_Sort(a, p, q);     // Recursive call to sort the first half
        Merge_Sort(a, q + 1, r); // Recursive call to sort the second half
        Merge(a, p, q, r);       // Merging the sorted halves
    }
}
void Merge(int a[], int p, int q, int r)
{ // Function definition
    int n1, n2, i, j, k;
    int L[10], R[10]; // Left and right subarrays
    n1 = q - p + 1;   // Size of left subarray
    n2 = r - q;       // Size of right subarray
    // Copy data to temporary arrays L[] and R[]
    for (i = 1; i <= n1; i++)
    {
        L[i] = a[p + i - 1];
    }
    for (j = 1; j <= n2; j++)
    {
        R[j] = a[q + j];
    }
    L[n1 + 1] = 32767; // Sentinel value representing infinity
    R[n2 + 1] = 32767; // Sentinel value representing infinity
    i = 1;
    j = 1;
    // Merge the two subarrays back into the main array a
    for (k = p; k <= r; k++)
    {
        if (L[i] <= R[j])
        {
            a[k] = L[i];
            i = i + 1;
        }
        else
        {
            a[k] = R[j];
            j = j + 1;
        }
    }
}