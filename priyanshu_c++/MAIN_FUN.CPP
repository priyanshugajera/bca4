#include<iostream.h>//input-output strem
#include<conio.h>
int main(int argcount,char *argarray[])
{
   clrscr();
   int i;
   cout<<endl<<"Total Arguments="<<argcount;//argument count
   cout<<endl<<"Program Name is="<<argarray[0]; //argument vector
   cout<<endl<<"other Arguments are\n\n";
   for(i=1;i<argcount;i++)
   {
     cout<<endl<<argarray[i];//print argument list
   }
   cout<<endl<<"total argument="<<argcount; //print total argument
   getch();
   return 0;
}