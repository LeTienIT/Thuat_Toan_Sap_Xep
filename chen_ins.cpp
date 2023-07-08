#include <iostream>
using namespace std;

void insertionSort(int arr[], int n)
{
   int i, key, j;
   for (i = 1; i < n; i++)
   {
       key = arr[i];
       j = i-1;
       while (j >= 0 && arr[j] < key)
       {
           arr[j+1] = arr[j];
           j = j-1;
       }
       arr[j+1] = key;
   }
}
void printArray(int arr[], int n)
{
   int i;
   for (i=0; i < n; i++)
       cout<<arr[i]<<" ";
   cout<<'\n';
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
    int *arr;
    int n;
    cout<<"N=: ";cin>>n;
    arr = new int[n];
    nhap(arr,n);
 
    insertionSort(arr, n);
    printArray(arr, n);
 
    return 0;
}
