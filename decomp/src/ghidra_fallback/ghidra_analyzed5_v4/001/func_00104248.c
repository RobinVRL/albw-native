#include "ghidra_types.h"

extern int func_00103C80(undefined4 *param_1,undefined4 param_2,undefined4 param_3);
extern int DAT_0010432c;
extern int DAT_00104330;
extern undefined4 DAT_00104334;

// GLOBAL DAT_0010432c int
// GLOBAL DAT_00104330 int
// GLOBAL DAT_00104334 undefined4
// PARAM param_5 Stack[0x0]:4 int
// PARAM param_6 Stack[0x4]:4 uint
// PARAM param_7 Stack[0x8]:4 undefined4
// PARAM param_8 Stack[0xc]:4 int
// USA 00104248 <- EU 00104248 (Ghidra, function missing from the decomp table)

int func_00104248(undefined4 *param_1,int *param_2,undefined4 param_3,undefined4 param_4,int param_5
                 ,uint param_6,undefined4 param_7,int param_8)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 ((undefined4 *)(albw_frame + 0x8))
  uVar3 = param_5 - *param_2 & 0xfffffff8;
  if (param_8 == 0) {
    param_5 = 0;
  }
  (*(code *)param_2[1])(param_4,uVar3);
  *(int *)(uVar3 - 0x18) = param_2[2];
  uVar1 = param_2[3];
  *(int *)(uVar3 - 8) = param_5;
  *(uint *)(uVar3 - 0xc) = uVar3;
  *(uint *)(uVar3 - 0x14) = uVar1;
  *(undefined4 *)(uVar3 - 0x10) = param_3;
  if (param_6 < 0x21) {
    uVar1 = param_6 + 0x20;
  }
  local_28[0] = 0;
  if (0x20 < param_6) {
    if (DAT_0010432c + param_6 < 0x28) {
      uVar1 = DAT_0010432c + param_6 + 0x18;
    }
    else {
      uVar1 = DAT_00104330 + param_6;
      if (0x40 < uVar1) {
        uVar1 = 0xffffffff;
      }
    }
  }
  iVar2 = func_00103C80(local_28,DAT_00104334,uVar1);
  if (-1 < iVar2) {
    *param_1 = local_28[0];
    *(undefined1 *)(param_1 + 1) = 0;
    iVar2 = 0;
    *(undefined1 *)((int)param_1 + 5) = 0;
  }
  return iVar2;
}

