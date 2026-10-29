#include<iostream>
using namespace std;

void ChuyenDia(int n, char A, char B, char C)
{
	if(n==1)
		cout<<"Chuyen 1 dia tu coc "<< A << " sang coc "<<C<<endl;
	else{
		ChuyenDia(n-1,A,C,B);
		ChuyenDia(1,A,B,C);
		ChuyenDia(n-1,B,A,C);
	}

}

int main()
{
	int n = 2;
	ChuyenDia(n,'A','B','C');
	return 0;
}
