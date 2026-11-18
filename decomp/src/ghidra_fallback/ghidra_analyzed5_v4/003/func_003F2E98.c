#include "ghidra_types.h"

extern int func_005647D4(int param_1,uint *param_2,uint param_3,int param_4,int param_5,int param_6, int param_7);
extern float DAT_003f3128;
extern uint DAT_003f312c;
extern uint DAT_003f3130;
extern uint DAT_003f3134;

// USA 003F2E98 <- EU 003F2E78 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 int
// PARAM param_6 Stack[0x4]:4 int
// PARAM param_7 Stack[0x8]:4 int
// GLOBAL DAT_003f3128 float
// GLOBAL DAT_003f312c uint
// GLOBAL DAT_003f3130 uint
// GLOBAL DAT_003f3134 uint

uint * func_003F2E98(undefined4 param_1,uint *param_2,int param_3,float *param_4,int param_5,
                    int param_6,int param_7)

{
  int iVar1;
  uint *puVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  
  iVar1 = param_7;
  piVar3 = &param_6;
  if (param_3 != 0) {
    piVar3 = *(int **)(param_3 + 0x148);
  }
  if ((param_3 != 0 && piVar3 != (int *)0x0) && (piVar3[0x1605] != 0)) {
    iVar4 = param_3 + param_6 * 0x10;
    iVar5 = *(int *)(param_3 + 0x144);
    iVar6 = param_3 + param_5 * 0x10;
    fVar9 = *(float *)(iVar4 + 0xb8) * *(float *)(iVar5 + 0x1bc) * param_4[2];
    fVar13 = *(float *)(iVar6 + 0xb8) * *(float *)(iVar5 + 0x19c) * param_4[2];
    uVar14 = VectorFloatToUnsigned(*(float *)(iVar5 + 0x90) * DAT_003f3128,3);
    fVar8 = *(float *)(iVar4 + 0xb4) * *(float *)(iVar5 + 0x1b8) * param_4[1];
    fVar7 = *(float *)(iVar4 + 0xb0) * *(float *)(iVar5 + 0x1b4) * *param_4;
    fVar11 = *(float *)(iVar6 + 0xb0) * *(float *)(iVar5 + 0x194) * *param_4;
    fVar12 = *(float *)(iVar6 + 0xb4) * *(float *)(iVar5 + 0x198) * param_4[1];
    uVar15 = VectorFloatToUnsigned(fVar9 * DAT_003f3128,3);
    uVar10 = VectorFloatToUnsigned(fVar8 * DAT_003f3128,3);
    uVar16 = VectorFloatToUnsigned(fVar7 * DAT_003f3128,3);
    puVar2 = func_005647D4(iVar5 + 0x23c,param_2,uVar16 & 0xff,uVar10 & 0xff,uVar15 & 0xff,
                           uVar14 & 0xff,0);
    uVar14 = DAT_003f3130;
    uVar10 = DAT_003f312c;
    puVar2[3] = DAT_003f3134;
    *puVar2 = uVar10;
    puVar2[1] = uVar14;
    puVar2[4] = *(uint *)(*(int *)(*(int *)(param_3 + 0x148) + 0x5814) + 0x334);
    if (iVar1 == 0) {
      uVar10 = *(uint *)(param_3 + 100);
      puVar2[6] = 0x3f800000;
      puVar2[2] = uVar10;
      puVar2[5] = 0;
    }
    else {
      puVar2[2] = 0x3f800000;
      puVar2[5] = 0x3f800000;
      puVar2[6] = 0;
    }
    puVar2[7] = (uint)ALBW_AS_U32((*(float *)(param_3 + 0x94) - *(float *)(param_3 + 0x9c)));
    puVar2[8] = (uint)ALBW_AS_U32((*(float *)(param_3 + 0x90) + *(float *)(param_3 + 0x98)));
    puVar2[9] = (uint)ALBW_AS_U32((*(float *)(param_3 + 0x78) - *(float *)(param_3 + 0x80)));
    puVar2[10] = (uint)ALBW_AS_U32((*(float *)(param_3 + 0x74) + *(float *)(param_3 + 0x7c)));
    puVar2[0xb] = 0;
    puVar2[0xc] = *(uint *)(param_3 + 0x70);
    puVar2[0xd] = *(uint *)(param_3 + 0x88);
    puVar2[0xe] = *(uint *)(param_3 + 0x84);
    puVar2[0xf] = 0;
    puVar2[0x10] = *(uint *)(param_3 + 0x8c);
    puVar2[0x11] = *(uint *)(param_3 + 0xa4);
    puVar2[0x12] = *(uint *)(param_3 + 0xa0);
    puVar2[0x13] = *(uint *)(*(int *)(param_3 + 0x144) + 0x90);
    puVar2[0x14] = (uint)ALBW_AS_U32(fVar13);
    puVar2[0x15] = (uint)ALBW_AS_U32(fVar12);
    puVar2[0x16] = (uint)ALBW_AS_U32(fVar11);
    puVar2[0x17] = *(uint *)(*(int *)(param_3 + 0x144) + 0x90);
    puVar2[0x18] = (uint)ALBW_AS_U32(fVar9);
    puVar2[0x19] = (uint)ALBW_AS_U32(fVar8);
    puVar2[0x1a] = (uint)ALBW_AS_U32(fVar7);
    puVar2[0x1b] = *(uint *)(*(int *)(param_3 + 0x144) + 0x60);
    puVar2[0x1c] = *(uint *)(*(int *)(param_3 + 0x144) + 0x5c);
    puVar2[0x1d] = *(uint *)(*(int *)(param_3 + 0x144) + 0x58);
    puVar2[0x1e] = *(uint *)(*(int *)(param_3 + 0x144) + 0x54);
    puVar2[0x1f] = *(uint *)(*(int *)(param_3 + 0x144) + 0x70);
    puVar2[0x20] = *(uint *)(*(int *)(param_3 + 0x144) + 0x6c);
    puVar2[0x21] = *(uint *)(*(int *)(param_3 + 0x144) + 0x68);
    puVar2[0x22] = *(uint *)(*(int *)(param_3 + 0x144) + 100);
    puVar2[0x23] = *(uint *)(*(int *)(param_3 + 0x144) + 0x80);
    puVar2[0x24] = *(uint *)(*(int *)(param_3 + 0x144) + 0x7c);
    puVar2[0x25] = *(uint *)(*(int *)(param_3 + 0x144) + 0x78);
    param_2 = puVar2 + 0x28;
    puVar2[0x26] = *(uint *)(*(int *)(param_3 + 0x144) + 0x74);
    puVar2[0x27] = 0;
  }
  return param_2;
}

