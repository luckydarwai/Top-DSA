#include <stdio.h>
void display(int arr[], int s)
{
    for (int i = 0; i < s; i++)
    {
        printf("%d  ", arr[i]);
    }
    printf("\n");
}
void palindrom(int *arr, int n)
{
    int flag=0;
   for (int i = 0; i < n/2; i++)
   {
       if (arr[i] != arr[n-1-i])
       {
           flag=1;
           break;
       }
       
   }
   if (flag==1)
   {
       printf("NOt palindrom");
   }
   else
   {
       printf("Palindrom");
   }
   
   
   
}
int main()
{

    int arr[10];
    int num;
    printf("How many Element to insert in an array :\n");
    scanf("%d", &num);
    printf("You Enterd %d numbers\n", num);
    for (int i = 0; i < num; i++)
    {

        scanf("%d", &arr[i]);
    }

    display(arr, num);
    palindrom(arr, num);
    

    return 0;
}