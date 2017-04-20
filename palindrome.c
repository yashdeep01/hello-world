#include<stdio.h>
#include<string.h>

int isPalindrome(char str[]);


int main()
{
  printf("Enter a string :\n");
  char str[255];
  scanf("%s",str);
  if(isPalindrome(str))
    printf("This is a palindrome\n");
  else
    printf("Not a palindome\n");
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
