#include <stdio.h>
void display(int arr[], int s)
{
    for (int i = 0; i < s; i++)
    {
        printf("%d  ", arr[i]);
    }
    printf("\n");
}
void arr_arange(int *arr, int n)
{
    int j = 0;
    for (int i = 0; i < n; i++)
     {
        if (arr[i] < 0)
        {
            if (i != j)
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
            j++;
        }
    }
}
int main()
{

    int arr[10];
    int num;
    printf("How many Element to insert in an array :\n");
    scanf("%d", &num);
    printf("You Enterd %d numbers\n", num);
    for (int i = 0; i < num; i++)
    {

        scanf("%d", &arr[i]);
    }

    display(arr, num);
    arr_arange(arr, num);
    display(arr, num);

    return 0;
}