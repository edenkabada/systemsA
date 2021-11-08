#include "NumClass.h"
#include "math.h"

int isPrime(int n){
    if(n<=0){
        return 0;
    }
    int res=1;
    for(int i=2; i<=((int)sqrt(n)) && (res==1); i++){
        if(n%i==0){
            res=0;
        }
    }
    return res;
}

int factorial(int n){
  int res = 1;
  for(int i=1 ; i<=n ; ++i){
    res = res*i;
  }
  return res;
}

int isStrong(int n){
    int digit, sum;
    int OrginalN=n;
    while(n>0){
        digit=n%10;
        n=n/10;
        sum=sum+factorial(digit);
    }
    return (sum==OrginalN) ? 1 : 0 ;
}