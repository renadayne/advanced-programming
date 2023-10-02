#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    double kg,cm,BMI;
    cout << "Nhap vao ban phim can nang cua ban: ";
    cin >> kg;
    cout << "Nhap vao ban phim chieu cao cua ban: ";
    cin >> cm;
    BMI=kg/(cm*cm);
    cout << "Chi so BMI la: " << BMI;
    return 0;
}
