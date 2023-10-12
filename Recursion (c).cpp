//prashik maghade
//prn-22070123109
#include<stdio.h>
void reverse(char*str)
{

    if(*str)
    {
        reverse(str+1);
        printf("%c",*str);
    }
}
int main()
{
    char a[]="Prashik";
    reverse(a);
    return 0;
}
/*
OUTPUT:
kihsarP
*/
