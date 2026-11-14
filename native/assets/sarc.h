/* SARC archives (contents of .szs after Yaz0, and the Lyt_*.arc layout archives).
 * The archive views the caller's buffer; nothing is copied. */
#pragma once
#include <stddef.h>
#include <stdint.h>

typedef struct {
    const char *name;        /* NUL-terminated name inside the SFNT block (may be NULL) */
    const uint8_t *data;
    size_t size;
    uint32_t hash;           /* SFAT name hash */
} SarcFile;

typedef struct {
    const uint8_t *buf;
    size_t size;
    int big_endian;
    uint32_t hash_key;
    size_t count;
    SarcFile *files;         /* malloc'd, sorted by hash as in the archive */
} Sarc;

int sarc_is(const uint8_t *buf, size_t n);
int sarc_open(Sarc *s, const uint8_t *buf, size_t n);   /* 0 = ok */
void sarc_close(Sarc *s);
const SarcFile *sarc_find(const Sarc *s, const char *name);
uint32_t sarc_hash(const char *name, uint32_t key);
