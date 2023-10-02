#include<iostream>
#include<math.h>
using namespace std;
int main()
{
double a,b,c,d,x1,x2;
cout << "Nhap vao ban phim 3 nghiem a,b,c: ";
cin >> a >> b >> c;
if(a==0)
{
 if(b==0) cout<< "phuong trinh vo nghiem";
 else{ d=-c/b;
      cout << d;}
}
else {
      d=b*b-4*a*c;
      if(d<0) cout<< "phuong trinh vo nghiem";
      else if(d==0)
     {
      x1=(-b)/(2*a);
      cout << "Phuong trinh co nghiem duy nhat: ";
      cout << x1;
     }
      else
     {
      x2=(-b+sqrt(d))/(2*a);
      x1=(-b-sqrt(d))/(2*a);
      cout << "Phuong trinh co 2 nghiem: ";
      cout << x1 << " va " << x2;
      }
}
return 0;
}