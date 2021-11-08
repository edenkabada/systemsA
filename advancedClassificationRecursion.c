#include "NumClass.h"
#include "math.h"

int reverse(int n, int temp)
{
  if(n==0){
    return temp;
  }
  temp = (temp * 10) + (n % 10);
  return reverse(n / 10, temp);
}

int isPalindrome(int n)
{
  int reversed = reverse(n, 0);
  return (reversed == n) ? 1 : 0;
}

int length(int n)
{
  if(n/10 == 0) {
    return 1;
  }
  return 1 + length(n / 10);
}

int calcPow(int n, int len, int temp)
{
  if(n == 0){
    return temp;
  }
  temp = temp + (int)pow((n%10), len);
  return calcPow(n/10, len, temp);
}

int isArmstrong(int n){
  int len = length(n);
  int powersSum = calcPow(n, len, 0);
  return (powersSum == n) ? 1 : 0;
}
