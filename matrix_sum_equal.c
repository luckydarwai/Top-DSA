#include <stdio.h>
void display(int arr[3][3])
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d  ", arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}
int main()
{

    int A[3][3], B[3][3];
    int i, j;
     int flag = 0;

    printf("Enter first matrix array element \n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }
    display(A);
    printf("Enter second matrix array element  \n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            scanf("%d", &B[i][j]);
        }
    }

    display(B);

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            if (A[i][j] == B[i][j])
            {
                flag = 1;
            }
    
        }
    }
    if (flag==1)
    {
        printf("Both matrix are equal");
    }
     else{
         printf("Both matirix are not equal");
     }
    return 0;  
}