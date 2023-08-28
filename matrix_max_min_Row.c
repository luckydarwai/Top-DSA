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
    int A[3][3],max=-20000,min=32000;
    printf("Enter 3*3 Array \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }
    display(A);
   printf("Find Max and Min in a Matrix\n");
     for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
          if(A[i][j]>max)
           max = A[i][j];  
          if(A[i][j]<min)
           min = A[i][j];  
        }
        printf("The maximum number of in matrix %d is %d\n",i,max);
        printf("The minimum number of in matrix %d is %d\n",i,min);
       // here again initialization is imp eventhough this will throw garbej value
       // there for we need to reinitialize the max and min
        max=-20000;
        min=32000;

        printf("\n");
    }
    return 0;
}