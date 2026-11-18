#include "ghidra_types.h"

extern int func_0010B380(undefined4 *param_1,int param_2,int *param_3,undefined4 param_4);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_0034C200(int param_1,int *param_2,undefined4 param_3,undefined4 param_4);
extern undefined4 DAT_0034ba10;
extern int DAT_0034ba14;

// USA 0034B980 <- EU 0034B95C (Ghidra, non-matching)
// GLOBAL DAT_0034ba10 undefined4
// GLOBAL DAT_0034ba14 int

undefined4 func_0034B980(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define local_14 (*(undefined4 *)(albw_frame + 0xc))
  uVar2 = 4;
  func_0010B380((undefined4 *)(param_1 + 0x20),*(int *)(param_1 + 0x2c),(int *)0x0,4);
  iVar3 = *(int *)(param_1 + 0x2c);
  if ((0 < iVar3) && (iVar1 = func_0010CEE0(iVar3 << 2,(int *)0x0,4), iVar1 != 0)) {
    *(int *)(param_1 + 0x38) = iVar1;
    *(int *)(param_1 + 0x34) = iVar3;
  }
  iVar3 = *(int *)(param_1 + 0x2c);
  if ((0 < iVar3) && (iVar1 = func_0010CEE0(iVar3,(int *)0x0,4), iVar1 != 0)) {
    *(int *)(param_1 + 0x40) = iVar1;
    *(int *)(param_1 + 0x3c) = iVar3;
  }
  iVar3 = func_0010CEE0(0x18,(int *)0x0,4);
  local_14 = DAT_0034ba10;
  local_18 = DAT_0034ba14;
  if (iVar3 != 0) {
    *(int *)(param_1 + 0x54) = iVar3;
    local_18 = DAT_0034ba14;
    local_14 = DAT_0034ba10;
    *(undefined4 *)(param_1 + 0x50) = 6;
  }
  return func_0034C200(param_1,&local_18,local_18,uVar2);
}

