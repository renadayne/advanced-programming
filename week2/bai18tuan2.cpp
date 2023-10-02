#include<iostream>
using namespace std;

int main()
{
    double n, sum=0, cnt=1;
    while(true)
    {
        cout << "Diem mon hoc thu " << cnt << ":";
        cin >> n;
        if(n>10) // chua xu li duoc truong hop 2 lan nhap sai tro len
        {
            cout << "Nhap lai diem mon hoc " << cnt << ":";
            cin >> n;
        }
        if(n>=0 && n<=10)
        sum=sum+n;
        if(n<0) break;
        cnt++;
    }
    if(cnt==1) cout << "0";
    else cout << "Diem trung binh cua " << cnt-1 << " mon hoc:" << sum/(cnt-1);
    return 0;
}