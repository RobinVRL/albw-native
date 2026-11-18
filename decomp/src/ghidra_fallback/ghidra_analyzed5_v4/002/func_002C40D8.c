#include "ghidra_types.h"

extern int func_0019B504(uint param_1);
extern int func_003525AC(int param_1,undefined4 *param_2,int param_3);
extern int func_003529A0(undefined4 *param_1,undefined4 param_2,undefined4 param_3);
extern int func_00588BE4(int param_1);

// USA 002C40D8 <- EU 002C40B4 (Ghidra, non-matching)

void func_002C40D8(int param_1)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  undefined4 *puVar4;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define auStack_38 ((undefined4 *)(albw_frame + 0x8))
  #define iStack_30 (*(int *)(albw_frame + 0x10))
  #define iStack_2c (*(int *)(albw_frame + 0x14))
  #define iStack_28 (*(int *)(albw_frame + 0x18))
  piVar1 = (int *)(param_1 + 800);
  if ((*(int *)(param_1 + 0x344) == 0) &&
     (piVar2 = (int *)(**(code **)(*piVar1 + 0x24))(piVar1), *(char *)piVar2[1] != '\0')) {
    (**(code **)(*piVar2 + 8))(piVar2);
    func_003529A0(auStack_38,piVar2[1],piVar1);
    iStack_30 = (**(code **)(*piVar1 + 0x28))(piVar1);
    iStack_28 = (**(code **)(*piVar1 + 0x2c))(piVar1);
    if (iStack_30 == 0) {
      iStack_2c = param_1 + 0x3d0;
    }
    if (iStack_28 == 0) {
      iStack_28 = param_1 + 0x14;
    }
    uVar3 = func_00588BE4(param_1);
    puVar4 = (undefined4 *)func_0019B504(uVar3);
    if (puVar4 != (undefined4 *)0x0) {
      *(short *)(param_1 + 0x35c) = (short)*puVar4;
    }
    func_003525AC(param_1 + 0x324,auStack_38,*(int *)(param_1 + 0x408));
  }
  return;
}

