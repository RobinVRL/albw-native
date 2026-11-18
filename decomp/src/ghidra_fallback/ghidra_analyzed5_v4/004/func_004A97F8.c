#include "ghidra_types.h"

extern int func_00581A18(undefined4 param_1,float *param_2,int param_3);
extern int *DAT_004a9914;
extern int DAT_004a9918;
extern int DAT_004a991c;

// USA 004A97F8 <- EU 004A97D0 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 uint
// GLOBAL DAT_004a9914 int *
// GLOBAL DAT_004a9918 int
// GLOBAL DAT_004a991c int

void func_004A97F8(int param_1,float *param_2,float *param_3,int *param_4,uint param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  
  piVar1 = DAT_004a9914;
  iVar2 = func_00581A18(param_1,param_2,
                        (int)*(short *)(*(int *)(*DAT_004a9914 + 0x38) + DAT_004a9918));
  iVar3 = func_00581A18(param_1,param_3,(int)*(short *)(*(int *)(*piVar1 + 0x38) + DAT_004a9918));
  iVar6 = (int)((ulonglong)((longlong)DAT_004a991c * (longlong)(iVar3 - iVar2)) >> 0x20);
  iVar4 = iVar2;
  if (iVar3 < iVar2) {
    iVar4 = iVar3;
  }
  uVar7 = (iVar6 >> 3) - (iVar6 >> 0x1f);
  iVar6 = (uVar7 ^ (int)uVar7 >> 0x1f) - ((int)uVar7 >> 0x1f);
  uVar8 = iVar3 - (iVar2 + uVar7 * 0x1a);
  iVar3 = iVar6 + 2;
  uVar7 = (int)uVar8 >> 0x1f;
  iVar2 = 0;
  iVar11 = -1;
  if (iVar6 != -3 && -2 < iVar3) {
    iVar6 = ((uVar8 ^ uVar7) - uVar7) + 2;
    do {
      iVar9 = iVar4 + iVar11 * 0x1a;
      if (((-1 < iVar9) && (iVar9 < 0x2a4)) && (iVar5 = -1, -1 < iVar6)) {
        do {
          uVar7 = iVar9 + iVar5;
          if ((-1 < (int)uVar7) && ((int)uVar7 < 0x2a4)) {
            iVar2 = iVar2 + 1;
            if (99 < iVar2) {
              return;
            }
            iVar10 = param_1 + 0x11c;
            if (uVar7 < 0x2a4) {
              iVar10 = param_1 + 0x11c + uVar7 * 0x48;
            }
            if (param_5 < 6) {
              iVar10 = iVar10 + param_5 * 0xc;
            }
            if (*param_4 < param_4[1]) {
              *(int *)(param_4[2] + *param_4 * 4) = iVar10;
              *param_4 = *param_4 + 1;
            }
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < iVar6);
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 < iVar3);
  }
  return;
}

