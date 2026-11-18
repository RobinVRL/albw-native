#include "ghidra_types.h"

extern int func_0012E048(int param_1);
extern int func_0012E6EC(int param_1);
extern int func_0012EC04(int param_1,int param_2);
extern int func_0013066C(int param_1);
extern int func_00130AA0(int param_1);
extern int func_0013117C(int param_1);
extern int func_001321B8(int param_1,int param_2);
extern int func_001326D8(int param_1,int param_2);
extern int func_00132784(int param_1,int param_2);
extern int func_0014A40C(int param_1,char *param_2);
extern int func_0014B258(int param_1);
extern int func_0014B3D8(int param_1,int param_2);
extern int func_002C30E8(int param_1,int param_2);
extern int func_002E39E8(int param_1,uint param_2,undefined4 *param_3);
extern int func_00330388(int param_1);
extern int func_005FF018(undefined4 param_1,int param_2,int param_3,int param_4,int param_5,int param_6, int param_7,int param_8,int param_9,int param_10,int param_11);
extern int func_005FF064(undefined4 param_1,int param_2,int param_3,undefined4 param_4,int param_5, int param_6,undefined4 param_7);
extern int *DAT_0014c7e8;
extern int *DAT_0014c7ec;
extern uint *DAT_0014c7f0;
extern int *DAT_0014c7f4;
extern int *DAT_0014c7f8;
extern uint DAT_0014c7fc;
extern int *DAT_0014c800;

// USA 0014C108 <- EU 0014C108 (Ghidra, non-matching)
// GLOBAL DAT_0014c7e8 int *
// GLOBAL DAT_0014c7ec int *
// GLOBAL DAT_0014c7f0 uint *
// GLOBAL DAT_0014c7f4 int *
// GLOBAL DAT_0014c7f8 int *
// GLOBAL DAT_0014c7fc uint
// GLOBAL DAT_0014c800 int *

/* WARNING: Variable defined which should be unmapped: objStack_48 */

void func_0014C108(int param_1,uint *param_2,uint param_3,uint param_4)

{
  char cVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  uint unaff_r5;
  int *piVar8;
  int iVar9;
  undefined4 *puVar10;
  bool bVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define objStack_48 ((uint *)(albw_frame + 0x8))
  piVar2 = DAT_0014c7e8;
  *(undefined4 *)(param_1 + 0x1b8) = *(undefined4 *)(param_1 + 0x1b0);
  if (*(char *)(param_1 + 0x210) == '\0') {
    if ((*(uint *)(param_1 + 0x218) & 1) == 0) {
      func_002C30E8(*DAT_0014c7ec,0);
    }
    objStack_48[7] = *DAT_0014c7f0;
    if ((*(uint *)(param_1 + 0x214) & 1) == 0) {
      func_0013066C(objStack_48[7]);
    }
    if ((*(uint *)(param_1 + 0x218) & 1) == 0) {
      func_001321B8(objStack_48[7],0);
    }
    piVar8 = DAT_0014c7f4;
    if ((*(uint *)(param_1 + 0x218) & 4) == 0) {
      func_002E39E8(*DAT_0014c7f4,0,(undefined4 *)0x1);
    }
    if ((*(uint *)(param_1 + 0x214) & 1) == 0) {
      func_00130AA0(objStack_48[7]);
    }
    if ((*(uint *)(param_1 + 0x218) & 1) == 0) {
      func_001326D8(objStack_48[7],0);
    }
    if ((*(uint *)(param_1 + 0x218) & 4) == 0) {
      func_002E39E8(*piVar8,1,(undefined4 *)0x1);
    }
    if (*(int *)(param_1 + 0x1d0) != 0) {
      unaff_r5 = 0;
    }
    if (0 < *(int *)(param_1 + 0x1d0)) {
      do {
        if (unaff_r5 < *(uint *)(param_1 + 0x1d0)) {
          iVar5 = *(int *)(param_1 + 0x1cc) + unaff_r5;
          if (*(int *)(param_1 + 0x1c8) <= iVar5) {
            iVar5 = iVar5 - *(int *)(param_1 + 0x1c8);
          }
          puVar7 = (uint *)(*(int *)(param_1 + 0x1c4) + iVar5 * 0x14);
        }
        else {
          puVar7 = *(uint **)(param_1 + 0x1c4);
        }
        cVar1 = (char)puVar7[3];
        bVar11 = cVar1 == '\0';
        if (bVar11) {
          cVar1 = *(char *)((int)puVar7 + 0xd);
        }
        if (bVar11 && cVar1 == '\0') {
          *(undefined1 *)puVar7[4] = 1;
          iVar5 = *DAT_0014c7f8;
          puVar3 = (undefined4 *)(iVar5 + 0x1c);
          if (*(char *)((int)puVar7 + 0xe) == '\0') {
LAB_0014c338:
            iVar6 = *(int *)(iVar5 + 0x24);
            objStack_48[1] = ((uint)(ushort)puVar7[2] - iVar6) * 0x10;
            objStack_48[0] = iVar6 * *(int *)(iVar5 + 0x28) * 2;
            objStack_48[2] = objStack_48[0];
            if (objStack_48[1] == 0) {
              objStack_48[1] = 0;
              func_005FF064(*puVar3,objStack_48[0],0,*puVar7,objStack_48[0],0,objStack_48[0]);
            }
            else {
              objStack_48[0] = iVar6 << 4;
              func_005FF064(*puVar3,objStack_48[2],0,*puVar7,iVar6 << 4,objStack_48[1],
                            objStack_48[2]);
            }
            if (*(char *)((int)puVar7 + 0xe) != '\0') {
              objStack_48[6] = 8;
              objStack_48[3] = DAT_0014c7fc;
              objStack_48[4] = 0x500;
              objStack_48[5] = 0;
              objStack_48[0] = puVar7[1];
              objStack_48[2] = (uint)*(ushort *)((int)puVar7 + 10);
              objStack_48[1] = (uint)(ushort)puVar7[2];
              func_005FF018(*puVar7,objStack_48[1],objStack_48[2],DAT_0014c7fc,objStack_48[0],
                            objStack_48[1],objStack_48[2],DAT_0014c7fc,0x500,0,8);
            }
            iVar5 = *(int *)(param_1 + 0x1d0);
            if (((iVar5 < 1) || ((int)unaff_r5 < 0)) || (iVar5 <= (int)unaff_r5)) goto LAB_0014c444;
            uVar4 = unaff_r5;
            if ((int)unaff_r5 < iVar5 + -1) {
              do {
                iVar6 = *(int *)(param_1 + 0x1c8);
                iVar5 = *(int *)(param_1 + 0x1cc) + uVar4;
                if (iVar6 <= iVar5) {
                  iVar5 = iVar5 - iVar6;
                }
                iVar9 = uVar4 + 1 + *(int *)(param_1 + 0x1cc);
                if (iVar6 <= iVar9) {
                  iVar9 = iVar9 - iVar6;
                }
                puVar10 = (undefined4 *)(*(int *)(param_1 + 0x1c4) + iVar9 * 0x14);
                puVar3 = (undefined4 *)(*(int *)(param_1 + 0x1c4) + iVar5 * 0x14);
                uVar12 = puVar10[1];
                uVar13 = puVar10[2];
                uVar14 = puVar10[3];
                uVar15 = puVar10[4];
                uVar4 = uVar4 + 1;
                *puVar3 = *puVar10;
                puVar3[1] = uVar12;
                puVar3[2] = uVar13;
                puVar3[3] = uVar14;
                puVar3[4] = uVar15;
              } while ((int)uVar4 < *(int *)(param_1 + 0x1d0) + -1);
            }
          }
          else {
            objStack_48[1] = (uint)(ushort)puVar7[2];
            if (*(int *)(iVar5 + 0x5c) < (int)objStack_48[1]) goto LAB_0014c338;
            objStack_48[6] = 8;
            objStack_48[5] = 0;
            objStack_48[3] = DAT_0014c7fc;
            objStack_48[4] = 0x500;
            objStack_48[2] = (uint)*(ushort *)((int)puVar7 + 10);
            objStack_48[0] = *puVar7;
            func_005FF018(*puVar3,*(int *)(iVar5 + 0x5c),*(int *)(iVar5 + 0x60),DAT_0014c7fc,
                          objStack_48[0],objStack_48[1],objStack_48[2],DAT_0014c7fc,0x500,0,8);
            iVar5 = *(int *)(param_1 + 0x1d0);
            if (((iVar5 < 1) || ((int)unaff_r5 < 0)) || (iVar5 <= (int)unaff_r5)) goto LAB_0014c444;
            uVar4 = unaff_r5;
            if ((int)unaff_r5 < iVar5 + -1) {
              do {
                iVar6 = *(int *)(param_1 + 0x1c8);
                iVar5 = *(int *)(param_1 + 0x1cc) + uVar4;
                if (iVar6 <= iVar5) {
                  iVar5 = iVar5 - iVar6;
                }
                iVar9 = uVar4 + 1 + *(int *)(param_1 + 0x1cc);
                if (iVar6 <= iVar9) {
                  iVar9 = iVar9 - iVar6;
                }
                puVar10 = (undefined4 *)(*(int *)(param_1 + 0x1c4) + iVar9 * 0x14);
                puVar3 = (undefined4 *)(*(int *)(param_1 + 0x1c4) + iVar5 * 0x14);
                uVar12 = puVar10[1];
                uVar13 = puVar10[2];
                uVar14 = puVar10[3];
                uVar15 = puVar10[4];
                uVar4 = uVar4 + 1;
                *puVar3 = *puVar10;
                puVar3[1] = uVar12;
                puVar3[2] = uVar13;
                puVar3[3] = uVar14;
                puVar3[4] = uVar15;
              } while ((int)uVar4 < *(int *)(param_1 + 0x1d0) + -1);
            }
          }
          *(int *)(param_1 + 0x1d0) = *(int *)(param_1 + 0x1d0) + -1;
        }
        else {
          unaff_r5 = unaff_r5 + 1;
        }
LAB_0014c444:
      } while ((int)unaff_r5 < *(int *)(param_1 + 0x1d0));
    }
    if ((*(uint *)(param_1 + 0x214) & 2) == 0) {
      func_0012E048(*piVar2);
    }
    if ((*(uint *)(param_1 + 0x218) & 2) == 0) {
      func_0012EC04(*piVar2,0);
    }
    if ((*(uint *)(param_1 + 0x218) & 2) == 0) {
      func_00330388(*DAT_0014c800);
    }
    if ((*(uint *)(param_1 + 0x214) & 2) == 0) {
      func_0013117C(objStack_48[7]);
    }
    if ((*(uint *)(param_1 + 0x218) & 2) == 0) {
      func_00132784(objStack_48[7],0);
    }
    if ((*(uint *)(param_1 + 0x218) & 4) == 0) {
      func_002E39E8(*piVar8,2,(undefined4 *)0x1);
    }
    iVar5 = *(int *)(param_1 + 0x1d0);
    if (0 < iVar5) {
      piVar8 = DAT_0014c7f8;
    }
    if (iVar5 != 0) {
      unaff_r5 = 0;
    }
    if (0 < iVar5) {
      do {
        if (unaff_r5 < *(uint *)(param_1 + 0x1d0)) {
          iVar5 = *(int *)(param_1 + 0x1cc) + unaff_r5;
          if (*(int *)(param_1 + 0x1c8) <= iVar5) {
            iVar5 = iVar5 - *(int *)(param_1 + 0x1c8);
          }
          puVar7 = (uint *)(*(int *)(param_1 + 0x1c4) + iVar5 * 0x14);
        }
        else {
          puVar7 = *(uint **)(param_1 + 0x1c4);
        }
        cVar1 = (char)puVar7[3];
        bVar11 = cVar1 == '\x01';
        if (bVar11) {
          cVar1 = *(char *)((int)puVar7 + 0xd);
        }
        if (bVar11 && cVar1 == '\0') {
          *(undefined1 *)puVar7[4] = 1;
          iVar5 = *piVar8;
          puVar3 = (undefined4 *)(iVar5 + 0x1c);
          if (*(char *)((int)puVar7 + 0xe) == '\0') {
LAB_0014c650:
            iVar6 = *(int *)(iVar5 + 0x24);
            objStack_48[1] = ((uint)(ushort)puVar7[2] - iVar6) * 0x10;
            objStack_48[0] = iVar6 * *(int *)(iVar5 + 0x28) * 2;
            objStack_48[2] = objStack_48[0];
            if (objStack_48[1] == 0) {
              objStack_48[1] = 0;
              func_005FF064(*puVar3,objStack_48[0],0,*puVar7,objStack_48[0],0,objStack_48[0]);
            }
            else {
              objStack_48[0] = iVar6 << 4;
              func_005FF064(*puVar3,objStack_48[2],0,*puVar7,iVar6 << 4,objStack_48[1],
                            objStack_48[2]);
            }
            if (*(char *)((int)puVar7 + 0xe) != '\0') {
              objStack_48[6] = 8;
              objStack_48[3] = DAT_0014c7fc;
              objStack_48[4] = 0x500;
              objStack_48[5] = 0;
              objStack_48[0] = puVar7[1];
              objStack_48[2] = (uint)*(ushort *)((int)puVar7 + 10);
              objStack_48[1] = (uint)(ushort)puVar7[2];
              func_005FF018(*puVar7,objStack_48[1],objStack_48[2],DAT_0014c7fc,objStack_48[0],
                            objStack_48[1],objStack_48[2],DAT_0014c7fc,0x500,0,8);
            }
            iVar5 = *(int *)(param_1 + 0x1d0);
            if (((iVar5 < 1) || ((int)unaff_r5 < 0)) || (iVar5 <= (int)unaff_r5)) goto LAB_0014c760;
            uVar4 = unaff_r5;
            if ((int)unaff_r5 < iVar5 + -1) {
              do {
                iVar6 = *(int *)(param_1 + 0x1c8);
                iVar5 = *(int *)(param_1 + 0x1cc) + uVar4;
                if (iVar6 <= iVar5) {
                  iVar5 = iVar5 - iVar6;
                }
                iVar9 = uVar4 + 1 + *(int *)(param_1 + 0x1cc);
                if (iVar6 <= iVar9) {
                  iVar9 = iVar9 - iVar6;
                }
                puVar10 = (undefined4 *)(*(int *)(param_1 + 0x1c4) + iVar9 * 0x14);
                puVar3 = (undefined4 *)(*(int *)(param_1 + 0x1c4) + iVar5 * 0x14);
                uVar12 = puVar10[1];
                uVar13 = puVar10[2];
                uVar14 = puVar10[3];
                uVar15 = puVar10[4];
                uVar4 = uVar4 + 1;
                *puVar3 = *puVar10;
                puVar3[1] = uVar12;
                puVar3[2] = uVar13;
                puVar3[3] = uVar14;
                puVar3[4] = uVar15;
              } while ((int)uVar4 < *(int *)(param_1 + 0x1d0) + -1);
            }
          }
          else {
            objStack_48[1] = (uint)(ushort)puVar7[2];
            if (*(int *)(iVar5 + 0x5c) < (int)objStack_48[1]) goto LAB_0014c650;
            objStack_48[6] = 8;
            objStack_48[5] = 0;
            objStack_48[3] = DAT_0014c7fc;
            objStack_48[4] = 0x500;
            objStack_48[2] = (uint)*(ushort *)((int)puVar7 + 10);
            objStack_48[0] = *puVar7;
            func_005FF018(*puVar3,*(int *)(iVar5 + 0x5c),*(int *)(iVar5 + 0x60),DAT_0014c7fc,
                          objStack_48[0],objStack_48[1],objStack_48[2],DAT_0014c7fc,0x500,0,8);
            iVar5 = *(int *)(param_1 + 0x1d0);
            if (((iVar5 < 1) || ((int)unaff_r5 < 0)) || (iVar5 <= (int)unaff_r5)) goto LAB_0014c760;
            uVar4 = unaff_r5;
            if ((int)unaff_r5 < iVar5 + -1) {
              do {
                iVar6 = *(int *)(param_1 + 0x1c8);
                iVar5 = *(int *)(param_1 + 0x1cc) + uVar4;
                if (iVar6 <= iVar5) {
                  iVar5 = iVar5 - iVar6;
                }
                iVar9 = uVar4 + 1 + *(int *)(param_1 + 0x1cc);
                if (iVar6 <= iVar9) {
                  iVar9 = iVar9 - iVar6;
                }
                puVar10 = (undefined4 *)(*(int *)(param_1 + 0x1c4) + iVar9 * 0x14);
                puVar3 = (undefined4 *)(*(int *)(param_1 + 0x1c4) + iVar5 * 0x14);
                uVar12 = puVar10[1];
                uVar13 = puVar10[2];
                uVar14 = puVar10[3];
                uVar15 = puVar10[4];
                uVar4 = uVar4 + 1;
                *puVar3 = *puVar10;
                puVar3[1] = uVar12;
                puVar3[2] = uVar13;
                puVar3[3] = uVar14;
                puVar3[4] = uVar15;
              } while ((int)uVar4 < *(int *)(param_1 + 0x1d0) + -1);
            }
          }
          *(int *)(param_1 + 0x1d0) = *(int *)(param_1 + 0x1d0) + -1;
        }
        else {
          unaff_r5 = unaff_r5 + 1;
        }
LAB_0014c760:
      } while ((int)unaff_r5 < *(int *)(param_1 + 0x1d0));
    }
  }
  if ((*(uint *)(param_1 + 0x218) & 0x20) == 0) {
    objStack_48[1] = *(uint *)(param_1 + 0x1b8);
    objStack_48[0] = objStack_48[0] & 0xffffff00;
    func_0014A40C(*(int *)(param_1 + 0x1bc),(char *)objStack_48);
  }
  func_0014B258(param_1);
  func_0014B3D8(param_1,1);
  func_0012E6EC(*piVar2);
  *(undefined4 *)(param_1 + 0x1b8) = 0;
  return;
}

