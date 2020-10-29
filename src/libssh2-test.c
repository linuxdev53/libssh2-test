
#include <stdio.h>
#include <stdlib.h>
#include <libssh2.h>

int main()
{
    int rc;

    rc = libssh2_init(0);
    if (rc)
    {
        fprintf(stderr, "Failed to initialize libssh2 library, errcode: %d", rc);
        exit(1);
    }

    libssh2_exit();

    return 0;
}
