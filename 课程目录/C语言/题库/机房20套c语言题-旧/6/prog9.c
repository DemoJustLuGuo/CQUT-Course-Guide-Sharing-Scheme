#include <stdio.h>
#include <ctype.h>
#include <conio.h>
#include <stdlib.h>
int fun(char *s,int num)
{



}

main()
{
   char s[10];
   system("cls");
   printf("输入7个字符的字符串：");
   gets(s);
   fun(s,7);
   printf("\n%s",s);
   NONO();
}

NONO( )
{/* 请在此函数内打开文件，输入测试数据，调用 fun 函数，
    输出数据，关闭文件。 */
   char s[10];
   int j;
  FILE *rf, *wf ;
  rf = fopen("b15.in", "r") ;
  wf = fopen("a15.out", "w") ;
  for (j=0;j<4;j++)
 { fscanf(rf,"%s",s);
   fun(s,7);
   fprintf(wf,"%s\n",s);
 }
  fclose(rf) ;
  fclose(wf) ;
}
