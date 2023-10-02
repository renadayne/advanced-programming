#include<stdio.h>
#include<math.h>
bool snt(int n){
    int i;
    if(n<=1) return 0;
    int cnt=0;
    for(i=2; i<=sqrt(n);i++)
    {
        if(n%i==0) cnt++;
    }
    if(cnt==0) return 1;
    else return 0;
    }
    int main(){
        int a;
        scanf("%d",&a);
        if (snt(a)==1){
            printf("Yes");
        }
        if(snt(a)==0){
            printf("No");
        }
        return 0;
    }