#include<iostream>
using namespace std;
#define MAX 100
struct HocSinh
{
	string hoTen;
	string gioiTinh;
	int namSinh;
	float diemTK;
};

struct List
{
	int count;
	HocSinh e[MAX];
};

List L;

void BubbleSort(HocSinh e[], int count)
{
	for(int i=1; i<count; i++)
	{
		for(int j=count-1; j>=1; j--)
		{
			if(e[j].hoTen < e[j-1].hoTen)
			{
				HocSinh a = e[j];
				e[j] = e[j-1];
				e[j-1] = a;
			}
		}
	}
}

void BubbleSort1(HocSinh e[], int count)
{
	for(int i=1; i<count; i++)
	{
		for(int j=count-1; j>=1; j--)
		{
			if(e[j].diemTK < e[j-1].diemTK)
			{
				HocSinh a = e[j];
				e[j] = e[j-1];
				e[j-1] = a;
			}
		}
	}
}

void DanhSachDiem(HocSinh e[], int count)
{
	for(int i=0; i<count; i++)
	{
		cout<<e[i].diemTK<<endl;
	}
}

void DanhSachTheoTen(HocSinh e[], int count)
{
	for(int i=0; i<count; i++)
	{
		cout<<e[i].hoTen<<endl;
	}
}

int main()
{
	HocSinh e[] = {{"Nguyen Van Linh","Nam",2000,8.5},{"Tran Van Dat","Nam",2001,9.0},{"Luu Van Duc","Nam",2002,8.4}};
	int count = 3;
	BubbleSort(e,count);
	DanhSachTheoTen(e,count);
	BubbleSort1(e,count);
	DanhSachDiem(e,count);
	
	return 0;
}
