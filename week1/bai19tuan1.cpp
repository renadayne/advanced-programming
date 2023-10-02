#include<iostream>
using namespace std;
bool kt(int a, int b, int c)
{
    if((a>b && b>c) || (a<b && b<c))
    return true;
    else return false;
}
int main()
{
    int a,b,c;
    cout << "Nhap vao ban phim 3 so a,b,c: ";
    cin >> a >> b >> c;
    if(kt(a,b,c)==1)
    cout << "true";
    else cout << "false";
    return 0;
}