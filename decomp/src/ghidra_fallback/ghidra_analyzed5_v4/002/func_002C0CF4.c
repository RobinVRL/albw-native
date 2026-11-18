#include "ghidra_types.h"

extern int func_0010F1DC(int *param_1,int *param_2);
extern float DAT_002c0e04;
extern float DAT_002c0e08;
extern undefined4 DAT_002c0e0c;
extern undefined4 DAT_002c0e10;

// USA 002C0CF4 <- EU 002C0CD0 (Ghidra, non-matching)
// GLOBAL DAT_002c0e04 float
// GLOBAL DAT_002c0e08 float
// GLOBAL DAT_002c0e0c undefined4
// GLOBAL DAT_002c0e10 undefined4

void func_002C0CF4(int param_1,float *param_2,int param_3)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  float *pfVar7;
  undefined4 *puVar8;
  float fVar9;
  float fVar10;
  
  if (*(int *)(param_1 + 0x4c) < *(int *)(param_1 + 0x58)) {
    puVar8 = *(undefined4 **)(param_1 + 0x50);
    if (puVar8 != (undefined4 *)0x0) {
      *(undefined4 *)(param_1 + 0x50) = *puVar8;
      puVar8[0x12] = 0;
      puVar8[0x13] = 0;
      puVar8[0x14] = 0;
    }
    func_0010F1DC((int *)(param_1 + 0x44),puVar8 + 0x13);
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
    uVar3 = DAT_002c0e10;
    uVar2 = DAT_002c0e0c;
    fVar1 = DAT_002c0e04;
    if (puVar8 != (undefined4 *)0x0) {
      fVar9 = DAT_002c0e04;
      if (param_3 == 1) {
        fVar9 = DAT_002c0e08;
      }
      iVar6 = 0;
      iVar5 = 0;
      fVar10 = -fVar9;
      puVar8[1] = ALBW_AS_U32(fVar10);
      puVar8[4] = ALBW_AS_U32(fVar9);
      puVar8[6] = ALBW_AS_U32(fVar1);
      puVar8[7] = ALBW_AS_U32(fVar9);
      puVar8[10] = ALBW_AS_U32(fVar10);
      puVar8[0xc] = ALBW_AS_U32(fVar1);
      *puVar8 = uVar2;
      puVar8[2] = uVar3;
      puVar8[3] = uVar2;
      puVar8[5] = uVar3;
      puVar8[8] = uVar3;
      puVar8[9] = uVar2;
      puVar8[0xb] = uVar3;
      puVar8[0xd] = ALBW_AS_U32(fVar9);
      puVar8[0xe] = uVar3;
      puVar8[0xf] = ALBW_AS_U32(fVar1);
      puVar8[0x10] = ALBW_AS_U32(fVar10);
      puVar8[0x11] = uVar3;
      do {
        pfVar7 = (float *)(puVar8 + iVar6 * 3);
        iVar5 = iVar5 + 2;
        pfVar4 = (float *)(puVar8 + (iVar6 + 1) * 3);
        iVar6 = iVar6 + 2;
        *pfVar7 = *pfVar7 - *param_2;
        pfVar7[1] = pfVar7[1] - param_2[1];
        *pfVar4 = *pfVar4 - *param_2;
        pfVar4[1] = pfVar4[1] - param_2[1];
      } while (iVar5 < 6);
      puVar8[0x12] = param_3;
    }
  }
  return;
}

