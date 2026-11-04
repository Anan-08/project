#include<stdio.h>
int main()
{
char ch;
FILE*fp;
fp=fopen("data.txt","w");
fprintf(fp,"Welcome to C program");
fclose(fp);
fp=fopen("data.txt","r");
while((ch=fgetc(fp))!=EOF)
{
printf("%c",ch);
}
fclose(fp);
fp=fopen("data.txt","a");
fprintf(fp,"Thalapathy");
fclose(fp);
return 0;
}
