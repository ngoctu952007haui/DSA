#include<iostream>
#include<string>
using namespace std;
struct SinhVien
{
	string maSV;
	string hoDem;
	string ten;
	string gioiTinh;
	int namSinh;
	float diemTK;
};

struct Node
{
	SinhVien infor;
	Node *next;
};

typedef Node *TRO;
// *TRO == *next

void Create(TRO &L)
{
	L = NULL;
}

bool Empty(TRO L)
{
	if(L == NULL)
		return true;
	return false;
}

Node *taoNode (SinhVien sv){
		Node *P = new Node();
		P->infor.maSV = sv.maSV;
		P->infor.hoDem = sv.hoDem;
		P->infor.ten = sv.ten;
		P->infor.gioiTinh = sv.gioiTinh;
		P->infor.namSinh = sv.namSinh;
		P->infor.diemTK = sv.diemTK;
		P->next = NULL;
		return P;
};

void ChenPTODau(TRO &L, SinhVien sv)
{
	TRO P = taoNode(sv);
	P->next = L;
	L = P;
}

void ChenPTOCuoi(TRO &L, SinhVien sv)
{
	TRO P = taoNode(sv);
	if(Empty(L) == true)
	{
		L = P;
	}
	else{
		TRO Q = L;
		while(Q -> next != NULL){
			Q = Q -> next;
		}
		Q -> next = P;
	}
}

void InDanhSach(TRO L)
{
	if(Empty(L) == true){
		cout<<"Danh sach rong"<<endl;
	}
	else{
		TRO Q = L;
		while(Q != NULL)
		{
			cout<<Q->infor.maSV<<" ";
			cout<<Q->infor.hoDem<<" ";
			cout<<Q->infor.ten<<" ";
			cout<<Q->infor.gioiTinh<<" ";
			cout<<Q->infor.namSinh<<" ";
			cout<<Q->infor.diemTK<<endl;
			Q = Q -> next;
		}
	}	
}

int main()
{
	TRO L;
	SinhVien sv1{"SV001","Luong Ngoc"," Tu"," Nam ",2007,7.8};
	SinhVien sv2{"SV002","Luu Duc"," Thinh"," Nam",2007, 8.0};
	SinhVien sv3{"SV003","Nguyen Huu"," Loc"," Nam",2004,7.5};
	SinhVien sv4{"SV004","Nguyen Ngoc"," Linh"," Nu",2006,8.5};
	SinhVien sv5{"SV005","Ngo Bao"," Chau"," Nu",2006,8.5};
	
	Create(L);
	ChenPTODau(L,sv1);
	ChenPTODau(L,sv2);
	ChenPTODau(L,sv3);
	ChenPTODau(L,sv4);
	ChenPTODau(L,sv5);
	InDanhSach(L);
	
	return 0;
}
