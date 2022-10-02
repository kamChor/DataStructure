#include<iostream>
#include<cmath>
using namespace std;
class time
{
	int h,m,s;
	public:
		void putdata();
		void outdata();
};
void time::putdata()
{
	cout<<"Enter the hours , mintus , second"<<endl;
	cin>>h>>m>>s>>endl;
}
void time::outdata()
{
	cout<<""<<h<<" :"<<m<<" : "<<s;
}
int main
{
	time t1;
	t1.putdata();
	t1.outdata();
}
