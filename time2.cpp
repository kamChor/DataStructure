#include <iostream>

using namespace std;

class time
{
    int h, m, s;
public:
    void setdata();
    void putdata();
};
void time::setdata()
{
    cout << "Enter:" << endl;
    cout << "Hours " << "Minutes " << "Seconds " << endl;
    cin >> h >> m >> s;
}
void time::putdata()
{
    cout<<"Time is "<<h<<":"<<m<<":"<<s<<endl;
}

int main()
{
    time t1, t2;
    t1.setdata();
    t1.putdata();
    t2.setdata();
    t2.putdata();
    return 0;
}

