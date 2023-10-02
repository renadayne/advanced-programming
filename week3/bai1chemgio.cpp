#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
    int n,a[10000];
    cout << "Nhap vao mot so N bat ki tu ban phim: ";
    cin >> n;
    for(int i=0;i<n;i++)
    {
    cout << "Nhap vao so thu " << i+1 << ": ";
    cin >> a[i];
	}
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        if(a[i]==a[j])
        {
            cout << "YES";
            exit(0);
        }
    }
    cout << "NO";
    return 0;
}