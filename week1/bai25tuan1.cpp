#include<iostream>
using namespace std;

int main()
{
    int arr[10];
    for(int i=0;i<5;i++)
    {
        cout << "Nhap so thu " << i+1 << " vao ban phim: "; 
        cin >> arr[i];
    }
    int temp;
    for(int i=0;i<5;i++)
    {
        for(int j=i+1;j<5;j++)
        {
            if(arr[i]<arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    cout << "So dung giua trong 5 so la ";
    cout << arr[2];
    return 0;
}