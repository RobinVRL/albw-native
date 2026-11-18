#include "ghidra_types.h"

extern int func_004A1B9C(int *param_1,int param_2,uint *param_3);
extern int func_0065E774(undefined4 *param_1,undefined1 param_2);
extern undefined DAT_00224174;
extern float DAT_0022417c;
extern float DAT_00224180;

// USA 00224068 <- EU 00224068 (Ghidra, non-matching)
// GLOBAL DAT_00224174 undefined
// GLOBAL DAT_0022417c float
// GLOBAL DAT_00224180 float

void func_00224068(int param_1)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined1 in_r12;
  float fVar5;
  float in_s2;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define aiStack_10 ((int *)(albw_frame + 0x0))
  if (*(int *)(param_1 + 0x468) == (uint)*(byte *)(param_1 + 0x73c) * 8 + 0x5f) {
    func_0065E774((undefined4 *)(param_1 + 0x468),5);
  }
  if ((*(int *)(param_1 + 0x468) == (uint)*(byte *)(param_1 + 0x73c) * 8 + 0x3c) &&
     (*(int *)(param_1 + 0x344) != 0)) {
    func_004A1B9C(aiStack_10,*(int *)(param_1 + 0x344),(uint *)&DAT_00224174);
  }
  fVar1 = DAT_0022417c;
  iVar2 = *(int *)(param_1 + 0x68c);
  uVar3 = 0;
  if (0 < *(int *)(iVar2 + 0xc)) {
    in_r12 = 1;
    in_s2 = DAT_00224180;
  }
  fVar5 = *(float *)(*(int *)(iVar2 + 0x14) + 0x14);
  if (0 < *(int *)(iVar2 + 0xc)) {
    do {
      iVar4 = *(int *)(iVar2 + 0x14);
      if (uVar3 < *(uint *)(iVar2 + 0xc)) {
        iVar4 = iVar4 + uVar3 * 0x28;
      }
      if ((in_s2 <= fVar1) || (fVar5 != in_s2)) {
        *(float *)(iVar4 + 0xc) = fVar5;
        *(float *)(iVar4 + 8) = fVar5;
      }
      else {
        *(float *)(iVar4 + 0xc) = *(float *)(iVar4 + 0x14);
        *(float *)(iVar4 + 8) = *(float *)(iVar4 + 0x14);
      }
      uVar3 = uVar3 + 1;
      *(float *)(iVar4 + 0x10) = fVar1;
      *(undefined4 *)(iVar4 + 0x18) = 0;
      *(undefined1 *)(iVar4 + 0x26) = in_r12;
      *(undefined1 *)(iVar4 + 0x25) = in_r12;
    } while ((int)uVar3 < *(int *)(iVar2 + 0xc));
  }
  return;
}

