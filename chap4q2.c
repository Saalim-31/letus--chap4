#include<stdio.h>
int main()
{
    char chr;
    printf("Enter the charachter");
    scanf("%c",&chr);
    if (chr>=65&&chr<=90)
    printf("Character is a upper case");
    if(chr>=97&&chr<=122)
    printf("Character is a lower case");
    if(chr>=0&&chr<=47 ||chr>=58&&chr<=64 ||chr>=91&&chr<=96 ||chr>=123&&chr<=127)
    return 0;
}
