#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int cp;
    do
    {
    cout << "nhap vao ban phim 1 so nguyen duong: ";
    cin >> cp;
    }
    while(cp<=0);
    if(sqrt(cp)*sqrt(cp)==cp)
    cout << "Bingo day la so chinh phuong neee";
    else cout << "Omg day hok phai so chinh phuong nha";
    return 0;


    
}