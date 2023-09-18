#include<stdio.h>
#include<string.h>
int main()
{
    char str[100]={0},substr[100][100]={0}; 
//str[100] is for storing the sentence and substr[50][50] is for storing each word.
    
scanf("%[^\n]s", str); //Accepts the sentence from the test case data.

/* Complete the program to get the desired output.
The print statement should be as below
 
printf("Largest Word is: %s\nSmallest word is: %s\n", -------,--------);

*/
int j=0;

for(int i=0, k=0; str[i]!='.'; i++){
  if(str[i]!=' '){
    substr[j][k] = str[i];
    k++;
  }
  else{
    j++;
    k=0;
  }
}
int small=0;
for(int i=1; i<=j; i++){
  if(strlen(substr[small])>strlen(substr[i])){
    small=i;
  }
}

int large=0;
for(int i=1; i<j; i++){
  if(strlen(substr[large])<strlen(substr[i])){
    large=i;
  }
}
printf("Largest Word is: %s\nSmallest word is: %s\n", substr[large], substr[small]);
     }
     
