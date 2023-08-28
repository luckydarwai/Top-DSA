#include <stdio.h>
void display(int *arr, int s)
{
    for (int i = 0; i < s; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void findcommon(int A[], int B[], int C[], int m, int n, int o)
{
    int i = 0, j = 0, k = 0;
    while (i < m && j < n && k < o)
    {
        if (A[i] == B[j] && B[j] == C[k])
        {
            printf("%d  ", A[i]);
            i++;
            j++;
            k++;
        }
        else if (A[i] < B[j])

            i++;

        else if (B[j] < C[k])

            j++;

        else
            k++;
    }
}
int main()
{
    int A[10], B[10], C[20];
    int m, n, o, i;
    printf("Enter first array elements \n");
    scanf("%d", &m);
    printf("you enter %d numbers\n", m);
    for (i = 0; i < m; i++)
    {
        scanf("%d", &A[i]);
    }
    display(A, m);
    printf("Enter second array elements \n");
    scanf("%d", &n);
    printf("you enter %d numbers\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &B[i]);
    }
    display(B, n);
    printf("Enter third array elements \n");
    scanf("%d", &o);
    printf("you enter %d numbers\n", n);
    for (i = 0; i < o; i++)
    {
        scanf("%d", &C[i]);
    }
    display(C, o);
    printf("After 3 array intersection\n");
    findcommon(A, B, C, m, n, o);
    return 0;
}
