#include<iostream>
using namespace std;

void InsertionSort(int x[], int n)
{
	for(int i=1; i<n; i++)
	{
		int tam = x[i];
		int j = i - 1;
		while(j>-1 && x[j] < tam)
		{
			x[j+1] = x[j];
			j--;
		}
		x[j+1] = tam;
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
	int x[] = {34,14,24,54,84,64,94,74,4};
	int n = 9;
	InsertionSort(x,n);
	XuatMang(x,n);
	return 0;
}
