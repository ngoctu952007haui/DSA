#include<iostream>
using namespace std;

int Ucln(int a, int b)
{
	int r = a % b;
	if(r==0)
		return b;
	else
		return Ucln(b,r);
}// thuat toan Euclid

int main()
{
	int a = 40, b = 5;
	int kq = Ucln(a,b);
	
	cout<<"Uoc chung lon nhat cua "<<a<<" va "<<b<<" la: "<<kq;
	return 0;
}
