#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n,a[100],sum=0,max,min;
    cout << "Nhap vao 1 so nguyen duong N bat ki: ";
    cin >> n;
    for(int i=0;i<n;i++)
    {
    cout << "Nhap vao so thu " << i+1 << ": ";
    cin >> a[i];
	}
    max=a[0];
    min=a[0];
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]<a[j])
            swap(a[i],a[j]);
            if(a[i]>a[j])
            swap(a[j],a[i]);
        }
    }
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]%2==0)
        sum=sum+a[i];
        else
        cnt++;
    }
    cout << "Phan tu nho nhat la: " << a[0] << endl;
    cout << "Phan tu lon nhat la: " << a[n-1] << endl;
    cout << "Tong cac phan tu chan la: " << sum << endl;
    cout << "So luong cac phan tu le la: " << cnt;
    return 0;
}