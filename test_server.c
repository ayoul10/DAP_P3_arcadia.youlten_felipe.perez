/*
 * This is sample code generated by rpcgen.
 * These are only templates and you can use them
 * as a guideline for developing your own functions.
 */

#include "test.h"
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 

#define HEIGHT_WIN_CHAT 30
#define FILENAME "log.txt" //3 extra chars for \0, > and space

void *
mywrite_1_svc(message *argp, struct svc_req *rqstp)
{
	static char * result;

	write(STDOUT_FILENO, argp->contents, strlen(argp->contents));
	write(STDOUT_FILENO, "\n", 1);

	// Open the file and write the message sent

	FILE * file = fopen(FILENAME, "a");

	    for (int i = 0; argp->contents[i] != '\0'; i++) {
            /* write to file using fputc() function */
            fputc(argp->contents[i], file);
        }
		fputc('\n', file);
	fclose(file);

	return (void *) &result;
}

message *
getchar_1_svc(void *argp, struct svc_req *rqstp)
{
	static message result;

	result.contents = "aaaaaaaaaa";

	// Open the file and read the chat log

	// If the file is longer than the rows on the screen, 
	// only get last n rows and send those back

	// The client will print everything the server sends back 

	return &result;
}
