#include <stdio.h>
#include <stdlib.h>
void max_min(int *arr, int n)
{
    int maxdiff = -1, mindiff = 5000;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (abs(arr[i] - arr[j])> maxdiff)
            {
                maxdiff = abs(arr[i] - arr[j]);
            }
            if (abs(arr[i] - arr[j]) < mindiff)
            {
                mindiff = abs(arr[i] - arr[j]);
            }
        }
    }
    printf("Max is %d\n", maxdiff);
    printf("Min is %d\n", mindiff);
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

    max_min(arr, n);
    return 0;
}