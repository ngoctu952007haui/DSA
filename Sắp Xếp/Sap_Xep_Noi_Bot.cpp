#include<iostream>
using namespace std;

void BubbleSort(int x[], int n)
{
	for(int i=1; i<n; i++)
	{
		for(int j=n-1; j>=i; j--)
		{
			if(x[j] > x[j-1])
			{
				int tg = x[j];
				x[j] = x[j-1];
				x[j-1] = tg;	
			}
	}	
}
}


void XuatMang(int x[], int n)
{
	for(int i=0; i<n; i++)
	{
		cout<<x[i]<<" ";
	}
}

int main()
{
	int x[] = {34,74,94,84,54,24};
	int n = 6;
	BubbleSort(x,n);
	XuatMang(x,n);
	return 0;
}
