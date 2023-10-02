#include<iostream>
#include<math.h>
using namespace std;

int ktsohoanhao(int i);
int ktsochinhphuong(int i);
int ktsonguyento(int i);
int main()
{
    int n;
    do
    {
        cout << "Nhap vao 1 so nguyen duong bat ki: ";
        cin >> n;
    } while (n<=0);
    for(int i=2;i<=n;i++)
    {
        if(i==2) cout << "cac so hoan hao tu 2 den n la: ";
        ktsohoanhao(i);
    }
    cout << endl;
    for(int i=2;i<n;i++)
    {
    	if(i==2) cout << "cac so chinh phuong tu 2 den n la: ";
        ktsochinhphuong(i);
	}
	cout << endl;
	for(int i=2;i<n;i++)
	{
		if(i==2) cout << "cac so nguyen to tu 2 den n la: ";
        ktsonguyento(i);
	}
    return 0;
}
int ktsohoanhao(int i)
{
	
    int sum=0;
    for(int j=1;j<i;j++)
    {
        if(i%j==0)
        sum=sum+j;
    }
    if(sum==i) cout << i << " "; 
}
int ktsochinhphuong(int i)
{
	
    int s=sqrt(i);
    if(i==s*s)
    cout << i << " ";
}
int ktsonguyento(int i)
{
    int dem=0; 
    for(int j=2;j<=i/2;j++)
    {
        if(i%j==0)
        dem++;
    }
    if(dem==0) cout << i << " ";

}
