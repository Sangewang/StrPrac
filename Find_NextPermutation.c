#include <stdio.h>
void swap(char *a , char *b)
{
  char temp = *a;
  *a = *b;
  *b = temp;
}

void Reverse(char * a , char *b)
{
  while(a<b)
  {
    swap(a,b);
    a++;
    b--;
  }
}

void showstr(char a[],int len)
{
  printf("%s\n",a);
}
void FindNextPermutation(char a[],int len)
{
  if(NULL == a)
  {
    return;
  }
  char *pEnd = a + len;
  char *p , *q , *pFind;
  p = pEnd;
  while(p!=a)
  {
    q = p;
    --p;
    if(*p < *q)
    {
      pFind = pEnd;
      while(*pFind <= *p)
      {
        pFind--;
      }
      swap(pFind,p);
      Reverse(q,pEnd);
      showstr(a,len);
      return ;
    }
  }
  Reverse(p,pEnd);
  return;
}


int main()
{
  char str[] = "1234";
  char end[] = "4321";
  int  len   = sizeof(str) - 2;
  FindNextPermutation(str,len);  
  
  do
  {
    FindNextPermutation(str,len);  
  }while(0!=strcmp(str,end));

}
