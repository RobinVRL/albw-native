#include "ghidra_types.h"

extern int func_002FEC08(int param_1,int param_2,int param_3,float fparam_0);
extern void func_0049C154(float *param_1,float *param_2,float *param_3,float fparam_0);
extern uint DAT_001b7658;
extern float DAT_001b765c;

// USA 001B74C0 <- EU 001B74C0 (Ghidra, non-matching)
// GLOBAL DAT_001b7658 uint
// GLOBAL DAT_001b765c float

void func_001B74C0(int param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint *unaff_r5;
  int *piVar9;
  bool bVar10;
  uint in_fpscr;
  float fVar11;
  float fVar12;
  ulonglong in_d8;
  
  if (*(char *)(param_1 + 0x34) == '\0') goto LAB_001b75f4;
  uVar5 = *(uint *)(param_1 + 0x2c);
  if (uVar5 <= *(uint *)(param_1 + 0x28)) {
    *(undefined1 *)(param_1 + 0x34) = 0;
    goto LAB_001b75f4;
  }
  uVar1 = *(uint *)(param_1 + 0x28) + 1;
  if (uVar5 == 0 || uVar1 == 0) {
    in_d8 = (ulonglong)DAT_001b7658;
  }
  *(uint *)(param_1 + 0x28) = uVar1;
  if (uVar5 != 0 && uVar1 != 0) {
    if (uVar1 < uVar5) {
      fVar11 = *(float *)(param_1 + 0x30);
      fVar12 = (float)VectorUnsignedToFloat(uVar1,(byte)(in_fpscr >> 0x15) & 3);
      fVar11 = fVar11 / (DAT_001b765c - (fVar12 * fVar11 - fVar11));
      in_d8 = (ulonglong)(uint)ALBW_AS_U32(fVar11);
      if (fVar11 <= DAT_001b765c) goto LAB_001b753c;
    }
    in_d8 = (ulonglong)(uint)ALBW_AS_U32(DAT_001b765c);
  }
LAB_001b753c:
  uVar5 = 0;
  do {
    puVar2 = (undefined4 *)(param_1 + 8);
    if (uVar5 < 6) {
      puVar2 = puVar2 + uVar5;
    }
    piVar9 = (int *)*puVar2;
    bVar10 = piVar9 != (int *)0x0;
    if (bVar10) {
      puVar2 = (undefined4 *)(uint)*(byte *)(piVar9 + 5);
    }
    if (bVar10 && puVar2 != (undefined4 *)0x0) {
      unaff_r5 = (uint *)*piVar9;
    }
    if ((bVar10 && puVar2 != (undefined4 *)0x0) && unaff_r5 != (uint *)0x0) {
      uVar1 = 0;
      if (0 < (int)*unaff_r5) {
        do {
          uVar3 = uVar1 & 0xffff;
          if (uVar1 < *unaff_r5) {
            iVar6 = *(int *)(unaff_r5[2] + uVar1 * 4);
          }
          else {
            iVar6 = 0;
          }
          uVar7 = *unaff_r5;
          uVar8 = uVar7;
          if (uVar3 < uVar7) {
            uVar8 = unaff_r5[2];
          }
          if (uVar3 < uVar7) {
            iVar4 = *(int *)(uVar8 + uVar3 * 4);
          }
          else {
            iVar4 = 0;
          }
          func_002FEC08(iVar4,*(int *)(iVar6 + 0x6c),0,ALBW_AS_F32(in_d8));
          uVar1 = uVar1 + 1;
        } while ((int)uVar1 < (int)*unaff_r5);
      }
      func_0049C154((float *)(piVar9 + 6),(float *)(piVar9 + 6),(float *)(piVar9 + 10),ALBW_AS_F32(in_d8))
      ;
      *(byte *)(*piVar9 + 0x50) = *(byte *)(*piVar9 + 0x50) | 2;
    }
    uVar5 = uVar5 + 1;
  } while ((int)uVar5 < 6);
LAB_001b75f4:
  if (*(int **)(param_1 + 0x24) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x24) + 8))(*(int **)(param_1 + 0x24));
  }
  piVar9 = *(int **)(param_1 + 0x20);
  if (((piVar9 != (int *)0x0) &&
      ((**(code **)(*piVar9 + 8))(piVar9), *(char *)(param_1 + 0x35) != '\0')) &&
     (*(int *)(param_1 + 0x14) != 0)) {
    *(bool *)(*(int *)(param_1 + 0x14) + 0x14) = piVar9[0x55] != 0;
  }
  return;
}

