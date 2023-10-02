#include<iostream>
using namespace std;

int main()
{
    double f,c,k;
    cout << "Nhap vao ban phim nhiet do duoi dang do F: ";
    cin >> f;
    c=(f-32)*5/9;
    k=c+273.15;
    cout << "Nhiet do duoc chuyen doi theo do C va do K la: ";
    cout << c << " " << k;
    return 0;
}