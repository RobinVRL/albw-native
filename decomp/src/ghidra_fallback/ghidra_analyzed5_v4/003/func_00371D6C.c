#include "ghidra_types.h"

extern int func_00255B48(int param_1,int param_2,int param_3);
extern int func_004ECDE8(undefined4 *param_1,int param_2,uint param_3);
extern int func_005568D4(int param_1);
extern int *DAT_00371db8;
extern int *DAT_00371dbc;

// USA 00371D6C <- EU 00371D48 (Ghidra, non-matching)
// GLOBAL DAT_00371db8 int *
// GLOBAL DAT_00371dbc int *

void func_00371D6C(undefined4 *param_1,int param_2,uint param_3)

{
  int *piVar1;
  ushort uVar2;
  
  func_004ECDE8(param_1,param_2,param_3);
  piVar1 = DAT_00371db8;
  if ((param_2 == 0) && (*(char *)((int)param_1 + 0x9d2) != '\0')) {
    uVar2 = func_005568D4(*DAT_00371db8);
    if (0 < (int)((uint)uVar2 - param_1[0x264])) {
      func_00255B48(*piVar1,-((uint)uVar2 - param_1[0x264]),param_3);
    }
    *(byte *)(*(int *)(*DAT_00371dbc + 0x130) + 0x74) =
         *(byte *)(*(int *)(*DAT_00371dbc + 0x130) + 0x74) & 0xfe;
    *(undefined1 *)((int)param_1 + 0x9d2) = 0;
  }
  return;
}

