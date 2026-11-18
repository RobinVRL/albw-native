#include "ghidra_types.h"

extern int func_00115074(float *param_1,float *param_2,float *param_3);
extern int func_003CBDDC(float fparam_0);
extern int func_003CC140(float fparam_0);

// USA 00567734 <- EU 0056770C (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 float *

void func_00567734(int param_1,int *param_2,uint param_3,int param_4,float *param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(float *)(albw_frame + 0x0))
  #define local_2c (*(float *)(albw_frame + 0x4))
  #define local_28 (*(float *)(albw_frame + 0x8))
  iVar5 = *param_2 + (param_3 & 0xffff) * 0x278 + 4;
  if (*(char *)(param_1 + 0x29) != '\0') {
    if (*(char *)(param_1 + 0x28) == '\v') {
      fVar6 = *(float *)(param_1 + 0x48);
      fVar7 = *(float *)(param_1 + 0x40);
      fVar8 = *(float *)(param_1 + 0x44);
      iVar1 = iVar5 + param_4 * 0x2c;
      fVar9 = param_5[4] * fVar7 + param_5[5] * fVar8 + param_5[6] * fVar6;
      fVar10 = param_5[8] * fVar7 + param_5[9] * fVar8 + param_5[10] * fVar6;
      uVar2 = func_003CC140(-(*param_5 * fVar7 + param_5[1] * fVar8) + -(param_5[2] * fVar6));
      iVar3 = func_003CC140(-fVar9);
      *(uint *)(iVar1 + 0x28) = uVar2 | iVar3 << 0x10;
      uVar4 = func_003CC140(-fVar10);
      *(undefined4 *)(iVar1 + 0x2c) = uVar4;
    }
    if (*(char *)(param_1 + 0x28) == '\t') {
      fVar7 = *(float *)(param_1 + 0x40);
      fVar10 = *(float *)(param_1 + 0x44);
      fVar9 = *(float *)(param_1 + 0x48);
      iVar5 = iVar5 + param_4 * 0x2c;
      fVar6 = -(param_5[4] * fVar7 + param_5[5] * fVar10) + -(param_5[6] * fVar9);
      fVar8 = -(param_5[8] * fVar7 + param_5[9] * fVar10) + -(param_5[10] * fVar9);
      uVar2 = func_003CBDDC(-(*param_5 * fVar7 + param_5[1] * fVar10) + -(param_5[2] * fVar9));
      iVar1 = func_003CBDDC(fVar6);
      *(uint *)(iVar5 + 0x14) = uVar2 | iVar1 << 0x10;
      uVar4 = func_003CBDDC(fVar8);
      *(undefined4 *)(iVar5 + 0x18) = uVar4;
      *(undefined1 *)(iVar5 + 0x1c) = 1;
      return;
    }
    func_00115074(&local_30,param_5,(float *)(param_1 + 0x1c));
    iVar5 = iVar5 + param_4 * 0x2c;
    uVar2 = func_003CBDDC(local_30);
    iVar1 = func_003CBDDC(local_2c);
    *(uint *)(iVar5 + 0x14) = uVar2 | iVar1 << 0x10;
    uVar4 = func_003CBDDC(local_28);
    *(undefined4 *)(iVar5 + 0x18) = uVar4;
    *(undefined1 *)(iVar5 + 0x1c) = 0;
  }
  return;
}

