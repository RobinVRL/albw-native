/* compilefix: USA 00691D68 (EU 00691D40), curve object evaluate(t) (method-table slot 0):
 *   p = {u32 ?, u32 data, u8 kind}: return data_00715240[kind](&kind, data, t)
 * The kinds' handlers are curve evaluators target(curve, data, float t) -> float (linear,
 * Hermite, ... sead-style). On ARM t arrives in s0 and passes through untouched to the handler,
 * whose s0 result comes back the same way. The matched C++ declared neither (t lost: garbage
 * position on the curve, result dropped). Callers read the result (00235ED4: the colour fade of a
 * burning bush, BOOT_LOG 160t). Confidence: high (4-instruction tail dispatch). */
#include <stdint.h>

typedef float (*CurveFn)(uint8_t *kind, uint32_t data, float t);
extern CurveFn data_00715240[];

float func_00691D68(uint8_t *p, float t) {
    uint8_t *kind = p + 8;
    return data_00715240[*kind](kind, *(uint32_t *)(p + 4), t);
}
