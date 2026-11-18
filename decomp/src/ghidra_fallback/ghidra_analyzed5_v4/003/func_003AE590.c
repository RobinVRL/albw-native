#include "ghidra_types.h"

extern int func_0019B04C(uint param_1);
extern int func_002C2C9C(undefined4 *param_1,undefined4 param_2);
extern int func_002C2D00(int *param_1);
extern int func_002D42E8(int param_1);
extern int func_00584C14(int param_1,int *param_2);
extern int *DAT_003ae5ec;
extern uint *DAT_003ae5f0;
extern undefined DAT_003ae5f4;
extern int DAT_003ae5fc;

// USA 003AE590 <- EU 003AE56C (Ghidra, non-matching)
// GLOBAL DAT_003ae5ec int *
// GLOBAL DAT_003ae5f0 uint *
// GLOBAL DAT_003ae5f4 undefined
// GLOBAL DAT_003ae5fc int

undefined4 func_003AE590(int param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define aiStack_58 ((int *)(albw_frame + 0x8))
  #define local_40 (*(uint *)(albw_frame + 0x20))
  #define local_3c (*(undefined1 *)(albw_frame + 0x24))
  #define local_18 (*(int *)(albw_frame + 0x48))
  #define local_14 (*(undefined * *)(albw_frame + 0x4c))
  iVar3 = *(int *)(*DAT_003ae5ec + 0x10);
  func_0019B04C(*DAT_003ae5f0);
  func_002C2C9C(aiStack_58,*(undefined4 *)(iVar3 + 0x50));
  local_3c = 1;
  local_40 = local_40 | 1;
  piVar1 = func_002C2D00(aiStack_58);
  local_18 = DAT_003ae5fc;
  *(int **)(param_1 + 4) = piVar1;
  local_14 = &DAT_003ae5f4;
  uVar2 = func_00584C14(*(int *)(param_1 + 4),&local_18);
  *(uint *)(param_1 + 0x1c) = uVar2;
  return func_002D42E8(param_1);
}

