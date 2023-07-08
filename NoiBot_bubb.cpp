#include <iostream>
using namespace std;
 
void swap(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}
void print(int arr[], int n)
{
    for (int i=0; i < n; i++)
    {
    	cout<<arr[i]<<" ";
	}
    cout<<"\n";
}
void bubbleSort(int a[], int n,int &k)
{
    int i, j;
    for(int i = 0 ; i < n-1 ; i++)
    {
    	for(int j = n-1 ; j > i ; j--)
    	{
	    	if(a[j] < a[j-1])
	    	{
	    		swap(a[j],a[j-1]);
	    		k++;
			}
		}
		print(a,n);
	}
}
void printArray(int arr[], int n)
{
    for (int i=0; i < n; i++)
    {
    	cout<<arr[i]<<" ";
	}
    cout<<"\n";
}
void nhap(int a[],int n)
{
	for(int i = 0 ; i < n ; i++)
	{
		cout<<"a["<<i<<"]= ";cin>>a[i];
	}
}
int main()
{
	int k=0;
    //int arr[] = {3,9,4,1,5,8,0,6,2,7};
    //int n = sizeof(arr) / sizeof(arr[0]);
    int *arr;
    int n;
    cout<<"N=: ";cin>>n;
    arr = new int[n];
    nhap(arr,n);
    bubbleSort(arr, n,k);
    //printArray(arr, n);
    cout<<k;
    return 0;
}
