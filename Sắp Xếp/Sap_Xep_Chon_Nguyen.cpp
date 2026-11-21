#include<iostream>
using namespace std;

void SelectionSort(int x[], int n)
{
	for(int i=0; i<n-1; i++)
	{
		int m = i;
		for(int j=i+1; j<n; j++)
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

void Xuat(int x[] ,int n)
{
	for(int i=0; i<n; i++)
	{
		cout<<x[i]<<" ";
	}
}

int main()
{
	int x[] = {74, 34, 24, 84, 54, 94, 14, 64, 4};
	int n = 9;
	SelectionSort(x,n);
	Xuat(x,n);
	
	return 0;	
}
