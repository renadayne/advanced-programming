#include<iostream>
#include<math.h>
using namespace std;
int main()
{
int x1,y1,x2,y2;
double ab;
            cout <<"Nhap vao ban phim hoanh do x1: "; cin >> x1;
            cout <<"Nhap vao ban phim tung do y1: "  ; cin >> y1; 
            cout <<"Nhap vao ban phim hoanh do x2: "; cin >> x2;
            cout <<"Nhap vao ban phim tung do y2: "  ; cin >> y2; 
            ab=sqrt(double((x1-x2)*(x1-x2)+(y2-y1)*(y2-y1)));
            cout << "Khoach cach euclid giua 2 diem la : " << ab;
            return 0;
    }
