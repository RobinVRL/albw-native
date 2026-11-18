#include "ghidra_types.h"

extern int func_0019B504(uint param_1);
extern int func_003525AC(int param_1,undefined4 *param_2,int param_3);
extern int func_003529A0(undefined4 *param_1,undefined4 param_2,undefined4 param_3);
extern int func_00588BE4(int param_1);

// USA 002C40E4 <- EU 002C40C0 (Ghidra, non-matching)

void func_002C40E4(int *param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  undefined4 *puVar3;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define auStack_38 ((undefined4 *)(albw_frame + 0x8))
  #define local_30 (*(int *)(albw_frame + 0x10))
  #define local_2c (*(int *)(albw_frame + 0x14))
  #define local_28 (*(int *)(albw_frame + 0x18))
  if ((param_1[9] == 0) &&
     (piVar1 = (int *)(**(code **)(*param_1 + 0x24))(param_1), *(char *)piVar1[1] != '\0')) {
    (**(code **)(*piVar1 + 8))(piVar1);
    func_003529A0(auStack_38,piVar1[1],param_1);
    local_30 = (**(code **)(*param_1 + 0x28))(param_1);
    local_28 = (**(code **)(*param_1 + 0x2c))(param_1);
    if (local_30 == 0) {
      local_2c = param_2 + 0x3d0;
    }
    if (local_28 == 0) {
      local_28 = param_2 + 0x14;
    }
    uVar2 = func_00588BE4(param_2);
    puVar3 = (undefined4 *)func_0019B504(uVar2);
    if (puVar3 != (undefined4 *)0x0) {
      *(short *)(param_1 + 0xf) = (short)*puVar3;
    }
    func_003525AC((int)(param_1 + 1),auStack_38,*(int *)(param_2 + 0x408));
  }
  return;
}

