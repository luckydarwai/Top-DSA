#include <stdio.h>
void largest3(int arr[], int n)
{
    int i, first, second, third, min = -1;
    {
        if (n < 3) 
        {
            printf("invalid input\n");
        }
        third = second = first = min;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] > first)
            {
                third = second;
                second = first;
                first = arr[i];
            }
            else if (arr[i] > second)
            {
                third = second;
                second = arr[i];
            }
            else if (arr[i] > third)

                third = arr[i];
        }
        printf("\nThree largest numbers \n");
        printf("\nFirst Largest -> %d\nSecond Largest -> %d\nThird Largest -> %d\n", first, second, third);
    }
}
int main()
{
    int arr[20], n;
    printf("How many element you want to insert in an array \n");
    scanf("%d", &n);
    printf("You entered %d numbers\n",n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    largest3(arr, n);

    return 0;
}