#include <stdio.h>
#include <strings.h>
#include <stdlib.h>

//TODO: make .x files for rpc gen stuff

void getChat(){
  
}

int main(int argc, char *argv[]) {

  if(argc < 3){

    printf("Error in command line arguments\n");
    printf("Sample usage as follows: ./client <ServerIP> <your nickname>\n");

  }
  else{

    printf("IP: %s\n", argv[1]);

    char * username = NULL;
    //a malloc isn't needed here because we're passing by reference anyway
    username = argv[2];
    int ip; //we'll fix this up a bit later cuz for now i'm just laying down the foundation

    printf("Hello, %s! you are the client :D \n", username);
    //free(username);
  }

   return 0;
}
// sample cmd execution: ./xatClient <ipXatServer> <nickname>
