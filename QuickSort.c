#include<stdio.h>
void quick_sort(int a[],int m,int n);
void main()
{
int a[20],n,i;
printf("** Program of Quick sort.**\n\n");
printf("Enter how number:");
scanf("%d",&n);
printf("Enter %d number:",n);
for(i=0;i<n;i++)
{
 scanf("%d",&a[i]);
}
quick_sort(a,0,n);
printf("Sorted array:");
for(i=0;i<n;i++)
{
 printf(" %d ",a[i]);
}
}
void quick_sort(int a[],int m,int n)
{
int i,j,k,temp;
i=m,j=n,k=a[m];
while(i<j)
{
 do
 {
 i++;
 }while(a[i]<k);
 do
 {
 j--;
 }while(a[j]>=k&& j>=0);
 if(i<j)
 {
 temp=a[i];
 a[i]=a[j];
 a[j]=temp;
 }
 else
 {
 temp=a[j];
 a[j]=a[m];
 a[m]=temp;
 quick_sort(a,0,j-1);
 quick_sort(a,j+1,n);
 }
}
}