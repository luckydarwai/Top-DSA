// by using count variable
#include <stdio.h>
void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}
int main()
{
    int arr[] = {0,0,1,1,2,2,0,1,2,1,0,0};
    int count_a = 0, count_b = 0, count_c = 0;
    int n = sizeof(arr) / sizeof(int);
    display(arr, n);
    // Arranging the array element of form 1's,2's,3's.
    for (int i = 0; i < n; i++)
    { 
        if (arr[i] == 0)
        {
            count_a++;
        }
        else if (arr[i] == 1)
        {
            count_b++;
        }
        else
        {
            count_c++;
        }
    }
    printf("\n");
    for (int i = 0; i < count_a; i++)
    {
        arr[i] = 0;
    }
    for (int i = count_a; i < count_a+count_b; i++)
    {
        arr[i] = 1;
    }
    for (int i = count_a+count_b; i < n; i++)
    {
        arr[i] = 2;                                
    }                     
    printf("\n");       
    display(arr, n);
    return 0;
}