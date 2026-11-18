#include "ghidra_types.h"

extern int func_001788DC(int param_1,undefined4 *param_2);
extern int func_005826A4(int param_1,int *param_2,int *param_3,int *param_4);
extern int DAT_00368048;
extern int *DAT_0036804c;

// USA 00367FB4 <- EU 00367F90 (Ghidra, non-matching)
// GLOBAL DAT_00368048 int
// GLOBAL DAT_0036804c int *

void func_00367FB4(int param_1,undefined2 param_2)

{
  int *piVar1;
  int iVar2;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(int *)(albw_frame + 0x0))
  #define local_2c (*(undefined4 *)(albw_frame + 0x4))
  #define local_20 ((int *)(albw_frame + 0x10))
  if (*(int *)(param_1 + 0x30) != 0) {
    local_20[0] = 0;
    local_20[1] = 0;
    local_20[3] = 0xffffffff;
    local_20[2] = 0;
    local_2c = *(undefined4 *)(*(int *)(param_1 + 0x30) + 0xa8);
    local_30 = DAT_00368048;
    func_005826A4(*DAT_0036804c,local_20,(int *)(param_1 + 4),&local_30);
    if (local_20[0] != 0) {
      *(undefined2 *)(*(int *)(param_1 + 0x28) + 0x60) = param_2;
      func_001788DC(*(int *)(param_1 + 0x28),local_20);
      iVar2 = *(int *)(param_1 + 0x28);
      piVar1 = *(int **)(param_1 + 0x30);
      *(undefined2 *)(iVar2 + 0x32) = 0;
      *(undefined1 *)(iVar2 + 0x3d) = 0;
      (**(code **)(*piVar1 + 0x60))
                (piVar1,*(undefined4 *)(*(int *)(param_1 + 0x28) + 8),0,
                 *(ushort *)(*(int *)(param_1 + 0x28) + 0x20) >> 1);
    }
  }
  return;
}

