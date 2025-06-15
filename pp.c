#include<stdio.h>
#include<conio.h>
void main()
{
 char msg[100];
 int i=0;
 FILE*fp;
 clrscr();
 printf("Enter the message:");
 scanf("%[^\n]",msg);
 fp=fopen("c:\\msg.txt","w");
 while(msg[i]!='\0')
{
 fputc(msg[i],fp);
 i++;
}
getch();

}
