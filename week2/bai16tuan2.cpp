#include<iostream>
using namespace std;

int main()
{
    int num;
    do
    {
        cout << "Nhap vao mot so trong khoang 0..9: ";
        cin >> num;
        if(num==0) cout << "khong" << endl;
        if(num==1) cout << "mot" << endl;
        if(num==2) cout << "hai" << endl;
        if(num==3) cout << "ba" << endl;
        if(num==4) cout << "bon" << endl;
        if(num==5) cout << "nam" << endl;
        if(num==6) cout << "sau" << endl;
        if(num==7) cout << "bay" << endl;
        if(num==8) cout << "tam" << endl;
        if(num==9) cout << "chin" << endl;
    }
    while(num>=0 && num <=9);
    cout << "So ban vua nhap khong hop le, dung chuong trinh";
    /*switch(num)
    {
    case 0: cout << "khong"; break;
    case 1: cout << "mot"; break;
    case 2: cout << "hai"; break;
    case 3: cout << "ba"; break;
    case 4: cout << "bon"; break;
    case 5: cout << "nam"; break;
    case 6: cout << "sau"; break;
    case 7: cout << "bay"; break;
    case 8: cout << "tam"; break;
    case 9: cout << "chin"; break;
    default:
    cout << "So da nhap nam ngoai khoang yeu cau, ket thuc chuong trinh";
        break;
    } */
    return 0;
}