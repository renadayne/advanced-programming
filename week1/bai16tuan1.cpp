#include<iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout << "Nhap vao ban phim 3 so a, b va c: ";
    cin >> a >> b >> c;
    if(a==b && b==c) cout << "true";
    else cout << "false";
    return 0;
}