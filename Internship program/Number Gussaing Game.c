
#include<stdio.h>
main() {
   int i,num=45,flag=1,guess,count=0;
   printf("guess the number randomly here are some clues later");
   scanf("%d \n",&guess);
   do {
      if(num==guess) {
         flag=0;
      } else if(guess<num) {
         flag=1;
         printf("Your guess is lower than the number");
         count++;
      } else {
         flag=1;
         printf("Your guess is greater than the number");
         count++;
      }
      if(flag==1) {
         printf("sorry wrong enter! once again try it");
         scanf("%d",&guess);
      }
   } while(flag);
   printf("Congratulations! You guessed the correct number %d \n",num);
   printf("Total number of trails you attempted for guessing is: %d \n",count);
}
