#include <stdio.h>
#include <string.h>


int nCrypt(int x,int y);
int dCrypt(int x,int y);
void upperCase(char []);

int main(void)
{
    int a,b;   
    char d[150];
    int key = 2; //different key
    int i=0;
  
     printf("Enter a letter to encrypt: ");
     
     
     scanf(" %[^\n]s", d); //[^\n] ignores the whitespace
     
     //for loop that converts lowercase letters into uppercase
        for (i = 0; d[i]!='\0'; i++) {
      if(d[i] >= 'a' && d[i] <= 'z') {
         d[i] = d[i] - 32;
      }
   }    
   
    //Encryption process
    int counter =0;
    for(counter  = 0; counter<d[counter]; counter++) //for loop dependent on how many characters the user enters
    {
        if(d[counter]!=32) //condition for the ASCII code to ignore the space character
        d[counter] = ((d[counter]-65) + 19)%26 + 65; //
    } 
    
    printf("%s\n", d);
   
   //a = nCrypt(int x,int y);
   
   // printf("%c %c",d[c],d[c+1]);
   
    return 0;
    
}
void upperCase(char s[]) {
   int c = 0;
   
   while (s[c] != '\0') {
      if (s[c] >= 'a' && s[c] <= 'z') {
         s[c] = s[c] - 32;
      }
      c++;
   }
}

/*int nCrypt(int x, int y){
 //c = c - 65; //Converts ASCII letters to 0 for A, 1 for B ....
 
 nCrypt = (x + y)(%26);
 
 return nCrypt;
 }*/