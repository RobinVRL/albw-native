#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int func_001D6FD0(undefined4 *param_1,uint param_2,int param_3,int *param_4,int param_5);
extern int *DAT_002e0b14;
extern float DAT_002e0b18;
extern float DAT_002e0b1c;
extern int *DAT_002e0b20;
extern float DAT_002e0b24;
extern float DAT_002e0b28;

// USA 002E0994 <- EU 002E0970 (Ghidra, non-matching)
// GLOBAL DAT_002e0b14 int *
// GLOBAL DAT_002e0b18 float
// GLOBAL DAT_002e0b1c float
// GLOBAL DAT_002e0b20 int *
// GLOBAL DAT_002e0b24 float
// GLOBAL DAT_002e0b28 float

void func_002E0994(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  uint in_fpscr;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_3c (*(float *)(albw_frame + 0x4))
  #define local_38 (*(float *)(albw_frame + 0x8))
  #define local_34 (*(float *)(albw_frame + 0xc))
  #define local_30 (*(float *)(albw_frame + 0x10))
  #define local_2c (*(float *)(albw_frame + 0x14))
  #define local_28 (*(float *)(albw_frame + 0x18))
  fVar3 = *(float *)(param_1 + 0x3d0);
  fVar8 = *(float *)(param_1 + 0x3d8);
  iVar2 = *(int *)(param_1 + 0x430);
  if (iVar2 != 0) {
    fVar7 = *(float *)(iVar2 + 0x58) * DAT_002e0b18;
    fVar6 = *(float *)(iVar2 + 0x60) * DAT_002e0b18;
    uVar1 = **(int **)(*DAT_002e0b14 + 0x24) + 0x20000000U >> 0x1e;
    if (uVar1 == 0) {
      fVar10 = fVar8 - fVar6;
      fVar4 = fVar3 - fVar7;
      fVar5 = fVar3 + fVar7;
      fVar9 = fVar8 - (fVar6 + DAT_002e0b1c);
    }
    else if (uVar1 == 1) {
      fVar5 = fVar3 - fVar6;
      fVar9 = fVar8 - fVar6;
      fVar10 = fVar8 + fVar6;
      fVar4 = fVar3 - (fVar7 + DAT_002e0b1c);
    }
    else if (uVar1 == 2) {
      fVar9 = fVar8 + fVar6;
      fVar4 = fVar3 - fVar7;
      fVar5 = fVar3 + fVar7;
      fVar10 = fVar8 + fVar6 + DAT_002e0b1c;
    }
    else {
      fVar4 = fVar3;
      fVar5 = fVar3;
      fVar9 = fVar8;
      fVar10 = fVar8;
      if (uVar1 == 3) {
        fVar9 = fVar8 - fVar6;
        fVar10 = fVar8 + fVar6;
        fVar4 = fVar3 + fVar7;
        fVar5 = fVar3 + fVar7 + DAT_002e0b1c;
      }
    }
    local_3c = *(float *)(param_1 + 0x3d0);
    local_34 = *(float *)(param_1 + 0x3d8);
    iVar2 = *DAT_002e0b20;
    fVar5 = fVar5 - fVar4;
    local_38 = *(float *)(param_1 + 0x3d4) + DAT_002e0b1c;
    fVar3 = DAT_002e0b18;
    uVar1 = func_00111A64((uint *)(iVar2 + 0x660));
    fVar10 = fVar10 - fVar9;
    fVar8 = (float)VectorUnsignedToFloat(uVar1,(byte)(in_fpscr >> 0x15) & 3);
    fVar4 = fVar8 * DAT_002e0b24 * fVar5 + fVar4;
    fVar8 = DAT_002e0b24;
    uVar1 = func_00111A64((uint *)(iVar2 + 0x660));
    fVar6 = (float)VectorUnsignedToFloat(uVar1,(byte)(in_fpscr >> 0x15) & 3);
    local_30 = (fVar4 - local_3c) * DAT_002e0b28;
    local_28 = ((fVar6 * fVar8 * fVar10 + fVar9) - local_34) * DAT_002e0b28;
    local_2c = fVar3;
    func_001D6FD0(&local_3c,param_2,9,(int *)&local_30,-1);
  }
  return;
}

