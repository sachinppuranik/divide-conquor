#include<iostream>
using namespace std;

int fun(int *arr,int low,int high)
{


int mid = (low+high)/2;
int left-mid-of-mid = mid/2;
int right-mid-of-mid = mid + left-mid-of-mid;
//swap
for(int i = left-mid-of-mid,int j=mid; i<=mid;i++,j++)
{
  int temp = a[i];
  a[i]=a[j];
  a[j]=temp;
}
fun(arr,low,mid);
fun(arr,mid+1,high);
}
int main()
{
int size = 8;
int arr[size]={1,1,1,1,2,2,2,2};
fun(arr,0,size);
}
