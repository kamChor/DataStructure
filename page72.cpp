#include<iostream>
using namespace std;
int main()
{
	char *p = "hello";
	char *q =p;
	cout<<p<<endl<<q;
	q="Good Bye";
	cout<<p<<endl<<q;
	return 0;
}
