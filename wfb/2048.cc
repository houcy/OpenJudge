#include <iostream>
#include <iomanip>

using namespace std;

class Data {
private:
    double x;
public:
    void init(double d) {x = d;}
    double getValue() {return x;}
     void showValue() {cout<<x<<endl;}
};
int main()
{
    Data data;
    double d;
    cin>>d;
    data.init(d);
    cout<<data.getValue()<<endl;
    data.showValue();
}
/**************************************************************
	Problem: 2048
	User: 201601011420
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

