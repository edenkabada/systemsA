#include "NumClass.h"
#include "stdio.h"

int main(){
    int n1,n2;
    scanf("%d %d", &n1, &n2);
    int a, b;
  if(n1 > n2){
    a = n2;
    b = n1;
  } else {
    a = n1;
    b = n2;
  }
     
  for(int i=a ; i<=b ; ++i){
    if(isArmstrong(i)){
      printf("%d is armstrong. ", i);
    }
  } 
   printf("\n");
  for(int i=a ; i<=b ; ++i){
    if(isPalindrome(i)){
      printf("%d is palindrome. ", i);
    }
  }
  printf("\n"); 
  for(int i=a ; i<=b ; ++i){
    if(isPrime(i)){
      printf("%d is prime. ", i);
    }
  }
  printf("\n");
  for(int i=a ; i<=b ; ++i){
    if(isStrong(i)){
      printf("%d is strong. ", i);
    }
  }
  printf("\n");
}