#include <iostream>
#include <math.h>
using namespace std;
int main()
{
int x,y;
double kc;
            cout<<"Nhap hoanh do x: "; 
			cin>> x;
            cout<<"Nhap tung do y: "  ; 
			cin>> y; 
            kc=sqrt(double(x*x+y*y));
            cout << "Khoang cach tu diem (x,y) toi goc toa do (0,0) la : "<< kc;
            return 0;
    }