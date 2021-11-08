#include "NumClass.h"
#include "math.h"
int isArmstrong(int n);

int isPalindrome(int n){
  int originalN= n;
  int digit;
  int reversed = 0;
  while(n>0){
    digit = n % 10;
    reversed = reversed*10 + digit;
    n = n / 10;
  }
  return (reversed == originalN) ? 1 : 0;
}

int isArmstrong(int n){
    int originalN = n;
  int len = 0;
  while(n > 0){
    len ++;
    n = n/10;
  }
  n=originalN;
  int sum=0;
  while(n>0){
      sum=sum+pow(n%10, len);
      n=n/10;
  }
  return (originalN==sum) ? 1 : 0 ;
}