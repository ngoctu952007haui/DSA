#include<iostream>
using namespace std;

int SearchDaSap(int x[], int n, int k)
{
	int i=0;
	while(i<n && k > x[i])
	{
		i+=1;
	}
	if(i<n && k == x[i])
		return i;
	else
		return -1;
}

void NhapMang(int x[], int n)
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
			if(x[j-1]>x[j])
			{
				int tg = x[j-1];
				x[j-1] = x[j];
				x[j] = tg;
			}
		}
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
	
	NhapMang(x,n);
	BubbleSort(x,n);
	int kq = SearchDaSap(x,n,k);
	if(kq != -1)
		cout<<"Vi tri cua k trong day la: "<<kq<<endl;
	else
		cout<<"k khong xuat hien trong day!!!"<<endl;
		
	return 0;
}
