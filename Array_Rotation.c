#include <stdio.h>
void display(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void arr_rotation_by_one(int *arr, int n)
{
    int  temp = arr[0];                                     // 0 1 2 3 4 5  ->indexes 
       
    for (int i = 0; i < n - 1; i++)        // 9 2 1 4 7 22 ->elements
       {                                // 2          9
        arr[i] = arr[i + 1];
       }
        arr[n - 1] = temp;
}
void arr_rotation(int *arr, int d, int n)
{
    for (int i = 0; i < d; i++)
    {
        arr_rotation_by_one(arr, n);
    }
}
int main()
{
    int arr[50];
    int num, d;
    printf("How many elements you wants to insert in an array:\n");
    scanf("%d", &num);
    printf("you inserted %d elements\n", num);
    for (int i = 0; i < num; i++)
    {
        scanf("%d", &arr[i]);
    }
    display(arr, num);
    printf("How many time to want rotate an array\n");
    scanf("%d",&d);
    arr_rotation(arr, d, num);
    display(arr, num);
    return 0;
}