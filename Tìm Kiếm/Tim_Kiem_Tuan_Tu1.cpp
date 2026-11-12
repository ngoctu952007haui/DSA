#include<iostream>
using namespace std;

void NhapMang(int x[], int n)
{
	for(int i=0; i<n; i++)
	{
		cout<<"x["<<i<<"] = ";
		cin>>x[i];
	}
}

int TimKiemTuanTu(int x[], int n, int k)
{
	int i=0;
	while(i<n && x[i] != k)
	{
		i+=1;
	}
	if(i<n)	
		return i;
	else
		return -1;
}

int main()
{
	int x[100];
	int n, k1, k2;
	do{
		cout<<"Enter n = ";
		cin>>n;
	}while(n<=0);
	
	NhapMang(x,n);
	int kq1 = TimKiemTuanTu(x,n,k1);
	cout<<"Enter k1 = ";
	cin>>k1;
	cout<<"Vi tri cua phan tu k1 la: "<<kq1<<endl;
	
	cout<<"Enter k2 = ";
	cin>>k2;
	int kq2 = TimKiemTuanTu(x,n,k2);
	cout<<"Vi tri cua phan tu k2 la: "<<kq2<<endl;
	
	return 0;
}
