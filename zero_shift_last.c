#include <stdio.h>
void display(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}
void logic(int *arr, int n)
{
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            arr[count] = arr[i];
            count++;
        }
    }
    for (int i = count; i < n; i++)
    {
        arr[i] = 0;
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