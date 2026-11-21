#include<iostream>
using namespace std;

void SelectionSort(string x[], int n)
{
	for(int i=0; i<n-1; i++)
	{
		int m = i;
		for(int j=i+1; j<n; j++)
		{
			if(x[j] < x[m])
			{
				m = j;
			}
		}
		string tg = x[m];
		x[m] = x[i];
		x[i] = tg;
	}
}

void Xuat(string x[] , int n)
{
	for(int i=0; i<n; i++)
	{
		cout<<x[i]<<" ";
	}
}

int main()
{
	string x[] = {"An","Tu","Hoa","Long","Phuc"};
	int n = 5;
	SelectionSort(x,n);
	Xuat(x,n);
	
	return 0;
}
