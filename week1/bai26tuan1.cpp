#include<iostream>
using namespace std;

int main()
{
    int n;
    double a[100],sum=0,mean;
    cout << "Nhap vao ban phim 1 so N bat ki: ";
    cin >> n;
    for(int i=0;i<n;i++)
    {
    cout << "Nhap vao ban phim so hang thu " << i+1 << ": ";
    cin >> a[i];
    sum=sum+a[i];
    }
    mean=sum/(double)n;
    double temp;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        if(a[i]<a[j])
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;

        }
    }
    cout << "gia tri trung binh cua day N so la " << mean << endl;
    cout << "gia tri lon nhat cua day la " << a[0] << endl;
    cout << "gia tri nho nhat cua day la " << a[n-1] << endl; 
    return 0;
}