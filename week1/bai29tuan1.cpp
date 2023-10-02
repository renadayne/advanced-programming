#include<iostream>
using namespace std;

int main()
{
    int n; 
    cout<< "Nhap vao ban phim 1 so nguyen duong bat ki: ";
    cin >> n;
    
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout << "*";            
        }
        cout << endl;
    }    
    return 0;

}