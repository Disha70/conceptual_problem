#include<stdio.h>
int main()
{
    char ch;//the getc() and putc() functions take only characters and display characters

    ch=getc(stdin);//take input from the user but only characters
    putc(ch,stdout);//dishplay the characters using putc() function
    
}