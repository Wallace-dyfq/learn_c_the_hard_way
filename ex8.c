#include <stdio.h>

int main(int argc, char *argv[]) {
   int i = 0;
   if(argc == 1) {
	  printf("You have only one argument. \n");
   }
   else if (argc > 1 && argc < 4) {
	  printf("Here is your arguments:\n");
	  for (int i = 0; i < argc; ++i) {
		 printf("%s\n", argv[i]);
		 } 
	  }	
	  else
	  {
		 printf("You have too many arguments.\n");
	  }

	  return 0;
}



