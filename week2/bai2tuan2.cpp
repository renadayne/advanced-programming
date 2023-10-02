#include<iostream>
using namespace std;

int main()
{
    double x,a=1;
    int y,i;
    cout << "Nhap vao ban phim x va y: "; 
    cin >> x >> y;
    for(i=1;i<=y;i++)
    a=x*a;
    cout << "x^y = ";
    cout << a;
    return 0;
}