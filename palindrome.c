#include<stdio.h>
#include<string.h>

int isPalindrome(char str[]);


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

int isPalindrome(char str[])
{
  int len = strlen(str);
  int i,j;
  for(i=0,j=len-1;i<=len/2;i++,--j)
  {
    if(str[i]!=str[j])
      return 0;
  }
  return 1;
}
