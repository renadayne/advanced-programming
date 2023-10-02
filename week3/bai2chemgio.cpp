#include<iostream>
using namespace std;


int main()
{
    string s;
    cout << "Nhap vao mot chuoi ki tu bat ki: ";
    cin >> s;
    int a,n=s.size();
    for(int i=0;i<n/2;i++)
    {
        if(s[i]==s[n-i-1])
        a=1;
        else a=0;
    }
    if(a==1) cout << "Yes";
    else cout << "No";
    return 0;
}