#include <iostream>

using namespace std;

int main()
{
    int nt, ten, five, one;
    cin >> nt;
	//優先使用較大幣值
    ten = nt/10;
    nt%=10;
    five = nt/5;
    one = nt%5;
    cout << "NT10=" << ten << endl;
    cout << "NT5=" << five << endl;
    cout << "NT1=" << one << endl;
    return 0;
}
