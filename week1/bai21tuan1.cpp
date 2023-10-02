#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    double a,b,c,area;
    do 
    {
        cout << "Nhap vao ban phim 3 so tuong ung voi do dai 3 canh mot tam giac: ";
        cin >> a >> b >> c;
    }
    while(a+b<=c || a+c<=b || b+c<=a);
    double s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    cout << "Dien tich tam giac tu 3 canh da nhap la: " << area;
    return 0;

}