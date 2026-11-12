#include<iostream>
using namespace std;

struct HocSinh
{
	string maHS;
	string hoTen;
	int namSinh;
	float diemTB;
};

void BubbleSort(HocSinh a[], int n)
{
	for(int i=1; i<n; i++)
	{
		for(int j=n-1; j>=1; j--)
		{
			if(a[j-1].diemTB < a[j].diemTB)
			{
				HocSinh tg = a[j-1];
				a[j-1] = a[j];
				a[j] = tg;
			}
		}
	}
}

int BinarySearch(HocSinh a[], int left, int right, float k)
{
	if(left>right)
		return -1;	
	else{
		int mid = (left + right) / 2;
		if(a[mid].diemTB == k)
			return mid;
		else if(a[mid].diemTB > k)
			return BinarySearch(a,mid+1,right,k);
		else
			return BinarySearch(a,left,mid-1,k);
	}
}

void NhapThongTin(HocSinh a[], int n)
{
	for(int i=0; i<n; i++)
	{
		cout<<"MA HOC SINH: ";
		getline(cin, a[i].maHS);
		cout<<"TEN HOC SINH: ";
		getline(cin, a[i].hoTen);
		cout<<"SINH NAM: ";
		cin>>a[i].namSinh;
		cout<<"DIEM TRUNG BINH: ";
		cin>>a[i].diemTB;
		cin.ignore();
	}
}


void HienThiThongTin(HocSinh a[], int n)
{
	for(int i=0; i<n; i++)
	{
		cout<<"------------"<<endl;
		cout<<a[i].maHS<<endl;
		cout<<a[i].hoTen<<endl;
		cout<<a[i].namSinh<<endl;
		cout<<a[i].diemTB<<endl;
	}
}
int main()
{
	HocSinh a[100];
	int n;
	do{
		cout<<"Enter n = ";
		cin>>n;
	}while(n<0 || n>100);
	
	float k;
	cout<<"Enter diem trung binh = ";
	cin>>k;
	cin.ignore();
	NhapThongTin(a,n);
	
	
	BubbleSort(a,n);
	cout<<"Thong tin sau khi sap xep lai: "<<endl;
	HienThiThongTin(a,n);
	int kq = BinarySearch(a,0,n-1,k);
	
	if(kq != -1)
	{
		cout<<"Diem trung binh ban vua nhap co trong danh sach!"<<endl;
		cout<<a[kq].maHS<<endl;
		cout<<a[kq].hoTen<<endl;
		cout<<a[kq].namSinh<<endl;
		cout<<a[kq].diemTB<<endl;
	}
	else
		cout<<"Diem trung binh ban vua nhap khong co trong danh sach!"<<endl;
	return 0;
}
	
