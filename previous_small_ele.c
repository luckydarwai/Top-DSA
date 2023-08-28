#include <stdio.h>
void NSEL(int *arr, int n)
{
    int next, i, j;
    for (i = n - 1; i >= 0; i--)
    {
        next = -1;
        for (j = i - 1; j >= 0; j--)
        {
            if (arr[i] > arr[j])
            {
                next = arr[j];
                break;
            }
        }
        printf("%d--->%d\n", arr[i], next);
        next=-1;
    }
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

    NSEL(arr, n);
    return 0;
}