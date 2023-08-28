#include<stdio.h>
int main(){
    int arr[3][3];
    printf("Enter 3*3 Array\n");
    for (int i = 0; i <=2; i++)
    {
        for (int j = 0; j <=2; j++)
        {
            scanf("%d",&arr[i][j]);
        }
        
    }
    printf("Printing the array element after 270's rotation\n");
    for (int i = 2; i>=0; i--)
    {
        for (int j = 0; j <=2; j++)
        {
            printf(" %d ",arr[j][i]);
        }
        printf("\n");

    }
    
 return 0;   
}