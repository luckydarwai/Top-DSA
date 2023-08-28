#include <stdio.h>
void display(int arr[], int s)
{
    for (int i = 0; i < s; i++)
    {
        printf("%d  ", arr[i]);
    }
    printf("\n");
}
void NGEL(int arr[], int s)
{
    int next, i, j;
    for (int i = s-1; i>=0; i--)
    {
        next=-1;
        for (int j = i-1; j>=0; j--)
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

    NGEL(arr, n);
   

    return 0;
}