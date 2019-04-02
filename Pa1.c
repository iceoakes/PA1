#include <stdio.h>
#include <string.h>



int main(void)
{
    int a,b;
    char d[]= "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char c;
    
    printf("Enter a letter or phrase (UPPERCASE only) to encrypt this: ");
    scanf("%c",&c);
    
    c = c - 65; //Converts ASCII starting from 0 to 25
    
    printf("%c %c",d[2]);
    return 0;
    
}

