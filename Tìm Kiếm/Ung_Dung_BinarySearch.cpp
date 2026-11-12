#include<iostream>
using namespace std;

void Nhap(int x[], int n)
{
	for(int i=0; i<n; i++)
	{
		cout<<"x["<<i<<"] = ";
		cin>>x[i];
	}
}

void BubbleSort(int x[], int n)
{
	for(int i=1; i<n; i++)
	{
		for(int j=n-1; j>=1; j--)
		{
			if(x[j-1] > x[j])
			{
				int tg = x[j-1];
				x[j-1] = x[j];
				x[j] = tg; 
			}
		}
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
			return BinarySearch(x,k,left,mid-1);
		else
			return BinarySearch(x,k,mid+1,right);
	}
}

int main()
{
	int x[100];
	int n;
	do{
		cout<<"Enter n = ";
		cin>>n;
	}while(n<=0);
	
	int k;
	cout<<"Enter k = ";
	cin>>k;
	
	Nhap(x,n);
	BubbleSort(x,n);
	int kq = BinarySearch(x,k,0,n-1);
	if(kq != -1)
	{
		cout<<"Vi tri xuat hien k la: "<<kq<<endl;
	}
	else
		cout<<"k khong xuat hien trong day tren !!!"<<endl;
		
	return 0;
}
