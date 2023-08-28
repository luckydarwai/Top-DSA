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
    int A[10], B[10], C[10],D[30];
    int m,n,o, i,j,k;
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
    printf("Enter Third array elements \n");
    scanf("%d", &o);
    printf("you enter %d numbers\n", o);
    for (i = 0; i < o; i++)
    {
        scanf("%d", &C[i]);
    }
    display(C, o);
    printf("Merging three array elements in a array\n");
    for (i = 0; i < m; i++)
    {
        D[i] = A[i];
    }
    for (i = m, j = 0; i < m + n; i++, j++)
    {
        D[i] = B[j];
    }
    for (i = m+n,k=0; i < m + n+o; i++,k++)
    {
        D[i] = C[k];
    }

     display(D, m +n+o);
    return 0; 
}