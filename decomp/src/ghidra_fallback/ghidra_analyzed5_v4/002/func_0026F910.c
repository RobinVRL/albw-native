#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern int func_00352210(int param_1,uint param_2,float fparam_0);
extern float *DAT_0026fb44;
extern float DAT_0026fb48;
extern float DAT_0026fb4c;
extern float DAT_0026fb50;
extern float *DAT_0026fb54;

// USA 0026F910 <- EU 0026F938 (Ghidra, non-matching)
// GLOBAL DAT_0026fb44 float *
// GLOBAL DAT_0026fb48 float
// GLOBAL DAT_0026fb4c float
// GLOBAL DAT_0026fb50 float
// GLOBAL DAT_0026fb54 float *

int func_0026F910(int param_1)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  float *pfVar5;
  int iVar6;
  uint in_fpscr;
  float fVar7;
  ulonglong uVar8;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(float *)(albw_frame + 0x8))
  #define local_24 (*(float *)(albw_frame + 0xc))
  #define local_20 (*(float *)(albw_frame + 0x10))
  iVar3 = 0;
  if (*(char *)(param_1 + 0x70) != '\0') {
    if (*(char *)(param_1 + 0x73) != '\0') {
      *(undefined1 *)(param_1 + 0x71) = 0;
    }
    uVar2 = *(uint *)(*(int *)(param_1 + 0x28) + *(char *)(param_1 + 0x10) * 8 + 4);
    piVar4 = (int *)(*(int *)(param_1 + 0x28) + *(char *)(param_1 + 0x10) * 8);
    if ((uVar2 & 1) != 0) {
      piVar4 = (int *)(*piVar4 + *(int *)(*(int *)(param_1 + 0x20) + ((int)uVar2 >> 1)));
    }
    (*(code *)*piVar4)();
    iVar3 = *(int *)(param_1 + 0xc) + 1;
    *(int *)(param_1 + 0xc) = iVar3;
    if (*(int *)(param_1 + 0x1c) != 0) {
      fVar7 = (float)VectorUnsignedToFloat(iVar3,(byte)(in_fpscr >> 0x15) & 3);
      func_00352210(*(int *)(param_1 + 0x1c),1,fVar7);
    }
    iVar3 = (int)*(char *)(param_1 + 8);
    if (((iVar3 == 7 || iVar3 == 8) && (iVar3 = (int)*(char *)(param_1 + 0x10), 0 < iVar3)) &&
       (iVar6 = *(int *)(param_1 + 0x50), iVar6 != 0)) {
      uVar8 = (ulonglong)(uint)ALBW_AS_U32(DAT_0026fb48);
      uVar2 = 0;
      local_28 = *DAT_0026fb44;
      local_24 = DAT_0026fb44[1];
      local_20 = DAT_0026fb44[2];
      fVar7 = DAT_0026fb48;
      if (0 < iVar6) {
        do {
          if (uVar2 < *(uint *)(param_1 + 0x50)) {
            pfVar5 = *(float **)(*(int *)(param_1 + 0x58) + uVar2 * 4);
          }
          else {
            pfVar5 = (float *)0x0;
          }
          func_00115C54(&local_28,&local_28,pfVar5);
          fVar7 = ALBW_AS_F32(uVar8);
          uVar2 = uVar2 + 1;
        } while ((int)uVar2 < iVar6);
      }
      if (1 < iVar6) {
        fVar7 = (float)VectorSignedToFloat(iVar6,(byte)(in_fpscr >> 0x15) & 3);
        func_00115D70(&local_28,&local_28,DAT_0026fb4c / fVar7);
        if (*(int *)(param_1 + 0x50) == 0) {
          pfVar5 = (float *)0x0;
        }
        else {
          pfVar5 = (float *)**(int **)(param_1 + 0x58);
        }
        fVar7 = SQRT((local_28 - *pfVar5) * (local_28 - *pfVar5) +
                     (local_24 - pfVar5[1]) * (local_24 - pfVar5[1]) +
                     (local_20 - pfVar5[2]) * (local_20 - pfVar5[2]));
      }
      fVar1 = DAT_0026fb50;
      *(float *)(param_1 + 0x44) =
           *(float *)(param_1 + 0x44) + (local_28 - *(float *)(param_1 + 0x44)) * DAT_0026fb50;
      *(float *)(param_1 + 0x48) =
           *(float *)(param_1 + 0x48) + (local_24 - *(float *)(param_1 + 0x48)) * fVar1;
      *(float *)(param_1 + 0x4c) =
           *(float *)(param_1 + 0x4c) + (local_20 - *(float *)(param_1 + 0x4c)) * fVar1;
      fVar7 = *(float *)(param_1 + 0x6c) + (fVar7 - *(float *)(param_1 + 0x6c)) * fVar1;
      *(float *)(param_1 + 0x6c) = fVar7;
      pfVar5 = DAT_0026fb54;
      piVar4 = *(int **)(param_1 + 4);
      iVar3 = *piVar4;
      if (iVar3 != 0) {
        piVar4 = (int *)piVar4[2];
      }
      if (iVar3 != 0) {
        iVar3 = *piVar4;
      }
      else {
        iVar3 = 0;
      }
      *(float *)(iVar3 + 0x54) = fVar7 + *DAT_0026fb54;
      *(float *)(iVar3 + 0x58) = *(float *)(param_1 + 0x6c) + pfVar5[1];
    }
    *(undefined1 *)(param_1 + 0x72) = 0;
    *(undefined4 *)(param_1 + 0x50) = 0;
  }
  return iVar3;
}

