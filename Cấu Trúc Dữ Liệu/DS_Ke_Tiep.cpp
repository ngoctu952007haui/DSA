#include<iostream>
#define MAX 100
using namespace std;

struct NhanVien
{
	int maNV;
	string hoDem;
	string ten;
	string gioiTinh;
	int namSinh;
	float luong;
};

struct List
{
	int count;
	NhanVien e[MAX];
};

void HienThiDS(List L)
{
	for(int i=0; i<L.count; i++)
	{
		cout<<"-----------"<<endl;
		cout<<L.e[i].maNV<<endl;
		cout<<L.e[i].hoDem<<endl;
		cout<<L.e[i].ten<<endl;
		cout<<L.e[i].gioiTinh<<endl;
		cout<<L.e[i].namSinh<<endl;	
		cout<<L.e[i].luong<<endl;	
	}
}

void TimKiemNV(List L)
{
	for(int i=0; i<L.count; i++)
	{
		if(L.e[i].ten == "Anh")
		{
			cout<<"Tim kiem thanh cong!!"<<endl;
			cout<<"Thong tin cua Anh/Chi:"<<endl;
			cout<<L.e[i].maNV<<endl;
			cout<<L.e[i].hoDem<<endl;
			cout<<L.e[i].ten<<endl;
			cout<<L.e[i].gioiTinh<<endl;
			cout<<L.e[i].namSinh<<endl;	
			cout<<L.e[i].luong<<endl;	
		}
	}
}

void InsertionSort(List &L)
{
	for(int i=1; i<L.count; i++)
	{
		NhanVien tam = L.e[i];
		int j = i-1;
		while(j>-1 && L.e[j].ten > tam.ten)
		{
			L.e[j+1] = L.e[j];
			j--;
		}
		L.e[j+1] = tam;
	}
}

bool KiemTraDS(List L)
{
	if(L.count > MAX - 1)
		return true;
	return false;
}

void Insert(List &L, int k, NhanVien a)
{
	if(k<=L.count+1 && k>0 && KiemTraDS(L) == false)
	{
		for(int i=L.count-1; i>=k-1; i--)
		{
			L.e[i+1] = L.e[i];
		}
		L.e[k-1] = a;
		L.count++;
	}
}

void XoaNhanVien(List &L)
{
	int i=0;
	while(i<L.count && ((2026 - L.e[i].namSinh) <= 30 || L.e[i].luong <= 15))
	{
		i++;
	}
	if(i<L.count)
	{
		for(int j=i; j<L.count-1; j++)
		{
			L.e[j] = L.e[j+1];
		}
		L.count--;
	}
}

int main()
{
	List L;
	L.count = 6;
	NhanVien nv1 = {1001,"Tran Van","Binh","Nam",1996,12};
	NhanVien nv2 = {1002,"Tran Mai","Huong","Nu",1995,13.5};
	NhanVien nv3 = {1003,"Nguyen Thanh","Trung","Nam",1994,14};
	NhanVien nv4 = {1004,"Le Thanh","Ha","Nu",1998,10};
	NhanVien nv5 = {1005,"Phan Duc","Anh","Nam",1992,15.5};
	NhanVien nv6 = {1006,"Duong Binh","Minh","Nam",2000,8.5};
	
	L.e[0] = nv1;
	L.e[1] = nv2;
	L.e[2] = nv3;
	L.e[3] = nv4;
	L.e[4] = nv5;
	L.e[5] = nv6;
	
	cout<<"Danh Sach Hien Tai"<<endl;
	HienThiDS(L);

	NhanVien nv7 = {1007,"Dinh Thu","Hoa","Nu",1998,11.6};
	cout<<"\nThem Nhan Vien"<<endl;
	Insert(L,3,nv7);
	HienThiDS(L);
	
	cout<<"\nSap Xep Danh Sach Theo Ten"<<endl;
	InsertionSort(L);
	HienThiDS(L);
	
	cout<<"\nXoa Nhan Vien theo dieu kien"<<endl;
	XoaNhanVien(L);
	HienThiDS(L);
	
	return 0;
}
