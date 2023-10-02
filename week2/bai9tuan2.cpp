#include<iostream>
using namespace std;

int main()
{
    int a;
    cout << "Nhap vao 1 so bat ki: ";
    cin >> a;
    int sum=0,d;
    while(a>0)
    {
        d=a%10;
        a=a/10;
        sum=sum+d;
    }
    cout << "Tong cac chu so cua so ban da nhap la: ";
    cout << sum;
    return 0;
}