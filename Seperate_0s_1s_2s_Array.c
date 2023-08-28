#include <stdio.h>
void display(int arr[], int s)
{
    for (int i = 0; i < s; i++)
    {
        printf("%d  ", arr[i]);
    }
    printf("\n");
}
void swapp(int *arr,int l,int m, int h){

}
void seperate(int *arr, int n)
{
     int l=0; 
     int m=0;
     int h=n-1;
for (int i = 0; i < n; i++)
{
  if (arr[l]==0)
  {
      swapp(arr,l,m,h);
  }
  
    
}

}
int main()
{
                                          
    int arr[]={0,0,1,1,2,2,0,1,2,1,0,0};
    int size = sizeof(arr)/sizeof(int);
    display(arr,size);
    seperate(arr, size);
    display(arr, size);

    return 0;
}