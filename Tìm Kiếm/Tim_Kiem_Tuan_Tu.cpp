#include<iostream>
using namespace std;

//int Search(int x[], int n, int k)
//{
//	int i = 0;
//	x[n] = k;
//	while(x[i] != k)
//	{
//		i++;
//	}
//	if(i < n)
//		return i;
//	else
//		return -1;
//} // Tim kiem tuan tu co cai tien


int Search(int x[], int n, int k)
{
	int i = 0;
	while(i < n && x[i] != k)
	{
		i++;
	}
	if(i < n)
		return i;
	else
		return -1;
} 



int main()
{
	int x[] = {34,14,24,54,84,64,94,74,4};
//	int k = 55;
	int k = 94; 
	int n = 9;
	int kq = Search(x,n,k);
	cout<<"Vi tri cua k la: "<<kq<<endl;
	
	return 0;
}
