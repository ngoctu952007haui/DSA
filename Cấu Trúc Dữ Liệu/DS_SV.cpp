#include<iostream>
#include<string>
#define MAX 100
using namespace std;
struct SinhVien
{
	string maSV;
	string hoDem;
	string ten;
	int namSinh;
	float diemTK;
};

struct List
{
	int count;
	SinhVien e[MAX];
};

void HienThiDS(List L)
{
	for(int i=0; i<L.count; i++)
	{
		cout<<"------"<<endl;
		cout<<L.e[i].maSV<<endl;
		cout<<L.e[i].hoDem<<endl;
		cout<<L.e[i].ten<<endl;
		cout<<L.e[i].namSinh<<endl;
		cout<<L.e[i].diemTK<<endl;
	}
}

void XoaPhanTu(List &L)
{
	int i=0;
	while(i<L.count && L.e[i].maSV != "SV004")
	{
		i++;
	}
	if(i<L.count)
	{
		for(int j=i; j<L.count; j++)
		{
			L.e[j] = L.e[j+1];
		}
		L.count--;
	}
}

void TimSVTenDoanh(List L)
{
	for(int i=0; i<L.count; i++)
	{
		if(L.e[i].ten == "Doanh")
		{
			cout<<"------"<<endl;
			cout<<L.e[i].maSV<<endl;
			cout<<L.e[i].hoDem<<endl;
			cout<<L.e[i].ten<<endl;
			cout<<L.e[i].namSinh<<endl;
			cout<<L.e[i].diemTK<<endl;
		}
	}
	cout<<"Khong co ai ten doanh"<<endl;
}

void SelectionSort(List &L)
{
	for(int i=0; i<L.count-1; i++)
	{
		int m = i;
		for(int j=i+1; j<L.count; j++)
		{
			if(L.e[j].diemTK > L.e[m].diemTK)
			{
				m = j;
			}
		}
		SinhVien tg = L.e[m];
		L.e[m] = L.e[i];
		L.e[i] = tg;
	}
}

int main()
{
	List L;
	L.count = 5;
	SinhVien sv1 = {"SV001","Luong Ngoc","Tu",2007,7.8};
	SinhVien sv2 = {"SV002","Luong Ngoc","Tung",2002,8.5};
	SinhVien sv3 = {"SV003","Nguyen Hien","Huy",2002,8.0};
	SinhVien sv4 = {"SV004","Do Thanh","Dat",2006,9};
	SinhVien sv5 = {"SV005","Nguyen Hoang","Minh",2004,10};
	
	L.e[0] = sv1;
	L.e[1] = sv2;
	L.e[2] = sv3;
	L.e[3] = sv4;
	L.e[4] = sv5;
	cout<<"Danh sach"<<endl;
	HienThiDS(L);
	cout<<"\nXoa phan tu"<<endl;
	XoaPhanTu(L);
	HienThiDS(L);
	cout<<"\nTim sv co ten"<<endl;
	TimSVTenDoanh(L);
	cout<<"\nSap xep danh sach"<<endl;
	SelectionSort(L);
	HienThiDS(L);
	return 0;
}
