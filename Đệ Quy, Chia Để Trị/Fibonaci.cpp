#include<iostream>
using namespace std;

int Fibonaci(int n)
{
	if(n==1 || n==2)
		return 1;
	else
		return Fibonaci(n-1) + Fibonaci(n-2);
}

void HienThiDay(int n)
{
	int count = 0;
	int i = 1;
	while(count < n)
	{
		cout<<Fibonaci(i)<<" ";
		i++;
		count++;
	}
		
}

int main()
{
	int n = 7;
	int kq = Fibonaci(n);
	cout<<"Ket qua so Fibonaci thu "<<n<<" la: "<<kq<<endl;
	HienThiDay(n);
	return 0;
}
