#include "ghidra_types.h"

extern int func_00110848(int param_1);
extern int func_002159EC(int param_1,undefined4 param_2,undefined4 param_3,uint param_4);
extern int func_004A1B9C(int *param_1,int param_2,uint *param_3);
extern int func_004A2F38(int param_1,undefined4 *param_2);
extern undefined DAT_00215b84;
extern undefined4 DAT_00215b8c;

// USA 00215AC8 <- EU 00215AC8 (Ghidra, non-matching)
// GLOBAL DAT_00215b84 undefined
// GLOBAL DAT_00215b8c undefined4

void func_00215AC8(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define uStack_14 (*(undefined4 *)(albw_frame + 0xc))
  *(uint *)(param_1 + 0x59c) = *(uint *)(param_1 + 0x59c) | 0x38c;
  func_002159EC(param_1,param_2,param_3,param_4);
  piVar3 = (int *)(param_1 + 0xa68);
  if (*(int *)(param_1 + 0x344) == 0) {
    *piVar3 = 0;
    *(undefined4 *)(param_1 + 0xa6c) = 0;
  }
  else {
    iVar2 = *piVar3;
    if ((iVar2 != 0) && (*(int *)(iVar2 + 0x1c) == *(int *)(param_1 + 0xa6c))) {
      func_00110848(iVar2);
    }
    func_004A1B9C(&local_18,*(int *)(param_1 + 0x344),(uint *)&DAT_00215b84);
    *piVar3 = local_18;
    *(undefined4 *)(param_1 + 0xa6c) = uStack_14;
  }
  iVar2 = *piVar3;
  if ((iVar2 != 0) && (*(int *)(iVar2 + 0x1c) == *(int *)(param_1 + 0xa6c))) {
    func_004A2F38(iVar2,(undefined4 *)(param_1 + 0x3d0));
  }
  uVar1 = DAT_00215b8c;
  *(undefined4 *)(param_1 + 0x3dc) = DAT_00215b8c;
  *(undefined4 *)(param_1 + 0x3e0) = uVar1;
  *(undefined4 *)(param_1 + 0x3e4) = uVar1;
  return;
}

