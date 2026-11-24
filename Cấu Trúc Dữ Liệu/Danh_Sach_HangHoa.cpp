#include<iostream>
using namespace std;
const int MAX = 100;

struct HangHoa
{
	int maHang;
	string tenHang;
	string dVTinh;
	long donGia;
	int soLuong;
	long thanhTien;
};

struct List
{
	int count;
	HangHoa e[MAX];
};

bool KiemTraDanhSach(List L)
{
	if(L.count == -1)
		return false;
	return true;
}

bool full(List L)
{
	if(L.count == MAX - 1)
		return true;
	return false;
}

void Remove(List &L, int k)
{
	if(KiemTraDanhSach(L) == false)
		cout<<"Danh sach rong, khong the xoa!"<<endl;
		
	else{
		if(k<=L.count+1 && k>0)
		{
			for(int i=k; i<=L.count; i++)
			{
				L.e[i-1] = L.e[i];
			}
			L.count--;
		}
	}
}

void Insert(List &L, int k, HangHoa h7)
{
	if(full(L) == true)
		cout<<"Danh sach da day!"<<endl;
	else{
		if(k<=L.count+1 && k>0 && full(L) == false)
		{
			for(int i=L.count; i>=k-1; i--)
			{
				L.e[i+1] = L.e[i];
			}
			L.e[k-1] = h7;
			L.count++;
		}
	}
}

void InDanhSach(List L)
{
	for(int i=0; i<L.count; i++)
	{
		cout<<"---------"<<endl;
		cout<<L.e[i].maHang<<endl;
		cout<<L.e[i].tenHang<<endl;
		cout<<L.e[i].donGia<<endl;
		cout<<L.e[i].soLuong<<endl;
		cout<<L.e[i].thanhTien<<endl;
	}
}

void BubbleSort(List L)
{
	for(int i=1; i<L.count; i++)
	{
		for(int j=L.count-1; j>=i; j--)
		{
			if(L.e[j-1].thanhTien < L.e[j].thanhTien)
			{
				HangHoa tg = L.e[j-1];
				L.e[j-1] = L.e[j];
				L.e[j] = tg;
			}
		}
	}
}

int main()
{
	List L;
	L.count = 6;
	HangHoa h1 = {2001,"Vo","Quyen",5000,20,100000};
	HangHoa h2 = {2002,"But Chi","Cai",8000,50,400000};
	HangHoa h3 = {2003,"Hop but","Chiec",30000,10,300000};
	HangHoa h4 = {2004,"Tay","Cai",10000,20,200000};
	HangHoa h5 = {2005,"Muc","Lo",12000,5,60000};
	HangHoa h6 = {2006,"Thuoc Ke","Chiec",3000,15,45000};
	
	L.e[0] = h1;
	L.e[1] = h2;
	L.e[2] = h3;
	L.e[3] = h4;
	L.e[4] = h5;
	L.e[5] = h6;
	
	cout<<"Xoa phan tu thu 3 trong danh sach"<<endl;
	Remove(L,3);
	InDanhSach(L);
	
	HangHoa h7 = {2007,"Phan","Hop",3000,15,45000};
	cout<<"\nChen phan tu h7 vao vi tri thu 1 trong danh sach"<<endl;
	Insert(L,1,h7);
	InDanhSach(L);
	
	cout<<"\nSap xep danh sach hang hoa theo chieu giam dan cua thanh tien"<<endl;
	BubbleSort(L);
	InDanhSach(L);
	
	return 0;
	
}
