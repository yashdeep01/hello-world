#include<stdio.h>
#include<string.h>

int main()
{
  int n;
  scanf("%d",&n);
  char str[n];
  scanf("%s",str);
  if(isPalindrome(str))
    printf("This is a palindrome");
  else
    printf("Not a palindome");
  return 0;
}
