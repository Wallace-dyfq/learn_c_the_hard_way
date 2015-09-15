#include <stdio.h>

int main(int argc, char *argv[]) {
   int number[4] = {0};
   char name[4] ={'a'};

   printf("number: %d %d %d %d\n", number[0], number[1], number[2], number[3]);

   printf("name each: %c %c %c %c\n", name[0], name[1], name[2], name[3]);

   printf("name: %s\n", name);

   // set up the numbers
   number[0] = 1;
   number[1] = 2;
   number[2] = 3;
   number[3] = 4;
   // set up the name 
   name[0] = 'Z';
   name[1] = 'e';
   name[2] = 'd';
//   name[3] = '\0';

   printf("number: %d %d %d %d\n", number[0], number[1], number[2], number[3]);

   printf("name each: %c %c %c %c\n", name[0], name[1], name[2], name[3]);

   printf("name: %s\n", name);

   char *another = "Zed";
   printf("another: %s\n", another);

   printf("another each: %c %c %c %c \n", another[0], another[1], another[2], another[3]);

   return 0;

}


