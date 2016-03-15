clean	:
	find /users/sam/documents/c_code/ . -perm +111 -type f -delete

SRCS	=	$(wildcard	*.c)

PROGS	=	$(patsubst	%.c,%,$(SRCS))

all:	$(PROGS)

%:	%.c

	$(CC)	$(CFLAGS)	-o	$@	$<

