#include<iostream>
#define MAX 100
using namespace std;

struct CanBo
{
	string maCB;
	string hoDem;
	string ten;
	string gioiTinh;
	int tuoi;
	int heSoLuong;
	long luong;
};

struct List
{
	int count;
	CanBo e[MAX];
};

void HienThiDanhSach(List L)
{
	for(int i=0; i<L.count; i++)
	{
		cout<<"------------"<<endl;
		cout<<L.e[i].maCB<<endl;
		cout<<L.e[i].hoDem<<endl;
		cout<<L.e[i].ten<<endl;
		cout<<L.e[i].gioiTinh<<endl;
		cout<<L.e[i].tuoi<<endl;
		cout<<L.e[i].heSoLuong<<endl;
		cout<<L.e[i].luong<<endl;
	}
}

void TimCanBo(List L)
{
	for(int i=0; i<L.count; i++)
	{
		if(L.e[i].tuoi < 50 && L.e[i].gioiTinh == "Nu")
		{
			cout<<"------------"<<endl;
			cout<<L.e[i].maCB<<endl;
			cout<<L.e[i].hoDem<<endl;
			cout<<L.e[i].ten<<endl;
			cout<<L.e[i].gioiTinh<<endl;
			cout<<L.e[i].tuoi<<endl;
			cout<<L.e[i].heSoLuong<<endl;
			cout<<L.e[i].luong<<endl;
		}
	}
}

void TimCanBoTenTung(List L)
{
	for(int i=0; i<L.count; i++)
	{
		if(L.e[i].ten == "Tung")
		{
			cout<<"\nTrong danh sach co can bo ten la Tung"<<endl;
			cout<<"------------"<<endl;
			cout<<L.e[i].maCB<<endl;
			cout<<L.e[i].hoDem<<endl;
			cout<<L.e[i].ten<<endl;
			cout<<L.e[i].gioiTinh<<endl;
			cout<<L.e[i].tuoi<<endl;
			cout<<L.e[i].heSoLuong<<endl;
			cout<<L.e[i].luong<<endl;
			break;
		}
	}
}

bool KiemTraDanhSach(List L)
{
	if(L.count > MAX - 1)
		return false;
	return true;
}

void ThemPhanTu(List &L, int k, CanBo a)
{
	if(k<=L.count+1 && k>0 && KiemTraDanhSach(L) == true)	
	{
		for(int i=L.count-1; i>=k-1; i--)
		{
			L.e[i+1] = L.e[i];
		}
		L.e[k-1] = a;
		L.count++;
	}
}

int main()
{
	List L;
	L.count = 4;
	CanBo cb1 = {"CB001","Luong Ngoc","Tung","Nam",25,5,5*1150000};
	CanBo cb2 = {"CB002","Le Huong","Thuy","Nu",24,8,8*1150000};
	CanBo cb3 = {"CB003","Nguyen Giang","Son","Nam",29,9,9*1150000};
	CanBo cb4 = {"CB004","Ngo Lan","Huong","Nu",32,10,10*1150000};
	CanBo cb5 = {"CB005","Nguyen Ngoc","Tung","Nam",27,6,6*1150000};
	
	L.e[0] = cb1;
	L.e[1] = cb2;
	L.e[2] = cb3;
	L.e[3] = cb4;
	
	TimCanBo(L);
	TimCanBoTenTung(L);
	ThemPhanTu(L,4,cb5);
	HienThiDanhSach(L);
	
	return 0;
}
