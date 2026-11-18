#include "ghidra_types.h"

extern int func_00491E80(float *param_1,uint param_2,uint param_3,uint param_4);
extern int func_004A8304(undefined4 param_1,int param_2);
extern int func_004CEA18(int param_1,int param_2,uint param_3);
extern int func_004CEAF0(int param_1);
extern int func_00547B6C(uint *param_1,uint param_2);
extern int func_00588BE4(int param_1);
extern int *DAT_0027c2d0;
extern uint DAT_0027c2d4;
extern uint DAT_0027c2d8;
extern int *DAT_0027c2dc;
extern undefined4 *DAT_0027c2e0;

// USA 0027C13C <- EU 0027C164 (Ghidra, non-matching)
// GLOBAL DAT_0027c2d0 int *
// GLOBAL DAT_0027c2d4 uint
// GLOBAL DAT_0027c2d8 uint
// GLOBAL DAT_0027c2dc int *
// GLOBAL DAT_0027c2e0 undefined4 *

void func_0027C13C(int param_1)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  int unaff_r7;
  int iVar7;
  int iVar8;
  bool bVar9;
  bool bVar10;
  float fVar11;
  int iVar12;
  longlong lVar13;
  ulonglong uVar14;
  
  iVar1 = func_00588BE4(param_1);
  iVar8 = *(int *)(param_1 + 0x624);
  iVar7 = *(int *)(param_1 + 0x628);
  iVar4 = 0;
  uVar6 = 0xffffffff;
  puVar2 = *(uint **)(*DAT_0027c2d0 + 0x3dbe4);
  if (iVar8 != 0) {
    uVar14 = (ulonglong)DAT_0027c2d4;
    lVar13 = (ulonglong)DAT_0027c2d8 << 0x20;
    do {
      uVar6 = uVar6 + 1;
      uVar3 = *(uint *)(param_1 + 0x478);
      bVar10 = uVar6 <= uVar3;
      bVar9 = uVar3 == uVar6;
      if (bVar10 && !bVar9) {
        uVar3 = *(uint *)(param_1 + 0x480);
      }
      if (!bVar10 || bVar9) {
        unaff_r7 = 0;
      }
      piVar5 = *(int **)(iVar7 + iVar4 * 0x28 + 4);
      if (bVar10 && !bVar9) {
        unaff_r7 = *(int *)(uVar3 + uVar6 * 4);
      }
      iVar12 = *(int *)(unaff_r7 + 4);
      fVar11 = *(float *)(unaff_r7 + 8);
      lVar13 = CONCAT44((int)((ulonglong)lVar13 >> 0x20),*(undefined4 *)(unaff_r7 + 0xc));
      bVar9 = func_00547B6C(puVar2,uVar6);
      if (bVar9) {
        if (iVar1 == *DAT_0027c2dc) {
          fVar11 = fVar11 - ALBW_AS_F32(uVar14);
        }
        else {
          func_004CEA18((int)piVar5,0,0);
          func_004CEA18((int)piVar5,1,1);
        }
        piVar5[0x4d] = (int)((ulonglong)lVar13 >> 0x20);
        func_004A8304(*DAT_0027c2e0,*(int *)(iVar7 + iVar4 * 0x28 + 0x10));
        *(undefined1 *)(iVar7 + iVar4 * 0x28) = 2;
      }
      (**(code **)(*piVar5 + 0x10))(piVar5,0x24);
      piVar5[0x59] = piVar5[0x59] | 0x40000000;
      func_00491E80((float *)(piVar5 + 0x20),0,*(uint *)(unaff_r7 + 0x20),0);
      piVar5[0x59] = piVar5[0x59] | 0x40000000;
      piVar5[0x23] = iVar12;
      piVar5[0x27] = (int)ALBW_AS_U32(fVar11);
      piVar5[0x2b] = (int)lVar13;
      func_004CEAF0((int)piVar5);
      iVar4 = iVar4 + 1;
    } while (iVar4 != iVar8);
  }
  return;
}

