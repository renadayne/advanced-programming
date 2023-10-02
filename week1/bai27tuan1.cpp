#include<iostream>
using namespace std;

int main()
{
    int n;
    while(true)
    {
        cout << "Nhap vao 1 so nguyen bat ki: ";
        cin >> n;
        if(n==-1)
        {
            cout << "Byeeee";
            break;
        }
        if(n>=0 && n%5==0) cout << n << endl;
        else cout << "-1" << endl;
        
    }
    return 0;
}