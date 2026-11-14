/* USA 003FF0D8 (EU 003FF0D8): nw::lyt::ArcResourceAccessor::GetResource(type, name, &size):
 * builds "<type>/<name>" (root dir ".") or "<root>/<type>/<name>" (root at this+0x3C), the
 * type being the big-endian four-character code ('timg', 'blyt', ...), looks it up in the
 * archive (003FDB08 -> entry index, ~0 = none) and returns the data (003FD944), *size = length.
 * Native fix of the generated Ghidra text: the variadic arguments of the snprintf helper
 * 003E6AA8 are stored at the ARM caller's sp; Ghidra showed them as locals local_130.. and
 * dropped them from the call. They are passed explicitly here. Confidence: high. */
#include "ghidra_types.h"

extern int func_003E6AA8(char *buf, uint size, int max_len, const char *fmt, ...);
extern int func_003FD944(int param_1, uint param_2, uint *param_3);
extern uint func_003FDB08(int param_1, uint *param_2);
extern const char *DAT_003ff184;   /* "%s/%s/%s" */
extern const char *DAT_003ff188;   /* "%s/%s" */

int func_003FF0D8(int param_1, undefined4 param_2, char *param_3, undefined4 *param_4)
{
    char path[0x100];
    char type[5];
    uint out[2];
    int iVar3;
    uint uVar2;

    type[0] = (char)((uint)param_2 >> 0x18);
    type[1] = (char)((uint)param_2 >> 0x10);
    type[2] = (char)((uint)param_2 >> 8);
    type[3] = (char)param_2;
    type[4] = 0;
    const char *root = (const char *)(param_1 + 0x3c);
    if (root[0] == '.' && root[1] == '\0')
        func_003E6AA8(path, 0x100, 0xff, DAT_003ff188, type, param_3);
    else
        func_003E6AA8(path, 0x100, 0xff, DAT_003ff184, root, type, param_3);
    uVar2 = func_003FDB08(param_1 + 4, (uint *)path);
    if (uVar2 == 0xffffffff) {
        iVar3 = 0;
    } else {
        out[0] = 0;
        out[1] = 0;
        iVar3 = func_003FD944(param_1 + 4, uVar2, out);
        if (param_4 != (undefined4 *)0x0)
            *param_4 = out[1];
    }
    return iVar3;
}
