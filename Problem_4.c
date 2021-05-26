//Your task here is to print half pyramid of stars.

#include<stdio.h>


int main()
{
  	int n;
    char c='*';
     printf("Enter number\n");
  	scanf("%d", &n);
    for(int i=0;i<n;i++)
    {
      for(int j=0;j<=i;j++)
      {
        printf("%c ",c);
      }
      printf("\n");
    }
    printf(" \n");
    for(int i=0;i<n;i++)
    {
      for(int k=n-1;k>i;k--)
      {
        printf(" ");
      }
      for(int j=0;j<=i;j++)
      {
        printf("%c ",c);
      }
      printf("\n");
    }




  	return 0;
}
