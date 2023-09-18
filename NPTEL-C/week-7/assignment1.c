#include<stdio.h>
int main() {
   int upper = 0, lower = 0;
   char ch[100];
   scanf(" %[^\n]s", ch);  /*A word or a sentence is accepted from test case data */

/* Complete the remaining part of the code to store number of uppercase letters
in the variable upper and lowercase letters in variable lower.
The print part of already written. You can declare any variable if necessary */
for(int i=0; ch[i]!='\0'; i++){
  if(97<=ch[i] && 122>=ch[i])
    lower++;
  else if(65<=ch[i] && 90>=ch[i])
    upper++;
}
printf("Uppercase Letters : %d\n", upper); /*prints number of uppercase letters */
   printf("Lowercase Letters : %d", lower); /*prints number of lowercase letters */
 
   return (0);
}
