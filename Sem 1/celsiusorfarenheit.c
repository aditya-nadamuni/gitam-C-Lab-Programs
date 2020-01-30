#include<stdio.h>
main()
{
  char d;
  int c,f;
  printf("enter d");
  scanf("%c%d%d",&d,&c,&f);
  switch(d)
  {
   case'x':c=(5/9)*(f-32);
   printf("celsius=%d ",c,f);break;
   case'y':f=(9/5)*c+32;
   printf("farenheit=%d",c,f);break;
   
  }
}
