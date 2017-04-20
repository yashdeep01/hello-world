#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int isPalindrome(char *str);

int main()
{
  printf("Enter a string :\n");
  char *str;
  str = (char*)malloc(n*sizeof(char));
 
  if(str == NULL)
  {
    printf("Sorry, no memory available");
    return 1;
  }
  
  scanf("%s",str);
  
  if(isPalindrome(str))
    printf("This is a palindrome\n");
  else
    printf("Not a palindome\n");
  
  return 0;
}

int isPalindrome(char *str)
{
  int len = strlen(str);
  int i,j;
  for(i=0,j=len-1;i<=len/2;i++,--j)
    if(*(str+i)!=*(str+j))
      return 0;
  
  return 1;
}
