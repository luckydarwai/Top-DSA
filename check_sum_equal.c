#include <stdio.h>
void display(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int logic(int *arr, int n, int sum)
{

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i+1; j < n ; j++)
        {
            if (arr[i] + arr[j] == sum)
            {
                printf("First num %d  and  Second num %d  =  sum %d\n", arr[i], arr[j], sum);
              return 1;
            }
        }
    }
    return 0;

}
int main()
{
    int arr[50];
    int n, sum, i;
    printf("How many Number you want to insert in an array  \n");
    scanf("%d", &n);
    printf("You insered %d number in an array \n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    display(arr, n);
    printf("Enter the sum you want to match with two number which are given in an array \n");
    scanf("%d", &sum);

   if(logic(arr,n,sum)){
       printf("Valid pair Exists");
   }
   else{
       printf("No valid pair exists for %d",sum);
   }
    return 0;
}