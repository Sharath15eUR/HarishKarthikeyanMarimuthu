#include<stdio.h>
 
int main() {
   int arr[20], i, n;
 
   scanf("%d", &n); /* Accepts the number of elements in the array */

  for (i = 0; i < n; i++) 
     scanf("%d", &arr[i]); /*Accepts the elements of the array */
int a, b;
for(int i=0; i<n/2; i++){
  a = arr[n-1-i];
  b = arr[i];
  arr[i] = a;
  arr[n-1-i] = b;
}

for (i = 0; i < n; i++) {
      printf("%d\n", arr[i]); // For printing the array elements 
   }
 
   return (0);
}
