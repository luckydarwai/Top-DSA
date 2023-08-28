#include <stdio.h>
void display(int *arr, int s)
{
    for (int i = 0; i < s; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main()
{
    int A[10], B[10], C[20];
    int m, n, i,j;
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
    printf("Merging two array elements in a array\n");
    for (i = 0; i < m; i++)
    {
        C[i] = A[i];
    }
    for (i = m, j = 0; i < m + n; i++, j++)
    {
        C[i] = B[j];
    }

    display(C, m + n);
    return 0;
}