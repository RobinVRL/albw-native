#include "ghidra_types.h"

extern int func_0053A900(int param_1);
extern undefined8 func_0058A474(undefined4 param_1,uint param_2);
extern float DAT_00267fa4;
extern float DAT_00267fa8;

// USA 00267BD4 <- EU 00267BFC (Ghidra, non-matching)
// GLOBAL DAT_00267fa4 float
// GLOBAL DAT_00267fa8 float

void func_00267BD4(int param_1,int param_2)

{
  _Alignas(8) unsigned char albw_frame[0x70]; /* entry_sp - 0x30 .. entry_sp + 0x40 */
#define stack0x00000000 (*(undefined4 *)(albw_frame + 0x30))
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  float *pfVar5;
  float fVar6;
  float *pfVar7;
  float *pfVar8;
  undefined1 uVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  #define local_28 (*(float *)(albw_frame + 0x8))
  #define local_24 (*(float *)(albw_frame + 0xc))
  pfVar7 = (float *)(param_1 + 0x908);
  pfVar8 = (float *)(param_1 + 0x984);
  if (param_2 == 0) {
    if (*(int *)(param_1 + 0x994) < 4) {
      iVar1 = *(int *)(param_1 + 0x998);
      if (*(char *)(param_1 + 0x99c) == '\0') {
        if (iVar1 == 0) {
          uVar4 = 3;
        }
        else {
          uVar4 = iVar1 - 1;
        }
      }
      else {
        uVar4 = iVar1 + 1U & 3;
      }
      *(uint *)(param_1 + 0x998) = uVar4;
      pfVar5 = pfVar7;
      if (uVar4 < 4) {
        pfVar5 = pfVar7 + uVar4 * 3;
      }
      fVar6 = pfVar5[1];
      fVar10 = pfVar5[2];
      *pfVar8 = *pfVar5;
      *(float *)(param_1 + 0x988) = fVar6;
      *(float *)(param_1 + 0x98c) = fVar10;
      iVar1 = func_0053A900(param_1);
      if (iVar1 != 0) {
        if (*(char *)(param_1 + 0x99e) == '\0') {
          uVar12 = func_0058A474(param_1,0x32);
          if ((int)uVar12 != 0) {
            iVar1 = *(int *)(param_1 + 0x998);
            if (*(char *)(param_1 + 0x99c) == '\0') {
              if (iVar1 == 0) {
                uVar4 = 3;
              }
              else {
                uVar4 = iVar1 - 1;
              }
            }
            else {
              uVar4 = iVar1 + 1U & 3;
            }
            *(uint *)(param_1 + 0x998) = uVar4;
            if (uVar4 < 4) {
              pfVar7 = pfVar7 + uVar4 * 3;
            }
            fVar6 = pfVar7[1];
            fVar10 = pfVar7[2];
            *pfVar8 = *pfVar7;
            *(float *)(param_1 + 0x988) = fVar6;
            *(float *)(param_1 + 0x98c) = fVar10;
            *(int *)(param_1 + 0x994) = *(int *)(param_1 + 0x994) + 1;
            *(undefined1 *)(param_1 + 0x99e) = 1;
          }
        }
        else {
          *(undefined1 *)(param_1 + 0x99e) = 0;
        }
      }
      goto LAB_00267f84;
    }
    iVar1 = func_0053A900(param_1);
    if (iVar1 == 0) {
      if ((*(int *)(param_1 + 0xb28) < 1) && (0x17 < *(int *)(param_1 + 0xba0))) {
        uVar12 = func_0058A474(param_1,0x32);
        *(char *)(param_1 + 0x99d) = (char)uVar12;
      }
      if (*(char *)(param_1 + 0x99d) == '\0') {
        iVar1 = *(int *)(param_1 + 0x998);
        if (*(char *)(param_1 + 0x99c) == '\0') {
          if (iVar1 == 0) {
            uVar4 = 3;
          }
          else {
            uVar4 = iVar1 - 1;
          }
        }
        else {
          uVar4 = iVar1 + 1U & 3;
        }
        *(uint *)(param_1 + 0x998) = uVar4;
        if (*(uint *)(param_1 + 0x998) < 4) {
          pfVar7 = pfVar7 + *(uint *)(param_1 + 0x998) * 3;
        }
        fVar6 = pfVar7[1];
        fVar10 = pfVar7[2];
        *pfVar8 = *pfVar7;
        *(float *)(param_1 + 0x988) = fVar6;
        *(float *)(param_1 + 0x98c) = fVar10;
        *(undefined4 *)(param_1 + 0x994) = 0;
        goto LAB_00267f84;
      }
    }
    fVar6 = *(float *)(param_1 + 0x978);
    fVar10 = *(float *)(param_1 + 0x97c);
    fVar11 = *(float *)(param_1 + 0x980);
  }
  else {
    *(undefined4 *)(param_1 + 0x994) = 0;
    if ((*(char *)(param_1 + 0x99d) == '\0') || (iVar1 = func_0053A900(param_1), iVar1 != 0)) {
      uVar12 = func_0058A474(param_1,0x32);
      uVar9 = (undefined1)uVar12;
    }
    else {
      uVar9 = *(char *)(param_1 + 0x99c) == '\0';
    }
    local_28 = DAT_00267fa4;
    *(undefined1 *)(param_1 + 0x99c) = uVar9;
    local_24 = local_28;
    uVar4 = 4;
    uVar3 = 0;
    fVar6 = DAT_00267fa8;
    do {
      pfVar5 = pfVar7;
      if (uVar3 < 4) {
        pfVar5 = pfVar7 + uVar3 * 3;
      }
      fVar10 = *(float *)(param_1 + 0x3d0) - *pfVar5;
      fVar11 = *(float *)(param_1 + 0x3d8) - pfVar5[2];
      fVar10 = fVar10 * fVar10 + fVar11 * fVar11;
      if (fVar10 < fVar6) {
        uVar4 = uVar3;
        fVar6 = fVar10;
      }
      uVar3 = uVar3 + 1;
    } while ((int)uVar3 < 4);
    if (&stack0x00000000 != (undefined1 *)0x28) {
      local_28 = fVar6;
    }
    uVar3 = 4;
    uVar2 = 0;
    fVar6 = DAT_00267fa8;
    do {
      pfVar5 = (float *)(param_1 + 0x938);
      if (uVar2 < 4) {
        pfVar5 = (float *)(param_1 + 0x938 + uVar2 * 0xc);
      }
      fVar10 = *(float *)(param_1 + 0x3d0) - *pfVar5;
      fVar11 = *(float *)(param_1 + 0x3d8) - pfVar5[2];
      fVar10 = fVar10 * fVar10 + fVar11 * fVar11;
      if (fVar10 < fVar6) {
        uVar3 = uVar2;
        fVar6 = fVar10;
      }
      uVar2 = uVar2 + 1;
    } while ((int)uVar2 < 4);
    if (&stack0x00000000 != (undefined1 *)0x24) {
      local_24 = fVar6;
    }
    if (local_24 <= local_28) {
      if (uVar3 < 4) {
        pfVar5 = (float *)(param_1 + 0x938 + uVar3 * 0xc);
      }
      else {
        pfVar5 = (float *)(param_1 + 0x938);
      }
      fVar6 = *pfVar5;
      fVar10 = pfVar5[1];
      *(float *)(param_1 + 0x980) = pfVar5[2];
      *(float *)(param_1 + 0x978) = fVar6;
      *(float *)(param_1 + 0x97c) = fVar10;
      if (*(char *)(param_1 + 0x99c) != '\0') {
        uVar3 = uVar3 + 1 & 3;
      }
      *(uint *)(param_1 + 0x998) = uVar3;
    }
    else {
      pfVar5 = pfVar7;
      if (uVar4 < 4) {
        pfVar5 = pfVar7 + uVar4 * 3;
      }
      fVar6 = *pfVar5;
      fVar10 = pfVar5[1];
      *(float *)(param_1 + 0x980) = pfVar5[2];
      *(float *)(param_1 + 0x978) = fVar6;
      *(float *)(param_1 + 0x97c) = fVar10;
      if (*(char *)(param_1 + 0x99c) == '\0') {
        if (uVar4 == 0) {
          uVar3 = 3;
        }
        else {
          uVar3 = uVar4 - 1;
        }
      }
      else {
        uVar3 = uVar4 + 1 & 3;
      }
      *(uint *)(param_1 + 0x998) = uVar3;
    }
    if (uVar3 < 4) {
      pfVar7 = pfVar7 + uVar3 * 3;
    }
    fVar6 = *pfVar7;
    fVar10 = pfVar7[1];
    fVar11 = pfVar7[2];
  }
  *pfVar8 = fVar6;
  *(float *)(param_1 + 0x988) = fVar10;
  *(float *)(param_1 + 0x98c) = fVar11;
LAB_00267f84:
  iVar1 = *(int *)(param_1 + 0x994) + 1;
  *(int *)(param_1 + 0x994) = iVar1;
  if (5 < iVar1) {
    *(undefined4 *)(param_1 + 0x994) = 5;
  }
  return;
}

