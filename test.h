/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _TEST_H_RPCGEN
#define _TEST_H_RPCGEN

#include <rpc/rpc.h>

//defines for 
#define WIDTH 68
#define HEIGHT_WIN_USR_TEXT 5
#define HEIGHT_WIN_CHAT 10		// constant needs to be the same in the server
#define USERNAME_MAX_LENGTH 23	// 3 extra chars for \0, > and space
#define MESSAGE_MAX_LENGTH 269 	// Limiting user input to 269 per message (nice) twitter style
#define FILENAME "log.txt"		//3 extra chars for \0, > and space

#ifdef __cplusplus
extern "C" {
#endif


struct message {
	char *contents;
};
typedef struct message message;

#define PROGRAM_NAME 0x20000001
#define ALPHA 1

#if defined(__STDC__) || defined(__cplusplus)
#define myWrite 1
extern  void * mywrite_1(message *, CLIENT *);
extern  void * mywrite_1_svc(message *, struct svc_req *);
#define getChar 2
extern  message * getchar_1(void *, CLIENT *);
extern  message * getchar_1_svc(void *, struct svc_req *);
extern int program_name_1_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

#else /* K&R C */
#define myWrite 1
extern  void * mywrite_1();
extern  void * mywrite_1_svc();
#define getChar 2
extern  message * getchar_1();
extern  message * getchar_1_svc();
extern int program_name_1_freeresult ();
#endif /* K&R C */

/* the xdr functions */

#if defined(__STDC__) || defined(__cplusplus)
extern  bool_t xdr_message (XDR *, message*);

#else /* K&R C */
extern bool_t xdr_message ();

#endif /* K&R C */

#ifdef __cplusplus
}
#endif

#endif /* !_TEST_H_RPCGEN */
