#include <iostream>
using namespace std;
// merge 2 array (delete duplicate)(array must be sorted)
int main()
{
    int A[] = {1, 1, 2, 3, 3, 4};
    int B[] = {2, 2, 4, 6, 6, 7};
    int s1 = sizeof(A) / sizeof(int);
    int s2 = sizeof(B) / sizeof(int);
    int C[s1 + s2];
    int i, j, k = 0;

    for (i = 0; i < s1; i++) //************************************* */
    {
        for (j = 0; j < k; j++)
            if (A[i] == C[j])
            {
                break;
            }
        if (j == k)
        {
            C[k++] = A[i];
        }
    }
    /**B*/
    for (i = 0; i < s1; i++) //************************************* */
    {
        for (j = 0; j < k; j++)
            if (B[i] == C[j])
            {
                break;
            }
        if (j == k)
        {
            C[k++] = B[i];
        }
    }
    /*show C*/
    for (i = 0; i < k; i++)
    {
        cout << " " << C[i];
    }
    return 0;
}