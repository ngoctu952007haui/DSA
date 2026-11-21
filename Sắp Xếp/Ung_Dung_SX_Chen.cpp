#include<iostream>
using namespace std;
const int MAX = 100;

struct HocSinh
{
	string maHS;
	string ho;
	string ten;
	int namSinh;
	float diemTB;
};

struct List
{
	int count;
	HocSinh e[MAX];
};

void InsertionSort(List &L, int count)
{
	for(int i=1; i<count; i++)
	{
		HocSinh tam = L.e[i];
		int j = i - 1;
		while(j>-1 && L.e[j].ten > tam.ten)
		{
			L.e[j+1] = L.e[j];
			j--;
		}
		L.e[j+1] = tam;
	}
}

void InsertionSort1(List &L, int count)
{
	for(int i=1; i<count; i++)
	{
		HocSinh tam = L.e[i];
		int j = i - 1;
		while(j>-1 && L.e[j].diemTB < tam.diemTB)
		{
			L.e[j+1] = L.e[j];
			j--;
		}
		L.e[j+1] = tam;
	}
}

void InDanhSach(List L, int count)
{
	for(int i=0; i<count; i++)
	{
		cout<<"-----------"<<endl;
		cout<<L.e[i].maHS<<endl;
		cout<<L.e[i].ho<<endl;
		cout<<L.e[i].ten<<endl;
		cout<<L.e[i].namSinh<<endl;
		cout<<L.e[i].diemTB<<endl;
	}
}

int main()
{
	List L;
	int count = 3;
	HocSinh hs1 = {"HS001","Luong","Tu",2007,8.0};
	HocSinh hs2 = {"HS002","Ngo","Lan",2006,10};
	HocSinh hs3 = {"HS003","Ly","Bach",2005,9.0};
	
	L.e[0] = hs1;
	L.e[1] = hs2;
	L.e[2] = hs3;
	InsertionSort(L,count);
	InDanhSach(L,count);
	cout<<"Danh sach xep theo diem TB: "<<endl;
	InsertionSort1(L,count);
	InDanhSach(L,count);
	return 0;	
}

