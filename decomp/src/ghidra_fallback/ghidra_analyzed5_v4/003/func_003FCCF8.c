#include "ghidra_types.h"

extern int func_003FC8DC(int param_1,int *param_2,undefined4 *param_3,int param_4,int param_5);
extern int func_003FCE5C(uint *param_1,undefined4 param_2,int param_3,uint param_4,int param_5,int param_6 ,uint *param_7);
extern int DAT_003fce38;

// USA 003FCCF8 <- EU 003FCCD8 (Ghidra, non-matching)
// GLOBAL DAT_003fce38 int

uint func_003FCCF8(undefined4 *param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 (*(uint *)(albw_frame + 0x8))
  #define local_34 (*(int *)(albw_frame + 0xc))
  #define local_30 (*(int *)(albw_frame + 0x10))
  #define local_2c (*(int *)(albw_frame + 0x14))
  #define local_20 (*(uint *)(albw_frame + 0x20))
  #define local_1c (*(uint *)(albw_frame + 0x24))
  uVar2 = 0;
  if (((((param_3[2] & 0xf) != 0) || ((param_3[3] & 0x7f) != 0)) || ((param_3[4] & 0x7f) != 0)) ||
     (((param_3[6] & 3) != 0 || ((param_3[7] & 0xf) != 0)))) {
    uVar2 = 0x80000020;
  }
  if (*param_2 != DAT_003fce38) {
    uVar2 = uVar2 | 0x80000040;
  }
  if (0x21 < *(byte *)(param_2 + 1)) {
    uVar2 = uVar2 | 0x80000002;
  }
  if (*(byte *)((int)param_2 + 5) < 0x21) {
    uVar2 = uVar2 | 0x80000004;
  }
  if ((*(byte *)(param_2 + 0x10) & 2) != 0) {
    uVar2 = uVar2 | 0x80000008;
  }
  if (-1 < (int)uVar2) {
    local_38 = param_3[6];
    local_34 = local_38 + param_2[0xe];
    local_30 = param_3[9];
    if (local_30 == 0) {
      local_30 = param_3[7];
    }
    local_2c = local_30 + param_2[0xf];
    func_003FCE5C(&local_20,param_1,param_3[5],(uint)param_2[0xd] >> 2,(int)param_3,(int)param_2,
                  &local_38);
    if ((int)local_1c < 0) {
      uVar2 = local_1c | uVar2;
    }
    else {
      uVar3 = *param_3;
      uVar4 = param_3[1];
      uVar5 = param_3[2];
      uVar6 = param_3[3];
      uVar7 = param_3[4];
      uVar8 = param_3[5];
      uVar9 = param_3[6];
      iVar10 = param_3[7];
      *param_1 = uVar3;
      param_1[1] = uVar4;
      param_1[2] = uVar5;
      param_1[3] = uVar6;
      param_1[4] = uVar7;
      param_1[5] = uVar8;
      param_1[6] = uVar9;
      param_1[7] = iVar10;
      iVar1 = param_3[9];
      param_1[8] = param_3[8];
      param_1[9] = iVar1;
      param_1[10] = local_20;
      param_1[0xb] = param_2;
      param_1[0xc] = uVar3;
      func_003FC8DC((int)param_1,(int *)&local_38,&local_30,iVar1,iVar10);
      *(byte *)(param_2 + 0x10) = *(byte *)(param_2 + 0x10) | 2;
    }
  }
  return uVar2;
}

