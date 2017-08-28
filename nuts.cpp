#include<iostream>
using namespace std;

void fun(int *arr,int low,int high)
{

if(low == high)
	return;
int mid = (low+(high-low)/2)+1;
if(mid == 0)
	return;
if(low == mid)
	return;
if(low + 1 == high)
	return;
int left_mid_of_mid = (low+mid)/2  ;
int right_mid_of_mid = mid + left_mid_of_mid;
//swap
for(int i = left_mid_of_mid,j=mid; i<mid;i++,j++)
{
  int temp = arr[i];
  arr[i]=arr[j];
  arr[j]=temp;
}
fun(arr,low,mid-1);
fun(arr,mid,high);
}
int main()
{
int size = 10;
int arr[size]={1,1,1,1,1,2,2,2,2,2};
fun(arr,0,size-1);
for(auto i:arr)
	cout<<i<<endl;
}
