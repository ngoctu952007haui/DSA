#include<iostream>
using namespace std;

int BinarySearch(int x[], int L, int R, int K)
{
	if(L>R)
		return -1; // khong tim thay phan tu trong day
	else
	{
		int M = (L+R) / 2;
		if(x[M] == K)
			return M;
		else if(x[M] > K)
			return BinarySearch(x,L,M-1,K);
		else
			return BinarySearch(x,M+1,R,K);
	}
}

int main()
{
	int x[] = {94,84,74,64,54,34,24,14,4};
	int K = 64;
	int n = 9;
	int kq = BinarySearch(x,0,n-1,K);
	
	cout<<"Vi tri cua K la: "<<kq<<endl;
	return 0;
}