#include<iostream>
#define MAX 8
using namespace std;

struct SinhVien
{
	string id;
	string hoDem;
	string ten;
	string gioiTinh;
	int namSinh;
	float diemTK;
};

struct Vector
{
	int count;
	SinhVien e[MAX];
};


void Xoa_Phan_Tu_Dau_Tien(Vector &studentList)
{
	if(studentList.count < 0)
		cout<<"Danh sach rong! ";
	
	for(int i=1; i<studentList.count; i++){
		studentList.e[i-1] = studentList.e[i];
	}
	studentList.count--;
}

int Kiem_Tra_Danh_Sach(Vector studentList){

	return studentList.count == MAX;
}

void Them_Phan_Tu(Vector &studentList, int k, SinhVien a)
{
	if(k<=studentList.count + 1 && k > 0 && !Kiem_Tra_Danh_Sach(studentList))
	{
		for(int i=studentList.count; i>=k-1; i--)
		{
			studentList.e[i+1] = studentList.e[i];			
		}
		studentList.e[k-1] = a;
		studentList.count++;
}
}


void Xuat_Thong_Tin(Vector studentList, int count)
{
	for(int i=0; i<studentList.count; i++)
	{
		cout<<studentList.e[i].id<<" ";
		cout<<studentList.e[i].hoDem<<" ";
		cout<<studentList.e[i].ten<<" ";
		cout<<studentList.e[i].gioiTinh<<" ";
		cout<<studentList.e[i].namSinh<<" ";
		cout<<studentList.e[i].diemTK;
		cout<<endl;
	}
}

void Sap_Xep_Theo_Ten(Vector &studentList)
{
	int i, j, m;
	SinhVien tg;
	for(int i=0; i < studentList.count; i++)
	{
		m = i;
		for(j=i+1; j<=studentList.count; j++)
		{
			if(studentList.e[j].ten < studentList.e[m].ten)
			{
				m = j;
			} 
		}
		tg = studentList.e[m];
		studentList.e[m] = studentList.e[i];
		studentList.e[i] = tg;
	}
}

int main()
{
	Vector studentList;
	studentList.count = 4;
	int count = 4;
	
	SinhVien sv1 = {"SV01","Luu Duc","Thinh","Nu",2006,8.5};
	studentList.e[0] = sv1;
	SinhVien sv2 = {"SV02","Luong Ngoc","Tu","Nam",2007,8.0};
	studentList.e[1] = sv2;
	SinhVien sv3 = {"SV03","Nguyen Ngoc","Linh","Nu",2008,9.0};
	studentList.e[2] = sv3;
	SinhVien sv4 = {"SV04","Nguyen Van","Nam","Nam",2004,8.7};
	studentList.e[3] = sv4;
	Xuat_Thong_Tin(studentList,count);
	Xoa_Phan_Tu_Dau_Tien(studentList);
	
	cout<<"Thong Tin Sau khi Da Cap Nhat lai:"<<endl;
	Xuat_Thong_Tin(studentList,count);
	
	cout<<"Danh Sach Sau Khi Chen Them 1 Phan Tu: "<<endl;
	int k = 3;
	SinhVien sv;
	sv = {"SV05","Le Thi","Doan","Nu",1998,7.6};
	Them_Phan_Tu(studentList,k,sv);
	Xuat_Thong_Tin(studentList,count);
	
	cout<<"Danh Sach Sau Khi Sap Xep Theo Ten: "<<endl;
	Sap_Xep_Theo_Ten(studentList);
	Xuat_Thong_Tin(studentList,count);
	
	return 0;
}



