#include <stdio.h>
void display(int arr[], int s)
{
    for (int i = 0; i < s; i++)
    {
        printf("%d  ", arr[i]);
    }
    printf("\n");
}
void NGER(int arr[], int s)
{
    int next, i, j;
    for (int i = 0; i < s; i++)
    {
        next=-1;
        for (int j = i + 1; j < s; j++)
        {
            if (arr[i] < arr[j])
            {
                next = arr[j];
                break;
            }
        }
        printf("%d ---> %d\n",arr[i],next);
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

    NGER(arr, n);
    return 0;
}