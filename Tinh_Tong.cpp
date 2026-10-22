#include<iostream>
using namespace std;

int TinhTong(int a[], int n, int left, int right)
{
	if(left == right)
		return a[left];
	else if(left + 1 == right)
		return a[left] + a[right];
	else{
		int mid = (left + right) / 2;
		int tongLeft = TinhTong(a,n,left,mid);
		int tongRight = TinhTong(a,n,mid+1,right);
		return tongLeft + tongRight;
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
	int a[100], n = 4;
	NhapMang(a,n);
	XuatMang(a,n);
	
	int kq = TinhTong(a,n,0,n-1);
	cout<<"Tong day so tren la: "<<kq<<endl;
	
	return 0;
}

