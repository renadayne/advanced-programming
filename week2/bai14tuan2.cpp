#include<iostream>
using namespace std;

int main()
{
    double n,temp1,temp2,a,i=0,dem=0;
    cout << "Nhap vao 1 so nguyen duong N bat ki: ";
    cin >> n;
    while(dem!=n)
    {
    	cout << "Nhap vao so thu " << dem+1 << ": ";
        cin >> a;
        if(i==0) 
        {
            temp1=a;
            temp2=a;
        }
        if(temp1<a) temp1=a;
        if(temp2>a) temp2=a;
        i++;
        dem++;
    }
    cout << "So lon nhat trong day n so la: " << temp1 << endl;
    cout << "So nho nhat trong day n so la: " << temp2 << endl;
    return 0;
}