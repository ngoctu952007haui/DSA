#include<iostream>
using namespace std;

void InsertionSort(string x[], int n)
{
	for(int i=1; i<n;i++)
	{
		string tam = x[i];
		int j = i-1;
		while(j>-1 && x[j] > tam)
		{
			x[j+1] = x[j];
			j--;
		}
		x[j+1] = tam;
	}
}

void HienThi(string x[], int n)
{
	for(int i=0; i<n;i++)
	{
		cout<<x[i]<<" ";
	}
}

int main()
{
	string x[] = {"John","Wen","Anna","Henry","Thor","Terry","Ozil","Adam","Dany"};
	int n = 9;
	InsertionSort(x,n);
	HienThi(x,n);
	return 0;
}
