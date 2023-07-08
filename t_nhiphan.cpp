#include<iostream>
#include<conio.h>
using namespace std;

int binary(int arr[],int &mid, int &left, int &right, int x) {
    while(left <= right) {
        mid = (left + right) / 2;
        if (arr[mid] == x)
            return mid;
        if (x > arr[mid])
            left = mid + 1;
        else
            right = mid - 1;
    }
    return 1;
}
int main() {
    int a[] = {1,2,4,5,6,8,12,15};
    int n = sizeof(a) / sizeof(a[0]);
 	int left=0,right=n-1;
 	int mid = 0; 
    int x = 7;
    int r = binary(a,mid, left,right, x);
    cout<<r<<'\n';
    cout<<left<<" "<<right<<" "<<mid;
    getch();
    return 0;
}
