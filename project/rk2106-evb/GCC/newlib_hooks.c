/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2018 Rockchip Electronic Co.,Ltd
 */

#if defined(__GNUC__)

#define _TIMER_H_

#include <stdio.h>
#include <sys/stat.h>
#include <errno.h>

/* Dynamic memory allocation related syscall. */
caddr_t _sbrk(int incr)
{
    extern char end __asm("end");
    extern char heap_limit __asm("__HeapLimit");
    static char *heap_end;
    char *prev_heap_end;

    if (heap_end == NULL)
        heap_end = &end;

    prev_heap_end = heap_end;

    if ((unsigned int)heap_end + incr > (unsigned int)(&heap_limit)) {
        errno = ENOMEM;
        return (caddr_t)-1;
    }

    heap_end = (char *)((unsigned int)heap_end + incr);
    return (caddr_t)prev_heap_end;
}

int _write(int fd, char *buf, int nbytes)
{
    /* TBD */

    return nbytes;
}

int _close(int fd)
{
    return -1;
}

int _fstat(int fd, struct stat *st)
{
    st->st_mode = S_IFCHR;
    return 0;
}

int _isatty(int fd)
{
    return 1;
}

off_t _lseek(int fd, off_t offset, int whence)
{
    return (off_t)0;
}

int _read(int fd, char *buf, int nbytes)
{
    return nbytes;
}
#endif
