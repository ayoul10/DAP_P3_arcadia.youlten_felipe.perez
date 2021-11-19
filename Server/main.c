#include <stdio.h>
#include <string.h>
#include <strings.h>
#include <stdlib.h>
//#include "main.h"

//maybe we should make the file pointer a global variable or something?

//This method inserts a new line to the local log file of the server.
void myWrite(char *string){

}
//This method returns all the lines from the local log file of the server.
char* getChat(){

}

//Create log file to write information to
/*FILE * */ void createFile(){
   FILE *fptr;
   fptr = fopen("../Server/logs.txt","w");
   if(fptr == NULL)
   {
      printf("Error!");
      exit(1);
   }else{
      fprintf(fptr,"Server Log File: \n");
      fclose(fptr);
   }
   //return fptr;

}



int main() {
   // printf() displays the string inside quotation
   /*fptr = */ createFile();
   printf("Hello, World! I am the server :D \n");

   return 0;
}
