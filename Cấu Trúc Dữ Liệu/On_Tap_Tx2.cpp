#include<iostream>
using namespace std;
const int MAX = 100;
struct SinhVien
{
	int maSV;
	string hoDem;
	string ten;
	string gioiTinh;
	int namSinh;
	float luong;
};

struct List
{
	int count;
	SinhVien e[MAX];
};

void HienThiDS(List L, int count)
{
	for(int i=0; i<count; i++)
	{
		cout<<"--------"<<endl;
		cout<<L.e[i].maSV<<endl;
		cout<<L.e[i].hoDem<<endl;
		cout<<L.e[i].ten<<endl;
		cout<<L.e[i].gioiTinh<<endl;
		cout<<L.e[i].namSinh<<endl;
		cout<<L.e[i].luong<<endl;
		cout<<endl;
	}
}

void TimKiemTen(List L, int count)
{
	for(int i=0; i<count; i++)
	{
		if(L.e[i].ten == "Anh")
		{
			cout<<"Tim thay thanh cong!"<<endl;
			cout<<"--------"<<endl;
			cout<<L.e[i].maSV<<endl;
			cout<<L.e[i].hoDem<<endl;
			cout<<L.e[i].ten<<endl;
			cout<<L.e[i].gioiTinh<<endl;
			cout<<L.e[i].namSinh<<endl;
			cout<<L.e[i].luong<<endl;
			cout<<endl;
		}
	}
}

void InsertionSort(List &L, int count)
{
	for(int i=1; i<count; i++)
	{
		SinhVien tam = L.e[i];
		int j = i - 1;
		while(j>-1 && L.e[j].ten > tam.ten)
		{
			L.e[j+1] = L.e[j];
			j--;
		}
		L.e[j+1] = tam;
	}
}

bool KiemTraDanhSach(List L)
{
	if(L >= MAX)
		return true;
	return false;
}
//void ThemNhanVien(List &L, int count)
//{
//	if(KiemTraDanhSach == false)
//	cout<<"Danh sach chua day!";
//	
//}

int main()
{
	List L;
	int count = 6;
	SinhVien sv1 = {1001,"Tran Van","Binh","Nam",1996,12};
	SinhVien sv2 = {1002,"Tran Mai","Huong","Nu",1995,13.5};
	SinhVien sv3 = {1003,"Nguyen Thanh","Trung","Nam",1994,14};
	SinhVien sv4 = {1004,"Le Thanh","Ha","Nu",1998,10};
	SinhVien sv5 = {1005,"Phan Duc","Anh","Nam",1992,15.5};
	SinhVien sv6 = {1006,"Duong Binh","Minh","Nam",2000,8.5};
	L.e[0] = sv1;
	L.e[1] = sv2;
	L.e[2] = sv3;
	L.e[3] = sv4;
	L.e[4] = sv5;
	L.e[5] = sv6;
	
	SinhVien sv7 = {1007,"Dinh Thu","Hoa","Nu",1998,11.6};
	L.e[6] = sv7;
	
	
	HienThiDS(L,count);
	TimKiemTen(L,count);
	InsertionSort(L,count);
	HienThiDS(L, count);
	
}
