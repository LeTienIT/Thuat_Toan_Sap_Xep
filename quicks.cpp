#include<iostream>
#include<conio.h>
#include<windows.h>
using namespace std;
void texcolor(int x)
{
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(h,x);
}
void gotoxy(int x, int y)
{
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD g = {x,y};
	SetConsoleCursorPosition(h,g); 
} 
void xuat(int a[], int n,int mau1,int mau2,int lan){
    for (int i = 0; i < n; i++)
	{
		if(i>=mau1&&i<=mau2)
		{
			texcolor(4);
			cout<<a[i]<<" ";
		}
    	else
    	{
    		texcolor(10);
    		cout<<a[i]<<" ";
		}
	}
	cout << endl;
}
void quickSort(int n,int a[], int l, int r,int &lan,int &mau1,int &mau2){ 
	int gh=(l+r)/2;
	int p = a[(l+r)/2];
	int i = l, j = r;
	mau1=l;mau2=r;
	cout<<"lan phan doan thu ";texcolor(4);cout<<lan;
	texcolor(10);cout<<" KEY ";texcolor(4);cout<<a[gh];
	texcolor(10);cout<<" PHAN DOAN ";texcolor(4);cout<<l;
	texcolor(10);cout<<"->";texcolor(4);cout<<r<<":"<<"\t";
	do{
		while (a[i] < p){
			i++;
		}
		while (a[j] > p){
			j--;
		}
		if (i <= j){
			int temp = a[i];
			a[i] = a[j];
			a[j] = temp;
			i++;
			j--;
		}
	}while (i < j);
	lan++;	
	xuat(a,n,mau1,mau2,lan);
	texcolor(10);
	if (l < j){
		quickSort(n,a,l,j,lan,mau1,mau2);		
	}
	if (r > i){
		quickSort(n,a, i, r,lan,mau1,mau2);	
	}
}
void hdsd()
{
	cout<<"1. DE NHIN DAU ( TA SE XET 2 DONG LIEN TIEP NHAU"<<"\n";
	cout<<"   VD -DE NHIN ( DONG 1 TA XEM PHAN DOAN CUA DONG THU 2"<<'\n';
	cout<<"      -DONG 1 PHAN DOAN(0->9),DONG 2 PHAN DOAN(0->5)"<<'\n';
	cout<<"      -NGOAC ( CUA DONG 1 SE LA (0->5)(6->9)"<<'\n';
	cout<<"2. DE BO NGOAC TA NHIN PHAN DOAN CUA DONG DO"<<'\n';
	cout<<"   VD -DONG 1 (0->5)  (6->9) PHAN DOAN 0->9"<<'\n';
	cout<<"      -DONG 2 (0->1)(2->5)  (6->9) PHAN DOAN 0->5"<<'\n';
	cout<<"      -DONG 3  0->1 (2->5)  (6->9) PHAN DOAN 0->1"<<'\n';
	cout<<"      -DONG 4  0->1 (2->3)(4->5) (6->9) PHAN DOAN 2->5"<<'\n';
	cout<<"      => LUC NAY NGOAC () 0->1 DUOC BO VI DA XET DEN 2->5"<<'\n';
	cout<<"3. LUU Y"<<'\n';
	cout<<"   -NEU TRONG PHAN DOAN 2 DONG LIEN TIEP CO 1 SO TRUNG"<<'\n';
	cout<<"   -THI VI TRI SO SE BO VA TINH TU SO TIEP THEP"<<"\n";
	cout<<"   -VD DONG 5:(4->5), DONG 6:(5->9) => BO SO VTRI THU 5"<<'\n';
	cout<<"4. BAI TEST - 10"<<'\n';
	cout<<"            - 36 27 29 16 24 3 22 13 15 18"<<'\n';
	cout<<"=======================END=========================="<<'\n';
}
int a[100];
int main()
{
	int n,lan=1,mau1,mau2;
	hdsd();
	cout<<"SO PTU: "; 
	cin >> n;
	cout<<"NHAP DAY: ";
	for(int i = 0; i < n; i++){
		cin >> a[i];		
	}
	quickSort(n,a,0,n-1,lan,mau1,mau2);
	getch(); 
    return 0;
}
