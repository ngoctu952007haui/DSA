#include<iostream>
using namespace std;

struct HocSinh
{
	string maHS;
	string ho;
	string ten;
	int namSinh;
	float diemTB;
};

void SapXepTang(HocSinh x[], int n)
{
	for(int i=1; i<n; i++)
	{
		for(int j=n-1; j>=i; j--)
		{
			if(x[j-1].ten > x[j].ten)
			{
				HocSinh tg = x[j-1];
				x[j-1] = x[j];
				x[j] = tg;
			}
		}
	}
}

void NhapTen(HocSinh x[], int n)
{
	for(int i=0; i<n; i++)
	{
		cout<<"Nhap ma hoc sinh "<<i+1<<": ";
		getline(cin, x[i].maHS);
		cout<<"Nhap ho: ";
		getline(cin, x[i].ho);
		cout<<"Nhap ten: ";
		getline(cin, x[i].ten);
		cout<<"Nam sinh: ";
		cin>>x[i].namSinh;
		cout<<"Nhap diem TB: ";
		cin>>x[i].diemTB;
		cin.ignore();
	}
}

void XuatThongTin(HocSinh x[], int n)
{
	for(int i=0; i<n; i++)
	{
		cout<<"-----------"<<endl;
		cout<<x[i].maHS<<endl;
		cout<<x[i].ho<<endl;
		cout<<x[i].ten<<endl;
		cout<<x[i].namSinh<<endl;
		cout<<x[i].diemTB<<endl;
	}
}

void SapXepGiam(HocSinh x[], int n)
{
	for(int i=1; i<n; i++)
	{
		for(int j=n-1; j>=i; j--)
		{
			if(x[j-1].diemTB < x[j].diemTB)
			{
				HocSinh tg = x[j-1];
				x[j-1] = x[j];
				x[j] = tg;
			}
		}
	}
}

int main()
{
	HocSinh x[100];
	int n = 4;
	NhapTen(x,n);
	SapXepTang(x,n);
	XuatThongTin(x,n);
	
	cout<<"Sap xep danh sach theo chieu giam dan cua diem TB"<<endl;
	SapXepGiam(x,n);
	XuatThongTin(x,n);
	
	return 0;
}
