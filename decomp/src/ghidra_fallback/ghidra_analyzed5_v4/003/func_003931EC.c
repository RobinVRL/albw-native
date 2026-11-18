#include "ghidra_types.h"

extern int func_0010BEB4(int param_1,int *param_2);
extern int DAT_00393248;

// USA 003931EC <- EU 003931C8 (Ghidra, non-matching)
// GLOBAL DAT_00393248 int

void func_003931EC(undefined4 *param_1,uint param_2)

{
  undefined1 uVar1;
  int *piVar2;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define local_14 (*(int *)(albw_frame + 0xc))
  uVar1 = *(undefined1 *)(param_1 + 1);
  *(char *)(param_1 + 1) = (char)param_2;
  *param_1 = 0;
  *(undefined1 *)((int)param_1 + 5) = uVar1;
  if (param_1[4] != 0) {
    if (param_2 < (uint)param_1[2]) {
      piVar2 = (int *)(param_1[3] + param_2 * 0x24);
    }
    else {
      piVar2 = (int *)param_1[3];
    }
    (**(code **)(*piVar2 + 8))(piVar2);
    local_14 = piVar2[1];
    local_18 = DAT_00393248;
    func_0010BEB4(param_1[4],&local_18);
  }
  return;
}

