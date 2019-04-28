#include <stdio.h>
#include <string.h>
#include <ctype.h>

int nCrypt(int x,int y);
int dCrypt(int x,int y);

int main(void)
{
    int a,b;   
    char d[150];
    int key = 25; 
    int i=0;
  
     printf("Enter a letter to encrypt: ");
     
     
     scanf(" %[^\n]s", d); //[^\n] ignores the whitespace
     
     //for loop that converts lowercase letters into uppercase
   for (i = 0; d[i]!='\0'; i++)
   {
          if(d[i] >= 'a' && d[i] <= 'z') 
          d[i] = d[i] - 32;
   }    
   
    //Encryption process
    int counter =0;
    for(counter  = 0; counter < d[counter]; counter++) //for loop dependent on how many characters the user enters
    {
        if(d[counter]!=32) //condition for the ASCII code to ignore the space character
        d[counter] = ((d[counter]-65) + key)%26 + 65; //calculation to provide encoded letters shifted by 1 to the right
        
    } 
    
    printf("%s\n", d);
   
    return 0;
    
}
