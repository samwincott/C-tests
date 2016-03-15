clean	:
	find /users/sam/documents/code/c . -perm +111 -type f -delete

SRCS	=	$(wildcard	*.c)

PROGS	=	$(patsubst	%.c,%,$(SRCS))

all:	$(PROGS)

%:	%.c

	$(CC)	$(CFLAGS)	-o	$@	$<

