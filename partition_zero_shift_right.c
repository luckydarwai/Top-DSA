#include <stdio.h>
void display(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }    
}
void swap(int arr[],int i,int j){
    int temp=arr[i];                  
      arr[i]=arr[j];              
      arr[j]=temp;                
}
void logic(int *arr, int n)            
{
    int j=0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]!=0)
        {
            swap(arr,i,j);
            j++;
        }
        
    }
    
}

int main()
{
    int arr[30];
    int n;
    printf("How many num you want to insert\n");
    scanf("%d", &n);
    printf("you entered %d\n", n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    display(arr, n);
    logic(arr, n);
    printf("\n");
    display(arr, n);

    return 0;
}