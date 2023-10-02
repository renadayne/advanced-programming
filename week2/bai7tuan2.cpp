#include<iostream>
using namespace std;

int main()
{
    double a1,b1,c1,a2,b2,c2,Dx,Dy,D;
    cout << "Nhap vao 6 he so cua phuong trinh bac nhat 2 an: ";
    cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2;
    if(((a1*a1)+(b1*b1))!=0 && ((a2*a2)+(b2*b2))!=0)
    {
        D=a1*b2-a2*b1;
        Dx=c1*b2-c2*b1;
        Dy=a1*c2-a2*c1;
        if(D!=0) {
            cout << "2 nghiem x va y cua phuong trinh la: ";
            cout << Dx/D << " " << Dy/D;
        }
        if(D==0)
        {
            if(Dx!=0 && Dy!=0) cout << "phuong trinh vo nghiem";
            else if(Dx==0 && Dy==0) cout << "phuong trinh co vo so nghiem";
        }
    }
    return 0;
}