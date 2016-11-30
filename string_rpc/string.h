/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _STRING_H_RPCGEN
#define _STRING_H_RPCGEN

#include <rpc/rpc.h>


#ifdef __cplusplus
extern "C" {
#endif


struct message {
	char message[100];
	char author[100];
};
typedef struct message message;

#define MESSAGE 1
#define MESSAGE_1 1

#if defined(__STDC__) || defined(__cplusplus)
#define SEND 1
extern  message * send_1(message *, CLIENT *);
extern  message * send_1_svc(message *, struct svc_req *);
extern int message_1_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

#else /* K&R C */
#define SEND 1
extern  message * send_1();
extern  message * send_1_svc();
extern int message_1_freeresult ();
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

#endif /* !_STRING_H_RPCGEN */