#include "ghidra_types.h"

extern int func_0011130C(int param_1,uint param_2,int param_3,undefined4 param_4,...);
extern int func_004A3954(int param_1,int param_2);
extern int func_005648EC(int param_1,uint *param_2,int param_3);
extern int func_00581048(int param_1,uint *param_2);
extern int DAT_004a2594;
extern char s_cf_004a2580[];
extern char s_cf_004a2598[];
extern char s_current__d_data__d_004a2580[];
extern char s_eset__s_004a2598[];

// USA 004A21F8 <- EU 004A21D0 (Ghidra, non-matching)
// GLOBAL DAT_004a2594 int
// GLOBAL s_cf_004a2580 string
// GLOBAL s_cf_004a2598 string

void func_004A21F8(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  bool bVar18;
  
  iVar15 = *(int *)(param_1[9] + 0x20);
  func_004A3954(param_1[9],param_1[8]);
  piVar1 = (int *)*param_1;
  if (*piVar1 == 9) {
    piVar7 = piVar1 + 7;
    param_1[2] = (int)piVar7;
    piVar7 = piVar7 + piVar1[1] * 0x1a;
    param_1[3] = (int)piVar7;
    piVar7 = piVar7 + piVar1[1] * piVar1[6];
    param_1[5] = (int)piVar7;
    iVar9 = piVar1[3];
    param_1[4] = (int)(piVar7 + iVar9 * 5);
    param_1[6] = (int)(piVar7 + iVar9 * 5 + piVar1[2] * 0xf);
    param_1[7] = piVar1[5] + (int)piVar1;
    iVar9 = param_1[8];
    iVar10 = *(int *)(param_1[9] + 0x28);
    iVar11 = *(int *)(iVar9 + 0x20);
    iVar12 = *(int *)(iVar9 + 0x24);
    iVar8 = *(int *)(iVar9 + 0x28);
    iVar9 = 0;
    if (0 < piVar1[3]) {
      do {
        piVar1 = (int *)(param_1[5] + iVar9 * 0x14);
        piVar1[1] = param_1[7] + *piVar1;
        *(undefined1 *)(piVar1 + 3) = 0;
        piVar1[2] = 0;
        iVar17 = (int)(short)piVar1[4];
        if (iVar17 <= *(short *)((int)piVar1 + 0x12)) {
LAB_004a22f8:
          iVar2 = iVar17 * 0xd;
          iVar14 = param_1[2] + iVar17 * 0x68;
          if (iVar11 == 0) {
            iVar2 = -1;
          }
          *(int **)(iVar14 + 4) = piVar1;
          if (iVar11 != 0) {
            iVar2 = func_00581048(iVar11,(uint *)(*(int *)(iVar14 + 8) + param_1[7]));
          }
          *(int *)(iVar14 + 0xc) = iVar2;
          if (iVar12 == 0) {
            uVar3 = 0xffffffff;
          }
          else {
            uVar3 = func_00581048(iVar12,(uint *)(*(int *)(iVar14 + 0x10) + param_1[7]));
          }
          *(undefined4 *)(iVar14 + 0x14) = uVar3;
          if (iVar8 == 0) {
            uVar3 = 0xffffffff;
          }
          else {
            uVar3 = func_00581048(iVar8,(uint *)(*(int *)(iVar14 + 0x18) + param_1[7]));
          }
          *(undefined4 *)(iVar14 + 0x1c) = uVar3;
          *(undefined1 *)(iVar14 + 0x33) = 0xff;
          if ((iVar10 != 0) &&
             (iVar2 = func_00581048(iVar10,(uint *)(*(int *)(iVar14 + 0x2c) + param_1[7])),
             iVar2 != -1)) {
            *(char *)(iVar14 + 0x33) = (char)iVar2;
          }
          iVar2 = param_1[7];
          *(undefined2 *)(iVar14 + 0x26) = 0xffff;
          puVar4 = (uint *)(iVar2 + *(int *)(iVar14 + 0x20));
          iVar2 = 0;
          iVar16 = *(int *)(iVar15 + 0x10) + 8;
          if (0 < iVar16) {
            do {
              iVar13 = *(int *)(*(int *)(iVar15 + 0xc) + iVar2 * 4);
              if ((iVar13 != 0) && (uVar5 = func_005648EC(iVar15,puVar4,iVar2), -1 < (int)uVar5)) {
                *(short *)(iVar14 + 0x26) = (short)uVar5;
                *(short *)(iVar14 + 0x24) = (short)iVar2;
                *(undefined1 *)(iVar14 + 0x34) = 0;
                iVar2 = *(int *)(iVar13 + 0x18);
                iVar13 = *(int *)(iVar2 + (uVar5 & 0xffff) * 0x3c + 8);
                iVar16 = 0;
                if (0 < iVar13) {
                  goto LAB_004a244c;
                }
                break;
              }
              iVar2 = iVar2 + 1;
            } while (iVar2 < iVar16);
          }
          goto LAB_004a2494;
        }
LAB_004a24e0:
        iVar9 = iVar9 + 1;
      } while (iVar9 < *(int *)(*param_1 + 0xc));
    }
    iVar15 = 0;
    if (0 < *(int *)(*param_1 + 0x10)) {
      do {
        piVar1 = (int *)(param_1[6] + iVar15 * 0xc);
        piVar1[1] = param_1[7] + *piVar1;
        iVar9 = (int)(short)piVar1[2];
        if (iVar9 <= *(short *)((int)piVar1 + 10)) {
          do {
            iVar8 = param_1[4] + iVar9 * 0x3c;
            iVar9 = iVar9 + 1;
            *(int *)(iVar8 + 0xc) = param_1[7] + *(int *)(iVar8 + 8);
          } while (iVar9 <= *(short *)((int)piVar1 + 10));
        }
        iVar15 = iVar15 + 1;
      } while (iVar15 < *(int *)(*param_1 + 0x10));
      return;
    }
  }
  else {
    func_0011130C(param_1[9],7,0,s_current__d_data__d_004a2580,9,*piVar1);
    *param_1 = DAT_004a2594;
  }
  return;
  while (iVar16 = iVar16 + 1, iVar16 < iVar13) {
LAB_004a244c:
    iVar6 = *(int *)(*(int *)(iVar2 + (uVar5 & 0xffff) * 0x3c + 4) + iVar16 * 8 + 4);
    bVar18 = *(int *)(iVar6 + 0x31c) == 0x7fffffff;
    if (!bVar18) {
      iVar6 = *(int *)(iVar6 + 0x2cc);
    }
    if (bVar18 || iVar6 == 0x7fffffff) {
      *(undefined1 *)(iVar14 + 0x34) = 1;
      *(undefined1 *)(piVar1 + 3) = 1;
      break;
    }
  }
LAB_004a2494:
  if (*(char *)(iVar14 + 0x3a) != '\0') {
    *(undefined1 *)(iVar14 + 0x34) = 1;
    *(undefined1 *)(piVar1 + 3) = 1;
  }
  if (*(short *)(iVar14 + 0x26) == -1) {
    func_0011130C(param_1[9],2,param_1[8],s_eset__s_004a2598);
  }
  iVar17 = iVar17 + 1;
  if (*(short *)((int)piVar1 + 0x12) < iVar17) goto LAB_004a24e0;
  goto LAB_004a22f8;
}

