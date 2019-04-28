#include <stdio.h>
#include <string.h>
#include <ctype.h>

/*int nCrypt(char d[],char y){
    for(int i=0; i <26; i++){
        if(d[i] == y){
            return i;
    }
}
*/
char sub[26] = {'Q','A','Z','X','S','W','E','D','C','V','F','R','T','G','B','N','H','Y','U','J','M','K','I','L','O','P'}; //pre-defined letters for substitution cipher

int main(void)
{
    int a;
    char d[150];
    int key = 25; 
    int i=0;
     
     
     printf("Please enter a number for the choices below:\n");
     printf(" Enter 1 for encryption with rotation cipher\n ");
     printf("Enter 2 for decryption with rotation cipher\n ");
     printf("Enter 3 for encryption using substitution cipher\n ");
     printf("Enter 4 for decryption using substitution cipher\n ");
     printf("Selection: ");
     
     scanf("%d",&a);//scans the user input to put into switch statements
    
     
     switch(a){
        case 1: //when the user enters a 1.
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
    
        case 2:
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
    
        case 3:
    //substitution cipher
    return 0;
    
}
}
