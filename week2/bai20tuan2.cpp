#include<iostream>
using namespace std;
int lamthem(int hours)
{
    int sal;
    if(hours <= 100) sal=12000*hours;
    if(hours > 100 && hours <=150) sal=12000*100+(hours-100)*16000;
    if(hours > 150 && hours <=200) sal=12000*100+50*16000+(hours-150)*20000;
    if(hours > 200) sal=12000*100+50*16000+50*20000+(hours-200)*25000;
    return sal;
}
int main()
{
    
}