#include "ghidra_types.h"

extern int func_00584B94(int param_1,int param_2);
extern int *DAT_001940a8;
extern int DAT_001940ac;
extern float DAT_001940b0;

// USA 0019403C <- EU 0019403C (Ghidra, non-matching)
// GLOBAL DAT_001940a8 int *
// GLOBAL DAT_001940ac int
// GLOBAL DAT_001940b0 float

void func_0019403C(int param_1)

{
  bool bVar1;
  int iVar2;
  
  if (((*(char *)(param_1 + 0x444) == '\0') && (*DAT_001940a8 != 0)) &&
     (bVar1 = func_00584B94(*DAT_001940a8,DAT_001940ac), bVar1)) {
    *(undefined1 *)(param_1 + 0x444) = 1;
    if (*(int *)(param_1 + 0x438) != 0) {
      iVar2 = *(int *)(*(int *)(param_1 + 0x438) + 0x14);
      if (*(float *)(iVar2 + 8) != DAT_001940b0) {
        *(float *)(iVar2 + 8) = DAT_001940b0;
        *(undefined1 *)(iVar2 + 0x26) = 1;
      }
    }
  }
  return;
}

