#include <limits.h>
#include <stdio.h>
// Matrix Ai has dimension p[i-1] x p[i]
// for i = 1 . . . n
int MatrixChainOrder(int p[], int i, int j)
{
    if (i == j)
        return 0;
    int k;
    int min = INT_MAX;
    int count;
    // Place parenthesis at different places
    // between first and last matrix,
    // recursively calculate count of multiplications
    // for each parenthesis placement
    // and return the minimum count
    for (k = i; k < j; k++)
    {
        count = MatrixChainOrder(p, i, k) + MatrixChainOrder(p, k + 1, j) + p[i - 1] * p[k] * p[j];
        if (count < min)
            min = count;
    }
    // Return minimum count
    return min;
}
// Driver code
int main()
{
    int arr[] = {1, 2, 3, 4, 3};
    int N = sizeof(arr) / sizeof(arr[0]);
    // Function call
    printf("Minimum number of multiplications is %d ",
           MatrixChainOrder(arr, 1, N - 1));
    getchar();
    return 0;
}
