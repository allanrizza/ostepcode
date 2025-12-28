//
// Created by Allan Rizza on 12/28/2025.
//

#include <stdio.h>
#include <assert.h>
#include <fcntl.h>
#include <sys/stat.h>

int main(int argc, char *argv[]) {
    int fd = open("C:/dev/test", O_WRONLY|O_CREAT|O_TRUNC, S_IRWXU);
    assert(fd > -1);
    int rc = write(fd, "hello world!\n", 14);
    assert(rc == 14);
    close(fd);
    return 0;
}