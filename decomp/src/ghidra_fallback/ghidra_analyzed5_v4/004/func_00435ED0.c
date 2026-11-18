#include "ghidra_types.h"

extern int func_001151CC(undefined4 *param_1,undefined4 *param_2);
extern float DAT_004360dc;
extern float DAT_004360e0;
extern float DAT_004360e4;
extern undefined4 DAT_004360e8;

// USA 00435ED0 <- EU 00435EB0 (Ghidra, non-matching)
// GLOBAL DAT_004360dc float
// GLOBAL DAT_004360e0 float
// GLOBAL DAT_004360e4 float
// GLOBAL DAT_004360e8 undefined4

void func_00435ED0(int param_1,float *param_2)

{
  undefined4 uVar1;
  byte bVar2;
  bool bVar3;
  bool bVar4;
  float fVar5;
  
  fVar5 = *param_2 - *(float *)(param_1 + 0x18);
  bVar4 = DAT_004360e0 == fVar5;
  bVar3 = fVar5 <= DAT_004360e0;
  if (!bVar3 || bVar4) {
    bVar4 = fVar5 == DAT_004360dc;
    bVar3 = DAT_004360dc <= fVar5;
  }
  if (bVar3 && !bVar4) {
LAB_00436004:
    bVar4 = false;
  }
  else {
    fVar5 = param_2[1] - *(float *)(param_1 + 0x1c);
    bVar4 = DAT_004360e0 == fVar5;
    bVar3 = fVar5 <= DAT_004360e0;
    if (!bVar3 || bVar4) {
      bVar4 = fVar5 == DAT_004360dc;
      bVar3 = DAT_004360dc <= fVar5;
    }
    if (bVar3 && !bVar4) goto LAB_00436004;
    fVar5 = param_2[2] - *(float *)(param_1 + 0x20);
    bVar4 = DAT_004360e0 == fVar5;
    bVar3 = fVar5 <= DAT_004360e0;
    if (!bVar3 || bVar4) {
      bVar4 = fVar5 == DAT_004360dc;
      bVar3 = DAT_004360dc <= fVar5;
    }
    if (bVar3 && !bVar4) goto LAB_00436004;
    fVar5 = param_2[3] - *(float *)(param_1 + 0x24);
    bVar4 = DAT_004360e0 == fVar5;
    bVar3 = fVar5 <= DAT_004360e0;
    if (!bVar3 || bVar4) {
      bVar4 = fVar5 == DAT_004360dc;
      bVar3 = DAT_004360dc <= fVar5;
    }
    if (bVar3 && !bVar4) goto LAB_00436004;
    fVar5 = param_2[4] - *(float *)(param_1 + 0x28);
    bVar4 = DAT_004360e0 == fVar5;
    bVar3 = fVar5 <= DAT_004360e0;
    if (!bVar3 || bVar4) {
      bVar4 = fVar5 == DAT_004360dc;
      bVar3 = DAT_004360dc <= fVar5;
    }
    if (bVar3 && !bVar4) goto LAB_00436004;
    fVar5 = param_2[5] - *(float *)(param_1 + 0x2c);
    bVar4 = DAT_004360e0 == fVar5;
    bVar3 = fVar5 <= DAT_004360e0;
    if (!bVar3 || bVar4) {
      bVar4 = fVar5 == DAT_004360dc;
      bVar3 = DAT_004360dc <= fVar5;
    }
    if (bVar3 && !bVar4) goto LAB_00436004;
    fVar5 = param_2[6] - *(float *)(param_1 + 0x30);
    bVar4 = DAT_004360e0 == fVar5;
    bVar3 = fVar5 <= DAT_004360e0;
    if (!bVar3 || bVar4) {
      bVar4 = fVar5 == DAT_004360dc;
      bVar3 = DAT_004360dc <= fVar5;
    }
    if (bVar3 && !bVar4) goto LAB_00436004;
    fVar5 = param_2[7] - *(float *)(param_1 + 0x34);
    bVar4 = DAT_004360e0 == fVar5;
    bVar3 = fVar5 <= DAT_004360e0;
    if (!bVar3 || bVar4) {
      bVar4 = fVar5 == DAT_004360dc;
      bVar3 = DAT_004360dc <= fVar5;
    }
    if (bVar3 && !bVar4) goto LAB_00436004;
    fVar5 = param_2[8] - *(float *)(param_1 + 0x38);
    bVar4 = DAT_004360e0 == fVar5;
    bVar3 = fVar5 <= DAT_004360e0;
    if (!bVar3 || bVar4) {
      bVar4 = fVar5 == DAT_004360dc;
      bVar3 = DAT_004360dc <= fVar5;
    }
    if (bVar3 && !bVar4) goto LAB_00436004;
    bVar4 = true;
  }
  if (bVar4) {
    return;
  }
  bVar2 = *(byte *)(param_1 + 0xa8);
  *(byte *)(param_1 + 0xa8) = bVar2 | 8;
  uVar1 = DAT_004360e8;
  fVar5 = DAT_004360e4;
  if (*param_2 == 1.0) {
    bVar4 = false;
    if (param_2[1] == DAT_004360e4) {
      bVar4 = param_2[2] == DAT_004360e4;
    }
    if (bVar4) {
      bVar4 = false;
      if (param_2[3] == DAT_004360e4) {
        bVar4 = param_2[4] == 1.0;
      }
      if (bVar4) {
        bVar4 = false;
        if (param_2[5] == DAT_004360e4) {
          bVar4 = param_2[6] == DAT_004360e4;
        }
        if (bVar4) {
          bVar4 = false;
          if (param_2[7] == DAT_004360e4) {
            bVar4 = param_2[8] == 1.0;
          }
          if (bVar4) {
            *(undefined4 *)(param_1 + 0x18) = DAT_004360e8;
            *(float *)(param_1 + 0x1c) = fVar5;
            *(float *)(param_1 + 0x20) = fVar5;
            bVar2 = bVar2 & 0xfb | 8;
            *(float *)(param_1 + 0x24) = fVar5;
            *(undefined4 *)(param_1 + 0x28) = uVar1;
            *(float *)(param_1 + 0x2c) = fVar5;
            *(float *)(param_1 + 0x30) = fVar5;
            *(float *)(param_1 + 0x34) = fVar5;
            *(undefined4 *)(param_1 + 0x38) = uVar1;
            goto LAB_004360a4;
          }
        }
      }
    }
  }
  func_001151CC((undefined4 *)(param_1 + 0x18),param_2);
  bVar2 = *(byte *)(param_1 + 0xa8) | 4;
LAB_004360a4:
  *(byte *)(param_1 + 0xa8) = bVar2;
  return;
}

