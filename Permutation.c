#include <stdio.h>
void swap(char array[],int src,int dst)
{
  char temp = array[src];
  array[src] = array[dst];
  array[dst] = temp;
}

void Permutation(char array[],int from , int to )
{
  printf("start..from = %d,to = %d \n",from,to);
  int i=0;
  if(from == to)
  {
    for(i=0;i<=to;i++)
    {
      printf("%c",array[i]);
    }
    printf("\n");
  }

  for(i=from;i<=to;i++)
  {
    swap(array,i,from);
    Permutation(array,from+1,to);
    swap(array,i,from);
  }
}

int main()
{
  char str[] = "1234";
  int len = sizeof(str)/sizeof(char);
  Permutation(str,0,len-2);
}


