#include <stdio.h>
int main()
{
    int n1, n2, n3; 
    scanf("%d %d %d", &n1, &n2, &n3); /* where three number are read from the test cases and are stored in the variable n1, n2 and n3 */

/* Complete the program to get the desired output */
/* Only use the printf statement given below to exactly match your output 
with the output cases. Change the variable n1 as required.

printf("%d is the smallest number.", n1);    //Copy and paste this printf statement wherever required. 

*/
int small = n1;
if(small>n2){
 	 small=n2;
}
if(small>n3){
  small=n3;
}
printf("%d is the smallest number.", small);
}