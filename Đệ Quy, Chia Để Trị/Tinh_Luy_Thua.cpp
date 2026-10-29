#include<iostream>
using namespace std;

int Power(int a, int n)
{
	if(n==1)
		return a;
	else{
		int x = Power(a,n/2);
		if(n%2 == 0)
			return x * x;
		else
			return x * x * a;
	}
}

int main()
{
	int n = 10;
	int a = 2;
	int kq = Power(a,n);
	
	cout<<"Ket qua cua 2 mu 9 la: "<<kq;
	return 0;
}
