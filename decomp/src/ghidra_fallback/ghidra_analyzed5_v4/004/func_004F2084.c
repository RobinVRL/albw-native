#include "ghidra_types.h"

extern void func_0049C154(float *param_1,float *param_2,float *param_3,float fparam_0);
extern int func_004F1D20(undefined4 *param_1,uint param_2);
extern float DAT_004f21e8;
extern int *DAT_004f21ec;

// USA 004F2084 <- EU 004F205C (Ghidra, non-matching)
// GLOBAL DAT_004f21e8 float
// GLOBAL DAT_004f21ec int *

void func_004F2084(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  uint uVar9;
  uint in_fpscr;
  float fVar10;
  float fVar11;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(float *)(albw_frame + 0x0))
  #define local_1c (*(undefined4 *)(albw_frame + 0x4))
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define local_14 (*(undefined4 *)(albw_frame + 0xc))
  uVar9 = 0;
  do {
    puVar1 = param_1;
    if (uVar9 < 6) {
      puVar1 = param_1 + uVar9 * 0x10;
    }
    func_004F1D20(puVar1,uVar9);
    uVar9 = uVar9 + 1;
  } while ((int)uVar9 < 6);
  if (*(char *)(param_1 + 0x6a) == '\0') {
    return;
  }
  iVar4 = param_1[0x69] + 1;
  param_1[0x69] = iVar4;
  fVar11 = DAT_004f21e8;
  if (iVar4 < (int)param_1[0x68]) {
    fVar11 = (float)VectorSignedToFloat(iVar4,(byte)(in_fpscr >> 0x15) & 3);
    fVar10 = (float)VectorSignedToFloat(param_1[0x68],(byte)(in_fpscr >> 0x15) & 3);
    fVar11 = fVar11 / fVar10;
  }
  else {
    *(undefined1 *)(param_1 + 0x6a) = 0;
  }
  local_20 = ALBW_AS_F32(param_1[0x60]);
  local_1c = param_1[0x61];
  local_18 = param_1[0x62];
  local_14 = param_1[99];
  func_0049C154(&local_20,&local_20,(float *)(param_1 + 100),fVar11);
  uVar9 = 0;
  iVar4 = *DAT_004f21ec;
  if (0 < *(int *)(iVar4 + 0x90)) {
    do {
      uVar5 = *(uint *)(iVar4 + 0x90);
      if (uVar9 < uVar5) {
        iVar2 = *(int *)(*(int *)(iVar4 + 0x98) + uVar9 * 4);
      }
      else {
        iVar2 = 0;
      }
      if (*(short *)(iVar2 + 6) == -1) {
        uVar6 = uVar5;
        if (uVar9 < uVar5) {
          uVar6 = *(uint *)(iVar4 + 0x98);
        }
        uVar3 = 0;
        if (uVar9 < uVar5) {
          iVar2 = *(int *)(uVar6 + uVar9 * 4);
        }
        else {
          iVar2 = 0;
        }
        do {
          piVar7 = (int *)(iVar2 + 8);
          if (uVar3 < 6) {
            piVar7 = piVar7 + uVar3;
          }
          if (*piVar7 != 0) {
            piVar7 = (int *)(iVar2 + 8);
            if (uVar3 < 6) {
              piVar7 = piVar7 + uVar3;
            }
            iVar8 = *piVar7;
            *(float *)(iVar8 + 0x28) = local_20;
            *(undefined4 *)(iVar8 + 0x2c) = local_1c;
            *(undefined4 *)(iVar8 + 0x30) = local_18;
            *(undefined4 *)(iVar8 + 0x34) = local_14;
            *(float *)(iVar8 + 0x18) = local_20;
            *(undefined4 *)(iVar8 + 0x1c) = *(undefined4 *)(iVar8 + 0x2c);
            *(undefined4 *)(iVar8 + 0x20) = *(undefined4 *)(iVar8 + 0x30);
            *(undefined4 *)(iVar8 + 0x24) = *(undefined4 *)(iVar8 + 0x34);
          }
          uVar3 = uVar3 + 1;
        } while ((int)uVar3 < 6);
        *(undefined1 *)(iVar4 + 0xfa4) = 1;
      }
      uVar9 = uVar9 + 1;
    } while ((int)uVar9 < *(int *)(iVar4 + 0x90));
  }
  return;
}

