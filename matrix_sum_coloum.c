#include <stdio.h>
void display(int arr[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", arr[i][j]);
        }

        printf("\n");
    }
}

int main()
{
    int A[3][3],sum=0;
    printf("Enter 3*3 Array \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }
    display(A);
   printf("After Addition\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sum = sum +  A[j][i]; 
        }
        printf("The sum of coloum %d is %d",i+1,sum);
        sum=0;
        printf("\n");
    }
    return 0;
}