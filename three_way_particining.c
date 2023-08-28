#include <stdio.h>
void display(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void particining(int *arr, int num, int a, int b)
{
    int l = 0;
    int r = num - 1;
    int temp;
    for (int i = 1; i <= r; i++)
    {
        if (arr[i] < a)
        {
            temp = arr[l];
            arr[l] = arr[i];
            arr[i] = temp;

            i++;
        }
        else if (arr[i] > b)
        {
            temp = arr[r];
            arr[r] = arr[i];
            arr[i] = temp;
            r--;
            i--;
        }
    }
}
int main()
{
    int arr[50];
    int num, a, b;
    printf("How many num you want to insert\n");
    scanf("%d", &num);
    printf("you  entered %d numbers\n", num);
    for (int i = 0; i < num; i++)
    {
        scanf("%d", &arr[i]);
    }
    display(arr, num);
    printf("Enter the Range you want to particining A & B:\n");
    scanf("%d%d", &a, &b);
    particining(arr, num, a, b);
    display(arr, num);
    return 0;
}