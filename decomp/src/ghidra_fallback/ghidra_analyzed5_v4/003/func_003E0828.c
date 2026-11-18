#include "ghidra_types.h"

extern int func_003E0500(int param_1);
extern float DAT_003e0978;

// USA 003E0828 <- EU 003E0808 (Ghidra, non-matching)
// GLOBAL DAT_003e0978 float

undefined4 func_003E0828(int param_1,uint *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  bool bVar9;
  float fVar10;
  
  if ((((DAT_003e0978 <= (float)param_2[3]) && ((int)param_2[3] < 0x3f800001)) &&
      (DAT_003e0978 <= (float)param_2[4])) &&
     ((((int)param_2[4] < 0x3f800001 && (DAT_003e0978 <= (float)param_2[6])) &&
      (((int)param_2[6] < 0x3f800001 &&
       ((fVar10 = ALBW_AS_F32(param_2[7]), DAT_003e0978 <= fVar10 && ((int)ALBW_AS_U32(fVar10) < 0x3f800001)))))))) {
    puVar1 = (uint *)param_2[5];
    if (puVar1 != (uint *)0x0) {
      bVar8 = *puVar1 == 0;
      uVar2 = 0;
      if (!bVar8) {
        uVar2 = puVar1[1];
      }
      bVar9 = uVar2 == 0;
      if (!bVar8 && !bVar9) {
        uVar2 = puVar1[2];
      }
      if ((bVar8 || bVar9) || uVar2 == 0) {
        return 0;
      }
    }
    if ((*(char *)(param_1 + 0x104) != '\x01') ||
       (((*param_2 <= *(uint *)(param_1 + 0xf0) && (param_2[2] <= *(uint *)(param_1 + 0xf4))) &&
        ((puVar1 == (uint *)0x0 ||
         (((*puVar1 <= *(uint *)(param_1 + 0xf8) && (puVar1[1] <= *(uint *)(param_1 + 0xfc))) &&
          (puVar1[2] <= *(uint *)(param_1 + 0x100))))))))) {
      uVar2 = *param_2;
      uVar3 = param_2[1];
      uVar4 = param_2[2];
      uVar5 = param_2[3];
      uVar6 = param_2[4];
      uVar7 = param_2[6];
      *(uint **)(param_1 + 0x18) = puVar1;
      *(uint *)(param_1 + 4) = uVar2;
      *(uint *)(param_1 + 8) = uVar3;
      *(uint *)(param_1 + 0xc) = uVar4;
      *(uint *)(param_1 + 0x10) = uVar5;
      *(uint *)(param_1 + 0x14) = uVar6;
      *(uint *)(param_1 + 0x1c) = uVar7;
      *(float *)(param_1 + 0x20) = fVar10;
      *(uint *)(param_1 + 0x24) = param_2[8];
      if (puVar1 != (uint *)0x0) {
        uVar2 = *puVar1;
        uVar3 = puVar1[1];
        *(uint *)(param_1 + 0x38) = puVar1[2];
        *(int *)(param_1 + 0x18) = param_1 + 0x30;
        *(uint *)(param_1 + 0x30) = uVar2;
        *(uint *)(param_1 + 0x34) = uVar3;
      }
      if (*(char *)(param_1 + 0x104) == '\x01') {
        func_003E0500(param_1);
      }
      return 1;
    }
  }
  return 0;
}

