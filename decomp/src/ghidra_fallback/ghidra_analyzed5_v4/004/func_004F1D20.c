#include "ghidra_types.h"

extern int func_0049ED20(undefined1 *param_1,byte *param_2,byte *param_3,float fparam_0);
extern undefined DAT_00000030;
extern float DAT_004f1f84;
extern int *DAT_004f1f88;

// USA 004F1D20 <- EU 004F1CF8 (Ghidra, non-matching)
// GLOBAL DAT_00000030 undefined
// GLOBAL DAT_004f1f84 float
// GLOBAL DAT_004f1f88 int *

void func_004F1D20(undefined4 *param_1,uint param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  uint in_fpscr;
  float fVar5;
  float fVar6;
  float fVar7;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(undefined4 *)(albw_frame + 0x0))
  if (*(char *)(param_1 + 0xe) != '\0') {
    iVar1 = param_1[0xd] + 1;
    param_1[0xd] = iVar1;
    fVar5 = DAT_004f1f84;
    if (iVar1 < (int)param_1[0xc]) {
      fVar5 = (float)VectorSignedToFloat(iVar1,(byte)(in_fpscr >> 0x15) & 3);
      fVar7 = (float)VectorSignedToFloat(param_1[0xc],(byte)(in_fpscr >> 0x15) & 3);
      fVar5 = fVar5 / fVar7;
    }
    else {
      *(undefined1 *)(param_1 + 0xe) = 0;
    }
    if ((int)param_2 < 3) {
      iVar1 = *(int *)(*DAT_004f1f88 + 0xf74);
      piVar2 = (int *)(iVar1 + 8);
      if (param_2 < 6) {
        piVar2 = piVar2 + param_2;
      }
      if (*piVar2 == 0) {
        return;
      }
      puVar3 = (undefined4 *)(iVar1 + 8);
      if (param_2 < 6) {
        puVar3 = puVar3 + param_2;
      }
      puVar3 = (undefined4 *)*puVar3;
    }
    else {
      iVar1 = *(int *)(*DAT_004f1f88 + 0xf74);
      piVar2 = (int *)(iVar1 + 8);
      if (param_2 < 6) {
        piVar2 = piVar2 + param_2;
      }
      if (*piVar2 == 0) {
        return;
      }
      puVar3 = (undefined4 *)(iVar1 + 8);
      if (param_2 < 6) {
        puVar3 = puVar3 + param_2;
      }
      puVar3 = (undefined4 *)*puVar3;
    }
    piVar2 = (int *)*puVar3;
    if (piVar2 != (int *)0x0) {
      if (*piVar2 == 0) {
        puVar4 = &DAT_00000030;
      }
      else {
        puVar4 = (undefined1 *)(*(int *)piVar2[2] + 0x30);
        if (puVar4 == (undefined1 *)0x0) {
          return;
        }
      }
      if (*(char *)((int)param_1 + 0x39) != '\0') {
        local_20 = *param_1;
        func_0049ED20((undefined1 *)&local_20,(byte *)&local_20,(byte *)(param_1 + 6),fVar5);
        puVar4[4] = (*(undefined1 *)((char *)&local_20 + 3));
        puVar4[5] = (*(undefined1 *)((char *)&local_20 + 2));
        puVar4[6] = (*(undefined1 *)((char *)&local_20 + 1));
        puVar4[7] = (byte)local_20;
      }
      if (*(char *)((int)param_1 + 0x3a) != '\0') {
        local_20 = param_1[1];
        func_0049ED20((undefined1 *)&local_20,(byte *)&local_20,(byte *)(param_1 + 7),fVar5);
        *puVar4 = (*(undefined1 *)((char *)&local_20 + 3));
        puVar4[1] = (*(undefined1 *)((char *)&local_20 + 2));
        puVar4[2] = (*(undefined1 *)((char *)&local_20 + 1));
        puVar4[3] = (byte)local_20;
      }
      if (*(char *)((int)param_1 + 0x3b) != '\0') {
        local_20 = param_1[2];
        func_0049ED20((undefined1 *)&local_20,(byte *)&local_20,(byte *)(param_1 + 8),fVar5);
        puVar4[8] = (*(undefined1 *)((char *)&local_20 + 3));
        puVar4[9] = (*(undefined1 *)((char *)&local_20 + 2));
        puVar4[10] = (*(undefined1 *)((char *)&local_20 + 1));
        puVar4[0xb] = (byte)local_20;
      }
      if (*(char *)(param_1 + 0xf) != '\0') {
        local_20 = param_1[3];
        func_0049ED20((undefined1 *)&local_20,(byte *)&local_20,(byte *)(param_1 + 9),fVar5);
        puVar4[0xc] = (*(undefined1 *)((char *)&local_20 + 3));
        puVar4[0xd] = (*(undefined1 *)((char *)&local_20 + 2));
        puVar4[0xe] = (*(undefined1 *)((char *)&local_20 + 1));
        puVar4[0xf] = (byte)local_20;
      }
      if (*(char *)((int)param_1 + 0x3d) != '\0') {
        fVar7 = ALBW_AS_F32(param_1[0xb]);
        if (*piVar2 == 0) {
          iVar1 = 0;
        }
        else {
          iVar1 = *(int *)piVar2[2];
        }
        fVar6 = ALBW_AS_F32(param_1[5]);
        *(float *)(iVar1 + 0x54) =
             ALBW_AS_F32(param_1[4]) + (ALBW_AS_F32(param_1[10]) - ALBW_AS_F32(param_1[4])) * fVar5;
        if (*piVar2 == 0) {
          iVar1 = 0;
        }
        else {
          iVar1 = *(int *)piVar2[2];
        }
        *(float *)(iVar1 + 0x58) = fVar6 + (fVar7 - fVar6) * fVar5;
      }
      *(byte *)(piVar2 + 0x14) = *(byte *)(piVar2 + 0x14) | 2;
    }
  }
  return;
}

