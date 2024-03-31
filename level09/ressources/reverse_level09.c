#include "string.h"
#include "stdio.h"
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

int main(int argc, char** argv) {
    char    buf[4242 + 1];

    if (argc != 2) {
        printf("Need a argument\n");
        return 1;
    }
    int     fd = open(argv[1], O_RDONLY);
    if (fd == 0xffffffff) {
        printf("unable to open\n");
        return 1;
    }
    int nbytes = read(fd, buf, 4242);
    if (nbytes == 0xffffffff) {
        printf("Unable to read fd\n");
        return 1;
    }
    char *s = strdup(buf);
    int i;
    for (i = 0; i < strlen(s); i++) {
        s[i] = s[i] - i;
    }
    printf("%s\n", s);
    free(s);
    return 0;
}