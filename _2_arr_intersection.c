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
    int A[10], B[10];
    int m, n, i, j,flag=0;;
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
    printf("After 2 array intersection\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (A[i] == B[j])
            {
                printf("%d\n",A[i]);
                flag = 1;
            }
        }
    }
    if(flag==1)
    {
        printf("Intersection / common found");
    }
    else{
        printf("Common not found");
    }
}