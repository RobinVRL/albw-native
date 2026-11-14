/* Read-only access to the game's RomFS straight from the user's decrypted ROM (.3ds / .cxi).
 * Asset-side tool code: the directory tree is parsed once into a flat, sorted path table.
 * The parsing logic mirrors native/sdk/fs.c (NCSD -> NCCH -> IVFC -> level 3). */
#pragma once
#include <stddef.h>
#include <stdint.h>

typedef struct {
    const char *path;   /* "Archive/ActorProfile.szs" (UTF-8, no leading '/') */
    uint64_t offset;    /* absolute offset of the data in the ROM file */
    uint64_t size;
} RomfsFile;

/* rom_path NULL = env ALBW_ROM, else the default EU ROM path.  0 = ok. */
int romfs_open(const char *rom_path);
void romfs_close(void);
size_t romfs_count(void);
const RomfsFile *romfs_file(size_t index);          /* sorted by path */
const RomfsFile *romfs_find(const char *path);       /* exact path, leading '/' allowed */
/* Reads a whole file into a malloc'd buffer (+1 NUL byte, not counted).  NULL on failure. */
uint8_t *romfs_read(const char *path, size_t *size_out);
int romfs_read_at(const RomfsFile *f, uint64_t off, void *dst, size_t n);
