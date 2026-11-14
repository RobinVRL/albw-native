/* Minimal check macros for native/core tests (+ low-memory allocation for game objects). */
#ifndef ALBW_CORE_TEST_H
#define ALBW_CORE_TEST_H
#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include "lowmem.h"   /* native/gameplay/test: lowalloc() below 4 GiB on -m64 */

static int core_fails, core_checks;
#define CHECK(cond) do { core_checks++; if (!(cond)) { core_fails++; \
    printf("FAIL %s:%d: %s\n", __FILE__, __LINE__, #cond); } } while (0)
#define CHECK_EQ(a, b) do { unsigned long long _a = (unsigned long long)(a), _b = (unsigned long long)(b); \
    core_checks++; if (_a != _b) { core_fails++; \
    printf("FAIL %s:%d: %s == 0x%llX, expected 0x%llX\n", __FILE__, __LINE__, #a, _a, _b); } } while (0)
#define CORE_DONE() (printf("%d/%d checks passed\n", core_checks - core_fails, core_checks), core_fails != 0)
#endif
