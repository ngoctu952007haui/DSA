#include<iostream>
using namespace std;

struct HocSinh
{
	string maHS;
	string hoTen;
	int namSinh;
	float diemTB;
};

void NhapThongTin(HocSinh ds[], int n)
{	
	for(int i=0; i<n; i++)
	{
		cout<<"MA HS: ";
		getline(cin, ds[i].maHS);
		cout<<"HO TEN: ";
		getline(cin, ds[i].hoTen);
		cout<<"NAM SINH: ";
		cin>>ds[i].namSinh;
		cout<<"DIEM TRUNG BINH: ";
		cin>>ds[i].diemTB;
		cin.ignore();
	}
}

void XuatThongTin(HocSinh ds[], int n)
{
	cout<<"-----------------"<<endl;
	for(int i=0; i<n; i++)
	{
		cout<<ds[i].maHS<<endl;
		cout<<ds[i].hoTen<<endl;
		cout<<ds[i].namSinh<<endl;
		cout<<ds[i].diemTB<<endl;
	}
}

int TimKiemHocSinh(HocSinh ds[], int n, string k)
{
	int i=0;
	while(ds[i].hoTen != k)
	{
		i = i + 1;
	}
	
	if(i<n)
		return i;
	else
		return -1;
	
}




int main()
{
	HocSinh ds[99];
	int n;
	do{
		cout<<"nhap so luong hoc sinh: ";
		cin>>n;
		cin.ignore();
	}while(n<0 || n>100);
	
	NhapThongTin(ds,n);
	XuatThongTin(ds,n);
	
	cout<<"Nhap ten hoc sinh can tim: ";
	string tenCanTim;
	getline(cin, tenCanTim);
	int kq = TimKiemHocSinh(ds,n,tenCanTim);
	
	if(kq != -1)
	{
		cout<<"Hoc sinh vua nhap co trong danh sach!"<<endl;
		cout<<ds[kq].maHS<<endl;
		cout<<ds[kq].hoTen<<endl;
		cout<<ds[kq].namSinh<<endl;
		cout<<ds[kq].diemTB<<endl;
	}
	else
		cout<<"Hoc sinh vua nhap khong co trong danh sach!";
		
	return 0;
}
