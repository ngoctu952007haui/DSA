#include<iostream>
using namespace std;

int Max(int a[], int left, int right)
{
	if(left == right)
		return a[left];
	else if(left + 1 == right)
	{
		if(a[left] > a[right])
			return a[left];
		else
			return a[right];
	}
	else{
		int mid = (left + right) / 2;
		int max_left = Max(a,left,mid);
		int max_right = Max(a,mid+1,right);
		if(max_left > max_right)
			return max_left;
		else
			return max_right;
	}
}

void NhapMang(int a[], int n)
{
	for(int i=0; i<n; i++)
	{
		cout<<"a["<<i<<"] = ";
		cin>>a[i];
	}
}

void XuatMang(int a[], int n)
{
	for(int i=0; i<n; i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
}

int main()
{
	int a[100];
	int n;

	do{
		cout<<"Nhap n = ";
		cin>>n;
	}while(n<=0);
	
	NhapMang(a,n);
	int kq = Max(a,0,n-1);
	XuatMang(a,n);
	cout<<"Phan tu lon nhat trong mang la: "<<kq<<endl;
	
	return 0;
	
}
