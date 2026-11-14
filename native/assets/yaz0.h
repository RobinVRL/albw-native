/* Yaz0 decompression (.szs).  Header: "Yaz0", u32 BE decompressed size, 8 reserved bytes. */
#pragma once
#include <stddef.h>
#include <stdint.h>

int yaz0_is(const uint8_t *src, size_t n);
size_t yaz0_size(const uint8_t *src, size_t n);   /* decompressed size, 0 if not Yaz0 */
/* 0 = ok.  dst must hold yaz0_size() bytes. */
int yaz0_decompress(const uint8_t *src, size_t n, uint8_t *dst, size_t dst_size);
/* Convenience: if src is Yaz0, returns a malloc'd decompressed copy and its size; otherwise
 * NULL.  (Callers keep the original buffer when the data is not compressed.) */
uint8_t *yaz0_decompress_alloc(const uint8_t *src, size_t n, size_t *out_size);
