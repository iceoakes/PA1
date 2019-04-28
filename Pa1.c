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
     
     printf("Please enter a number for the choices below:\n");
     printf(" Enter 0 for encryption with rotation cipher\n ");
     printf("Enter 1 for decryption with rotation cipher\n ");
     printf("Enter 2 to encrypt using substitution cipher\n ");
     printf("Enter 3 to decrypt using substitution cipher\n ");
     printf("Selection: ");
     
     scanf("%d",&a);
    
     
     switch(a){
        case 0:
         printf("Enter a phrase to encrypt:");
         scanf(" %[^\n]s", d);//[^\n] ignores the whitespace
         
     //for loop that converts lowercase letters into uppercase
    for (i = 0; d[i]!='\0'; i++)
   {
             if(d[i] >= 'a' && d[i] <= 'z') 
          d[i] = d[i] - 32;
   }    
   
          //Encryption process
    int counter =0; //counter initialised to zero in order to avoid errors
    for(counter  = 0; counter < d[counter]; counter++) //a "for loop" that is dependent on how many characters the user enters
    {
             if(d[counter]!=32) //condition for the ASCII code to ignore the space character
        d[counter] = ((d[counter]-65) + key)%26 + 65; //calculation to provide encoded letters shifted by 1 to the right
        
    } 
    
    printf("%s\n", d);
    break;
    
        case 1:
          printf("Enter a phrase to decrypt:");
          scanf(" %[^\n]s", d);//[^\n] ignores the whitespace
     //for loop that converts lowercase letters into uppercase
   for (i = 0; d[i]!='\0'; i++)
   {
          if(d[i] >= 'a' && d[i] <= 'z') 
          d[i] = d[i] - 32;
   }    
   
     //Decryption process
    for(counter  = 0; counter < d[counter]; counter++) //a "for loop" that is dependent on how many characters the user enters
    {
        if(d[counter]!=32) //condition for the ASCII code to ignore the space character
        d[counter] = ((d[counter]+65) - key)%26 +65;
    }
    printf("%s\n",d);
    break;

    return 0;
    
}
}
