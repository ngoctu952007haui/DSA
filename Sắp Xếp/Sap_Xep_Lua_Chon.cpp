#include<iostream>
using namespace std;

void SelectionSort(int x[], int n)
{
	for(int i=0; i<n-1; i++)
	{
		int m = i;
		for(int j = i + 1; j<n; j++)
		{
			if(x[j] > x[m])
			{
				m = j;
			}
		}
		int tg = x[m];
			x[m] = x[i];
			x[i] = tg;
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
	int x[] = {50,8,34,6,98,17,83,25,66,42,21,59,63,71,85};
	int n = 15;
	SelectionSort(x,n);
	XuatMang(x,n);
	return 0;
}
