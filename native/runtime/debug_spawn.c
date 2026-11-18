/* Debug: spawn any actor by its profile name next to Link (ALBW_ROUTE `spawn NAME [DX DZ]`), and
 * Link's real position for the route autopilot.
 *
 * Profiles: 0019B51C registers every actor profile at start-up into the table data_00727C28
 * (0x280 entries, read by 0019B04C(id)); profile +4 = create function, +0x10 = name (char *).
 * Spawning as the game's own helper 00512030 does (EU 00512008..005120B4): SpawnParam (0x2C4
 * bytes) reset by 002DFF7C; +0 profile, +4 position, +0x18 = 0, +0x44 = 0.0f (its "param_3 == 0"
 * case), +0x4C = parent actor handle (0 = none), +0x50 = (s16)-1, +0x2C0 |= 1; then
 * 004C4AF4(*data_00706E20 = actor manager, &param, 0) -> the actor (NULL on failure).
 * Link's position: 00520FC0 (EU 00520F98) = *(*data_0070FB60 + 0x1C), a Vec3 *. */
#include <stdint.h>
#include <stdio.h>
#include <string.h>

extern char data_0070FB60[], data_00706E20[];
int func_0019B04C(uint32_t id);
int func_002DFF7C(void *self);
int func_004C4AF4(int mgr, int *param, int flags);
void func_0019B064(int profile, int flag, uint32_t arg);
uint32_t func_002E01AC(uint32_t id);   /* number of resource slots of a profile id */
uint32_t func_002E0150(uint32_t id);   /* the profile's resource name list (ActorProfile data) */

const float *albw_debug_player_pos(void) {
    uint32_t root = *(uint32_t *)data_0070FB60;
    if (!root) return NULL;
    uint32_t p = *(uint32_t *)(uintptr_t)(root + 0x1C);
    return p ? (const float *)(uintptr_t)p : NULL;
}

int albw_debug_profile(const char *name) {
    for (uint32_t id = 0; id < 0x280; id++) {
        uint32_t prof = (uint32_t)func_0019B04C(id);
        if (!prof) continue;
        const char *n = (const char *)(uintptr_t)*(uint32_t *)(uintptr_t)(prof + 0x10);
        if (n && !strcmp(n, name)) return (int)id;
    }
    return -1;
}

void *albw_debug_spawn(const char *name, float dx, float dz) {
    const float *pp = albw_debug_player_pos();
    int id = albw_debug_profile(name);
    if (!pp || id < 0) {
        fprintf(stderr, "spawn: %s: %s\n", name, id < 0 ? "no such profile" : "no player");
        return NULL;
    }
    _Alignas(16) uint8_t sp[0x2D0];
    memset(sp, 0, sizeof sp);
    func_002DFF7C(sp);
    *(uint32_t *)(sp + 0) = (uint32_t)func_0019B04C((uint32_t)id);
    float pos[3] = { pp[0] + dx, pp[1], pp[2] + dz };
    memcpy(sp + 4, pos, 12);
    *(uint32_t *)(sp + 0x18) = 0;
    float zero = 0.0f;
    memcpy(sp + 0x44, &zero, 4);
    *(uint32_t *)(sp + 0x4C) = 0;
    *(int16_t *)(sp + 0x50) = -1;
    *(uint32_t *)(sp + 0x2C0) |= 1;
    int *a = (int *)(intptr_t)func_004C4AF4((int)*(uint32_t *)data_00706E20, (int *)sp, 0);
    fprintf(stderr, "spawn: %s (profile %d) at %.2f %.2f %.2f -> %p\n", name, id, pos[0], pos[1], pos[2], (void *)a);
    return a;
}

/* request the profile's resources (Actor/<res>.bch in the World archive, 0019B064) before the
 * create: 004C4AF4 requests them too but creates in the same call, and an actor whose model is not
 * loaded yet reads NULL in its constructor (EnemySoldierGreen in Lorule Castle: 00533304).
 * Returns the number of empty resource slots left (0 = all requested / present). */
int albw_debug_preload(const char *name) {
    int id = albw_debug_profile(name);
    if (id < 0) { fprintf(stderr, "spawn: %s: no such profile\n", name); return -1; }
    uint32_t prof = (uint32_t)func_0019B04C((uint32_t)id);
    uint32_t n = func_002E01AC(*(uint32_t *)(uintptr_t)(prof + 8)) & 0xFF, empty = 0;
    for (uint32_t i = 0; i < n; i++)
        if (*(uint32_t *)(uintptr_t)(prof + 0x1C8 + i * 4) == 0) empty++;
    uint32_t lst = func_002E0150(*(uint32_t *)(uintptr_t)(prof + 8));
    fprintf(stderr, "spawn: %s: name list %#x", name, lst);
    if (lst) for (uint32_t i = 0; i < n; i++) {
        uint32_t sp = *(uint32_t *)(uintptr_t)(lst + i * 8 + 4);
        fprintf(stderr, " '%s'", sp ? (const char *)(uintptr_t)sp : "(null)");
    }
    fprintf(stderr, "\n");
    if (empty) func_0019B064((int)prof, 0, 0);
    fprintf(stderr, "spawn: %s: %u resource slot(s), %u requested; slots now", name, n, empty);
    for (uint32_t i = 0; i < n; i++) fprintf(stderr, " %#x", *(uint32_t *)(uintptr_t)(prof + 0x1C8 + i * 4));
    fprintf(stderr, "\n");
    return (int)empty;
}

/* list every registered profile name (ALBW_PROFILES=1, printed once by the route) */
void albw_debug_list_profiles(void) {
    for (uint32_t id = 0; id < 0x280; id++) {
        uint32_t prof = (uint32_t)func_0019B04C(id);
        if (!prof) continue;
        const char *n = (const char *)(uintptr_t)*(uint32_t *)(uintptr_t)(prof + 0x10);
        if (!n) continue;
        fprintf(stderr, "profile %d %s", (int)id, n);
        uint32_t k = func_002E01AC(*(uint32_t *)(uintptr_t)(prof + 8)) & 0xFF;
        uint32_t lst = func_002E0150(*(uint32_t *)(uintptr_t)(prof + 8));
        if (lst) for (uint32_t i = 0; i < k; i++) {
            uint32_t sp = *(uint32_t *)(uintptr_t)(lst + i * 8 + 4);
            if (sp) fprintf(stderr, " res=%s", (const char *)(uintptr_t)sp);
        }
        fprintf(stderr, "\n");
    }
}
