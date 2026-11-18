#include "ghidra_types.h"

extern int func_0050419C(int param_1,uint param_2,int *param_3);
extern int *DAT_00558594;
extern int DAT_00558598;

// USA 00558530 <- EU 00558508 (Ghidra, non-matching)
// GLOBAL DAT_00558594 int *
// GLOBAL DAT_00558598 int

void func_00558530(int param_1)

{
  int *piVar1;
  int iVar2;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define local_14 (*(undefined4 *)(albw_frame + 0xc))
  piVar1 = DAT_00558594;
  if (**(char **)(param_1 + 0x10) == '\0') {
    if (*(int *)(*DAT_00558594 + 0x658) != 0) {
      *(undefined1 *)(*(int *)(*DAT_00558594 + 0x658) + 0x88) = 0;
    }
    return;
  }
  (**(code **)(*(int *)(param_1 + 0xc) + 8))((int *)(param_1 + 0xc));
  local_14 = *(undefined4 *)(param_1 + 0x10);
  local_18 = DAT_00558598;
  func_0050419C(*piVar1,0,&local_18);
  iVar2 = *(int *)(*piVar1 + 0x658);
  if (iVar2 != 0) {
    *(undefined1 *)(iVar2 + 0x88) = 1;
  }
  return;
}

