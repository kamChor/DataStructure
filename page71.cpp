#include<iostream>
using namespace std;
int main()
{
	int i = 5;
	int&j=i;
	int p =10;
	j=p;
	cout<<endl<<i<<endl<<j;
	p=20;
	cout<<endl<<i<<endl<<j;
	return 0;
}
