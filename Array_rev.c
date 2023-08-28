#include<stdio.h>
   void display(int arr[],int s){
    for (int i = 0; i < s; i++)
    {
        printf("%d  ",arr[i]);
    }
    printf("\n");
}             
int main()
{
    
    int arr[10];
    int num;
    printf("How many Element to insert in an array :\n");
    scanf("%d",&num);
    printf("You Enterd %d numbers\n",num);
    for (int i = 0; i < num; i++)
    {
        
    scanf("%d",&arr[i]);
    }

    display(arr,num);
    for (int j = num-1; j >=0 ; j--)
    {
        printf("%d  ",arr[j]);
    }
    

    return 0;
}