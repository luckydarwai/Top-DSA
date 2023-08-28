#include <stdio.h>
struct pair
{
    int min;
    int max;
};
struct pair get_minmax(int arr[], int n)
{
    struct pair minmax;
    int i;
    if (n == 1)
    {
        minmax.max = arr[0];
        minmax.min = arr[0];
        return minmax;
    }
    if (arr[0] > arr[1])
    {
        minmax.max = arr[0];
        minmax.min = arr[1];
    }
    else
    {
        minmax.max = arr[1];
        minmax.min = arr[0];
    }
    for (int i = 2; i < n; i++)
    {
        if (arr[i] > minmax.max)
            minmax.max = arr[i];

        else if (arr[i] < minmax.min)
        {
            minmax.min = arr[i];
        }
    }
    return minmax;
}
int main()
{
    int arr[] = {100, 400, 30, 50, 33, 12,500};
    int size = sizeof(arr) / sizeof(int);
    struct pair minmax = get_minmax(arr, size);
    printf("Min is %d\n", minmax.min);
    printf("Max is %d\n", minmax.max);
    return 0;
}
