#ifndef __TTYREC_COMPRESS_H__
#define __TTYREC_COMPRESS_H__

#include <stdlib.h>
#include <stdio.h>

extern size_t (*fwrite_wrapper)(const void *ptr, size_t size, size_t nmemb, FILE *stream);
extern size_t (*fread_wrapper)(void *ptr, size_t size, size_t nmemb, FILE *stream);
extern int    (*fclose_wrapper)(FILE *fp);

typedef enum
{
    COMPRESS_NONE = 0,
    COMPRESS_ZSTD = 1,
} compress_mode_t;

int set_compress_mode(compress_mode_t cm);
void set_compress_level(long level);
long get_compress_level(void);

#endif
