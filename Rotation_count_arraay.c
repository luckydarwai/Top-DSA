#include <stdio.h>
int count(int *arr, int n)
{

    int min = arr[0], min_index;
    for (int i = 0; i < n; i++)
    {
        if (min > arr[i])
        {
            min=arr[i];
            min_index = i;
        }
    }
    return min_index;
}
int main()
{
    int arr[20], n, i;
    printf("How many elements you want in insert in an array:\n");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("You intered %d num\n", n);

    int min_ind=count(arr, n);
    printf("count is  %d",min_ind);
    return 0;
}