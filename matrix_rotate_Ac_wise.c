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
    int A[3][3];
    printf("Enter 3*3 Array \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }
    printf("Before Matrix Rotation...\n");
    display(A);
    printf("After 90's anti clock wise Matrix Rotation...\n");
  for (int i = 2; i >= 0; i--)
    {
        for (int j = 0; j <= 2; j++)
        {
            printf("%d\t",A[j][i]);
        }
        printf("\n");
    }
    return 0;
}