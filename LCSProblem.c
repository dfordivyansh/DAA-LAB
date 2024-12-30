#include <stdio.h>
#include <string.h>
int max(int x, int y)
{
    return x > y ? x : y;
}
// Returns length of LCS for s1[0..m-1], s2[0..n-1]
int lcs(char *s1, char *s2, int m, int n)
{
    // Base case: If either string is empty, the length of LCS is 0
    if (m == 0 || n == 0)
        return 0;
    // If the last characters of both substrings match
    if (s1[m - 1] == s2[n - 1])
        // Include this character in LCS and recur for remaining substrings
        return 1 + lcs(s1, s2, m - 1, n - 1);
    else
        // If the last characters do not match
        // Recur for two cases:
        // 1. Exclude the last character of S1
        // 2. Exclude the last character of S2
        // Take the maximum of these two recursive calls
        return max(lcs(s1, s2, m, n - 1), lcs(s1, s2, m - 1, n));
}
int main()
{
    char s1[] = "AGGTAB";
    char s2[] = "GXTXAYB";
    int m = strlen(s1);
    int n = strlen(s2);
    printf("%d\n", lcs(s1, s2, m, n));
    return 0;
}