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

void SapXep(int x[], int n)
{
	for(int i=1; i<n; i++)
	{
		for(int j=n-1; j>=i; j--)
		{
			if(x[j-1] > x[j])
			{
				int tg = x[j-1];
				x[j-1] = x[j];
				x[j] = tg;
			}
		}
	}
}

void XuatMang(int x[], int n)
{
	for(int i=0; i<n; i++)
	{
		cout<<x[i]<<" ";
	}
}

int main()
{
	int x[100];
	int n;
	do{
		cout<<"Enter n = ";
		cin>>n;
	}while(n<=0);
	
	NhapMang(x,n);
	cout<<"\nMang khi chua sap xep ";
	XuatMang(x,n);
	
	cout<<"\nMang sau khi sap xep ";
	SapXep(x,n);
	XuatMang(x,n);
	return 0;
}
