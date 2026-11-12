#include<iostream>
using namespace std;

void NhapMang(int x[], int n)
{
	for(int i=0; i<n; i++)
	{
		cout<<"x["<<i<<"] = ";
		cin>>x[i];
	}
}

int BinarySearch(int x[], int k, int left, int right)
{
	if(left>right)
		return -1;
	else{
		int mid = (left + right) / 2;
		if(x[mid] == k)
			return mid;
		else if(x[mid] > k)
			return BinarySearch(x,k,left, mid-1);
		else
			return BinarySearch(x,k,mid+1,right);
	}
}

int main()
{
	int x[100];
	int n, k1, k2;
	do{
		cout<<"Enter n = ";
		cin>>n;
	}while(n<=0);
	
	NhapMang(x,n);
	cout<<"Enter k1 = ";
	cin>>k1;
	int kq1 = BinarySearch(x,k1,0,n-1);
	cout<<"Vi tri cua phan tu k1 la: "<<kq1<<endl;
	
	cout<<"Enter k2 = ";
	cin>>k2;
	int kq2 = BinarySearch(x,k2,0,n-1);
	cout<<"Vi tri cua phan tu k2 la: "<<kq2<<endl;

	return 0;
}
