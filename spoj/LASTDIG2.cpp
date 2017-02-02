#include<cstdio>
#include<cstring>
#define ll long long
using namespace std;
int main(){
ll t, exp;
scanf("%lld",&t);
while(t--){
char str[1001];
scanf("%s %lld",&str,&exp);
ll b=str[strlen(str)-1]-48;
int digits[4],r;
if(b == 0 && exp != 0)
r=0;
else if(exp == 0)
r=1;
else{	
digits[0]=(b)%10;
digits[1]=(b*digits[0])%10;
digits[2]=(b*digits[1])%10;
digits[3]=(b*digits[2])%10;
exp%=4;
switch(exp){
case 0:
r=digits[3];
break;
case 1:
r=digits[0];
break;
case 2:
r= digits[1];
break;
case 3:
r=  digits[2];
break;				
}
}
printf("%d\n",r);
}
return 0;
}
