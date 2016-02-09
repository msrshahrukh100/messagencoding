#include <stdio.h>
#include <string.h>

main()
{
      int a=65,i,j,k=0;
      char text[100],key[20],cipher[100];
      int values[26][26];
      //printf("%c",a);
      for (i=0;i<26;i++)
      {
          
          for(j=0;j<26;j++)
          {           
                values[i][j] = a;
                a++;
                if (a == 91)
                   a=65;         
          }
          a++;
      }
           
     printf("\nPlease enter the simple text in small letters: ");
     scanf("%s",text);
     printf("\nPlease enter the key in small letters: ");
     scanf("%s",key); 
     
     int l=strlen(text),m=strlen(key);
     
     for (i=m;i<l;i++)
     {
             key[i]=key[k++];
             if(k==(m))  
             k=0;                               
     }
     printf("\nThe value of cipher is : ");
     for(i=0;i<l;i++)
     {
                     printf("%c ",values[text[i]-'a'][key[i]-'a']);                
     }
     
     
     printf("\nPlease enter the key in small letters to decrypt : ");
     scanf("%s",key);
     
     printf("\nPlease enter the cipher in capital letters to decrypt : ");
     scanf("%s",cipher);  
     
     l=strlen(cipher);m=strlen(key);
     
     for (i=m;i<l;i++)
     {
             key[i]=key[k++];
             if(k==(m))  
             k=0;                               
     }
     printf("\nThe decrypted value is: ");
     for(i=0;i<l;i++)
     {
                     
                     for(j=0;j<26;j++)
                     if (values[j][key[i]-'a'] == cipher[i])
                     printf("%c", j+97);
     }
     
     getch();
}
 
