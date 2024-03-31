#include <netinet/in.h>
#include <stddef.h>
#include <errno.h>
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int	main(int argc, const char **argv)
{
	int					sfd; // [esp+30h] [ebp-1020h]
	int					fd; // [esp+34h] [ebp-101Ch]
	size_t				ret; // [esp+38h] [ebp-1018h]
	char				buf[4096]; // [esp+3Ch] [ebp-1014h] BYREF
	struct sockaddr_in	addr; // [esp+103Ch] [ebp-14h] BYREF

	if ( argc <= 2 )
	{
		printf("%s file host\n\tsends file to host if you have access to it\n", argv[0]);
		exit(1);
	}
	if ( access(argv[1], R_OK) )
		return printf("You don't have access to %s\n", argv[1]);
	printf("Connecting to %s:6969 .. ", argv[2]);
	fflush(stdout);
	sfd = socket(AF_INET, SOCK_STREAM, 0);
	addr.sin_family = AF_INET;
	addr.sin_port = htons(6969);
	addr.sin_addr.s_addr = inet_addr(argv[2]); // IPv4 numbers-and-dots notation
	*(u_int64_t *)&addr.sin_zero = 0; // 0 padding
	if (connect(sfd, &addr, 16) == -1)
	{
		printf("Unable to connect to host %s\n", argv[2]);
		exit(1);
	}
	if (write(sfd, ".*( )*.\n", 8) == -1)
	{
		printf("Unable to write banner to host %s\n", argv[2]);
		exit(1);
	}/
	printf("Connected!\nSending file .. ");
	fflush(stdout);
	fd = open(argv[1], O_RDONLY);
	if ( fd == -1 )
	{
		puts("Damn. Unable to open file");
		exit(1);
	}
	ret = read(fd, buf, 4096);
	if ( ret == -1 )
	{
		printf("Unable to read from file: %s\n", strerror(errno));
		exit(1);
	}
	write(sfd, buf, ret);
	return puts("wrote file!");
}