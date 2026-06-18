//
// Created by Jumbo on 17/6/2026.
//
#include "rtklib.h"
// #include "src/rinex.c"

int showmsg(const char *format, ...)
{
    va_list arg;
    va_start(arg,format); vfprintf(stderr,format,arg); va_end(arg);
    fprintf(stderr,*format?"\r":"\n");
    return 0;
}

int main() {

    return 0;
}