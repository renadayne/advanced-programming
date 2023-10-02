#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{
    int a,b;
    cout << "nhap vao ban phim 2 so nguyen bat ki: ";
    cin >> a >> b;
    int max;
    max=(a+b+abs(a-b))/2;
    cout << "So lon hon trong 2 so la " << max;
    return 0;
}