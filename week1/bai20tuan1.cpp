#include<iostream>
using namespace std;

int main()
{
    int a,b;
    cout << "Nhap vao ban phim 2 so nguyen a,b: ";
    cin >> a >> b;
    if(a%7==0 && b%7==0)
    cout << "true";
    else cout << "false";
    return 0;
}