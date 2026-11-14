#include<iostream>
using namespace std;

void Nhap(string ten[], int n)
{
	for(int i=0; i<n; i++)
	{
		cout<<"ten["<<i<<"] = ";
		getline(cin, ten[i]);
	}
}

void SapXep(string ten[], int n)
{
	for(int i=1; i<n; i++)
	{
		for(int j=n-1; j>=i; j--)
		{
			if(ten[j-1] > ten[j])
			{
				string tg = ten[j-1];
				ten[j-1] = ten[j];
				ten[j] = tg;
			}
		}
	}
}

void Xuat(string ten[], int n)
{
	for(int i=0; i<n; i++)
	{
		cout<<ten[i]<<" ";
	}
	cout<<endl;
}

int main()
{
	string ten[100];
	int n;
	do{
		cout<<"Enter n = ";
		cin>>n;
		cin.ignore();
	}while(n<=0);
	
	Nhap(ten,n);
	cout<<"Danh sach ten truoc khi sap"<<endl;
	Xuat(ten,n);
	cout<<"Danh sach ten sau khi sap"<<endl;
	SapXep(ten,n);
	Xuat(ten,n);
	return 0;
}
