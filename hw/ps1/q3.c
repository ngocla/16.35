#include <stdio.h>
#include <string.h>

int main()
{
  char a[100], rev_a[100];

  printf("Enter a string:\n");
  gets(a);//storing input as string a
  int length = strlen(a);
  //strcpy(b, a);  // Copying input string
  //strrev(b);  // Reversing the string
  for(int i=0; i<length; ++i)
	{
  	rev_a[length-i-1] = a[i];
	}

  if (strcmp(a, rev_a) == 0)  // Comparing input string with the reverse string
    printf("\"%s\" is a palindrome!\n",a);
  else
    printf("\"%s\" is not a palindrome!\n",a);

  return 0;
}
