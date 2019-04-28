#include <stdio.h>
#include <string.h>

int nCrypt(int x,int y);
int dCrypt(int x,int y);

int main(void)
{
    int a,b;   
    char d[150];
    int key = 2; //different key
   
     printf("Enter a letter to encrypt: ");
   
     scanf(" %[^\n]s", d); //[^\n] ignores the whitespace
    
    //Encryption process condition for lowercase letters turning into uppercase
    int counter = 0; 
    
    for(counter  = 0; counter<d[counter]; counter++) //for loop dependent on how many characters the user enters
    {
        if(d[counter]!=32) //condition for the ASCII code to ignore the space character
        d[counter] = ((d[counter]-65) + 19)%26 + 65; //equation in order to convert small characters to big characters. The number 19 is a value tested and worked for conversion
    } 
    
    printf("%s\n", d); 
   
   
   //a = nCrypt(int x,int y);
   
   // printf("%c %c",d[c],d[c+1]);
    return 0;
    
}

/*int nCrypt(int x, int y){
 //c = c - 65; //Converts ASCII letters to 0 for A, 1 for B ....
 
 nCrypt = (x + y)(%26);
 
 return nCrypt;
 }*/