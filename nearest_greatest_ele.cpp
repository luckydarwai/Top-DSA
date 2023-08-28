#include <iostream>
using namespace std;

void display(int arr[], int s)
{
    for (int i = 0; i < s; i++)
    {
        printf("%d  ", arr[i]);
    }
    printf("\n");
}
void NGE(int arr[], int n)
{
    int i,diff;
    int int_max = 1;
    cout << "-1" << endl;
    cout << "For first element" << endl;
    for (i = 1; i < n; i++)
    {
         diff = int_max;
        for (int j = 0; j < i; j++)
        {
            if (arr[j] >= arr[i])
                diff = min(diff, arr[j] - arr[i]);
        }
    }
    if (diff == int_max)
        cout << " print -1"
             << " " << endl;
    else
        cout << arr[i] + diff << " ";
}
int main()
{
    int arr[50];
    int ele, i, j;
    cout << "How many Elements you want to insert in an array" << endl;
    cin >> ele;
    cout << "you Entered " << ele << " element" << endl;
    for (int i = 0; i < ele; i++)
    {
        cin >> arr[i];
    }
    display(arr, ele);
    NGE(arr, ele);

    return 0;
}