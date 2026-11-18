#include "ghidra_types.h"

extern int func_0012E00C(int param_1);
extern int func_0012EA48(int param_1);
extern int func_001321B8(int param_1,int param_2);
extern int func_00132784(int param_1,int param_2);
extern int func_0014A40C(int param_1,char *param_2);
extern int func_0014B3D8(int param_1,int param_2);
extern int func_002E39E8(int param_1,uint param_2,undefined4 *param_3);
extern int func_005FF018(undefined4 param_1,int param_2,int param_3,int param_4,int param_5,int param_6, int param_7,int param_8,int param_9,int param_10,int param_11);
extern int func_005FF064(undefined4 param_1,int param_2,int param_3,undefined4 param_4,int param_5, int param_6,undefined4 param_7);
extern uint *DAT_0014bdc8;
extern int *DAT_0014bdcc;
extern uint DAT_0014bdd0;
extern int *DAT_0014bdd4;
extern undefined4 DAT_0014bdd8;
extern int *DAT_0014bddc;

// USA 0014B788 <- EU 0014B788 (Ghidra, non-matching)
// GLOBAL DAT_0014bdc8 uint *
// GLOBAL DAT_0014bdcc int *
// GLOBAL DAT_0014bdd0 uint
// GLOBAL DAT_0014bdd4 int *
// GLOBAL DAT_0014bdd8 undefined4
// GLOBAL DAT_0014bddc int *

/* WARNING: Variable defined which should be unmapped: objStack_48 */

void func_0014B788(int param_1,undefined4 param_2,uint param_3,int param_4)

{
  char cVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  uint unaff_r5;
  int *piVar7;
  int iVar8;
  undefined4 *puVar9;
  bool bVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define objStack_48 ((uint *)(albw_frame + 0x8))
  *(undefined4 *)(param_1 + 0x1b8) = *(undefined4 *)(param_1 + 0x1b4);
  if (*(char *)(param_1 + 0x210) == '\0') {
    objStack_48[7] = *DAT_0014bdc8;
    if ((*(uint *)(param_1 + 0x220) & 1) == 0) {
      func_001321B8(objStack_48[7],2);
    }
    if (*(int *)(param_1 + 0x1d0) != 0) {
      unaff_r5 = 0;
    }
    if (0 < *(int *)(param_1 + 0x1d0)) {
      do {
        if (unaff_r5 < *(uint *)(param_1 + 0x1d0)) {
          iVar4 = *(int *)(param_1 + 0x1cc) + unaff_r5;
          if (*(int *)(param_1 + 0x1c8) <= iVar4) {
            iVar4 = iVar4 - *(int *)(param_1 + 0x1c8);
          }
          puVar6 = (uint *)(*(int *)(param_1 + 0x1c4) + iVar4 * 0x14);
        }
        else {
          puVar6 = *(uint **)(param_1 + 0x1c4);
        }
        cVar1 = (char)puVar6[3];
        bVar10 = cVar1 == '\0';
        if (bVar10) {
          cVar1 = *(char *)((int)puVar6 + 0xd);
        }
        if (bVar10 && cVar1 == '\x02') {
          *(undefined1 *)puVar6[4] = 1;
          iVar4 = *DAT_0014bdcc;
          puVar2 = (undefined4 *)(iVar4 + 0x1c);
          if (*(char *)((int)puVar6 + 0xe) == '\0') {
LAB_0014b928:
            iVar5 = *(int *)(iVar4 + 0x24);
            objStack_48[1] = ((uint)(ushort)puVar6[2] - iVar5) * 0x10;
            objStack_48[0] = iVar5 * *(int *)(iVar4 + 0x28) * 2;
            objStack_48[2] = objStack_48[0];
            if (objStack_48[1] == 0) {
              objStack_48[1] = 0;
              func_005FF064(*puVar2,objStack_48[0],0,*puVar6,objStack_48[0],0,objStack_48[0]);
            }
            else {
              objStack_48[0] = iVar5 << 4;
              func_005FF064(*puVar2,objStack_48[2],0,*puVar6,iVar5 << 4,objStack_48[1],
                            objStack_48[2]);
            }
            if (*(char *)((int)puVar6 + 0xe) != '\0') {
              objStack_48[6] = 8;
              objStack_48[3] = DAT_0014bdd0;
              objStack_48[4] = 0x500;
              objStack_48[5] = 0;
              objStack_48[0] = puVar6[1];
              objStack_48[2] = (uint)*(ushort *)((int)puVar6 + 10);
              objStack_48[1] = (uint)(ushort)puVar6[2];
              func_005FF018(*puVar6,objStack_48[1],objStack_48[2],DAT_0014bdd0,objStack_48[0],
                            objStack_48[1],objStack_48[2],DAT_0014bdd0,0x500,0,8);
            }
            iVar4 = *(int *)(param_1 + 0x1d0);
            if (((iVar4 < 1) || ((int)unaff_r5 < 0)) || (iVar4 <= (int)unaff_r5)) goto LAB_0014ba38;
            uVar3 = unaff_r5;
            if ((int)unaff_r5 < iVar4 + -1) {
              do {
                iVar5 = *(int *)(param_1 + 0x1c8);
                iVar4 = *(int *)(param_1 + 0x1cc) + uVar3;
                if (iVar5 <= iVar4) {
                  iVar4 = iVar4 - iVar5;
                }
                iVar8 = uVar3 + 1 + *(int *)(param_1 + 0x1cc);
                if (iVar5 <= iVar8) {
                  iVar8 = iVar8 - iVar5;
                }
                puVar9 = (undefined4 *)(*(int *)(param_1 + 0x1c4) + iVar8 * 0x14);
                puVar2 = (undefined4 *)(*(int *)(param_1 + 0x1c4) + iVar4 * 0x14);
                uVar11 = puVar9[1];
                uVar12 = puVar9[2];
                uVar13 = puVar9[3];
                uVar14 = puVar9[4];
                uVar3 = uVar3 + 1;
                *puVar2 = *puVar9;
                puVar2[1] = uVar11;
                puVar2[2] = uVar12;
                puVar2[3] = uVar13;
                puVar2[4] = uVar14;
              } while ((int)uVar3 < *(int *)(param_1 + 0x1d0) + -1);
            }
          }
          else {
            objStack_48[1] = (uint)(ushort)puVar6[2];
            if (*(int *)(iVar4 + 0x5c) < (int)objStack_48[1]) goto LAB_0014b928;
            objStack_48[6] = 8;
            objStack_48[5] = 0;
            objStack_48[3] = DAT_0014bdd0;
            objStack_48[4] = 0x500;
            objStack_48[2] = (uint)*(ushort *)((int)puVar6 + 10);
            objStack_48[0] = *puVar6;
            func_005FF018(*puVar2,*(int *)(iVar4 + 0x5c),*(int *)(iVar4 + 0x60),DAT_0014bdd0,
                          objStack_48[0],objStack_48[1],objStack_48[2],DAT_0014bdd0,0x500,0,8);
            iVar4 = *(int *)(param_1 + 0x1d0);
            if (((iVar4 < 1) || ((int)unaff_r5 < 0)) || (iVar4 <= (int)unaff_r5)) goto LAB_0014ba38;
            uVar3 = unaff_r5;
            if ((int)unaff_r5 < iVar4 + -1) {
              do {
                iVar5 = *(int *)(param_1 + 0x1c8);
                iVar4 = *(int *)(param_1 + 0x1cc) + uVar3;
                if (iVar5 <= iVar4) {
                  iVar4 = iVar4 - iVar5;
                }
                iVar8 = uVar3 + 1 + *(int *)(param_1 + 0x1cc);
                if (iVar5 <= iVar8) {
                  iVar8 = iVar8 - iVar5;
                }
                puVar9 = (undefined4 *)(*(int *)(param_1 + 0x1c4) + iVar8 * 0x14);
                puVar2 = (undefined4 *)(*(int *)(param_1 + 0x1c4) + iVar4 * 0x14);
                uVar11 = puVar9[1];
                uVar12 = puVar9[2];
                uVar13 = puVar9[3];
                uVar14 = puVar9[4];
                uVar3 = uVar3 + 1;
                *puVar2 = *puVar9;
                puVar2[1] = uVar11;
                puVar2[2] = uVar12;
                puVar2[3] = uVar13;
                puVar2[4] = uVar14;
              } while ((int)uVar3 < *(int *)(param_1 + 0x1d0) + -1);
            }
          }
          *(int *)(param_1 + 0x1d0) = *(int *)(param_1 + 0x1d0) + -1;
        }
        else {
          unaff_r5 = unaff_r5 + 1;
        }
LAB_0014ba38:
      } while ((int)unaff_r5 < *(int *)(param_1 + 0x1d0));
    }
    if ((*(char *)(param_1 + 0x211) == '\0') && ((*(uint *)(param_1 + 0x220) & 2) == 0)) {
      func_0012EA48(*DAT_0014bdd4);
    }
    if ((*(uint *)(param_1 + 0x220) & 2) == 0) {
      func_00132784(objStack_48[7],2);
    }
    if ((*(uint *)(param_1 + 0x218) & 4) == 0) {
      func_002E39E8(*DAT_0014bddc,3,(undefined4 *)0x1);
    }
    iVar4 = *(int *)(param_1 + 0x1d0);
    piVar7 = (int *)(param_1 + 0x200);
    if (0 < iVar4) {
      piVar7 = DAT_0014bdcc;
    }
    if (iVar4 != 0) {
      unaff_r5 = 0;
    }
    if (0 < iVar4) {
      do {
        if (unaff_r5 < *(uint *)(param_1 + 0x1d0)) {
          iVar4 = *(int *)(param_1 + 0x1cc) + unaff_r5;
          if (*(int *)(param_1 + 0x1c8) <= iVar4) {
            iVar4 = iVar4 - *(int *)(param_1 + 0x1c8);
          }
          puVar6 = (uint *)(*(int *)(param_1 + 0x1c4) + iVar4 * 0x14);
        }
        else {
          puVar6 = *(uint **)(param_1 + 0x1c4);
        }
        cVar1 = (char)puVar6[3];
        bVar10 = cVar1 == '\x01';
        if (bVar10) {
          cVar1 = *(char *)((int)puVar6 + 0xd);
        }
        if (bVar10 && cVar1 == '\x02') {
          *(undefined1 *)puVar6[4] = 1;
          iVar4 = *piVar7;
          puVar2 = (undefined4 *)(iVar4 + 0x1c);
          if (*(char *)((int)puVar6 + 0xe) == '\0') {
LAB_0014bc34:
            iVar5 = *(int *)(iVar4 + 0x24);
            objStack_48[1] = ((uint)(ushort)puVar6[2] - iVar5) * 0x10;
            objStack_48[0] = iVar5 * *(int *)(iVar4 + 0x28) * 2;
            objStack_48[2] = objStack_48[0];
            if (objStack_48[1] == 0) {
              objStack_48[1] = 0;
              func_005FF064(*puVar2,objStack_48[0],0,*puVar6,objStack_48[0],0,objStack_48[0]);
            }
            else {
              objStack_48[0] = iVar5 << 4;
              func_005FF064(*puVar2,objStack_48[2],0,*puVar6,iVar5 << 4,objStack_48[1],
                            objStack_48[2]);
            }
            if (*(char *)((int)puVar6 + 0xe) != '\0') {
              objStack_48[6] = 8;
              objStack_48[3] = DAT_0014bdd0;
              objStack_48[4] = 0x500;
              objStack_48[5] = 0;
              objStack_48[0] = puVar6[1];
              objStack_48[2] = (uint)*(ushort *)((int)puVar6 + 10);
              objStack_48[1] = (uint)(ushort)puVar6[2];
              func_005FF018(*puVar6,objStack_48[1],objStack_48[2],DAT_0014bdd0,objStack_48[0],
                            objStack_48[1],objStack_48[2],DAT_0014bdd0,0x500,0,8);
            }
            iVar4 = *(int *)(param_1 + 0x1d0);
            if (((iVar4 < 1) || ((int)unaff_r5 < 0)) || (iVar4 <= (int)unaff_r5)) goto LAB_0014bd40;
            uVar3 = unaff_r5;
            if ((int)unaff_r5 < iVar4 + -1) {
              do {
                iVar5 = *(int *)(param_1 + 0x1c8);
                iVar4 = *(int *)(param_1 + 0x1cc) + uVar3;
                if (iVar5 <= iVar4) {
                  iVar4 = iVar4 - iVar5;
                }
                iVar8 = uVar3 + 1 + *(int *)(param_1 + 0x1cc);
                if (iVar5 <= iVar8) {
                  iVar8 = iVar8 - iVar5;
                }
                puVar9 = (undefined4 *)(*(int *)(param_1 + 0x1c4) + iVar8 * 0x14);
                puVar2 = (undefined4 *)(*(int *)(param_1 + 0x1c4) + iVar4 * 0x14);
                uVar11 = puVar9[1];
                uVar12 = puVar9[2];
                uVar13 = puVar9[3];
                uVar14 = puVar9[4];
                uVar3 = uVar3 + 1;
                *puVar2 = *puVar9;
                puVar2[1] = uVar11;
                puVar2[2] = uVar12;
                puVar2[3] = uVar13;
                puVar2[4] = uVar14;
              } while ((int)uVar3 < *(int *)(param_1 + 0x1d0) + -1);
            }
          }
          else {
            objStack_48[1] = (uint)(ushort)puVar6[2];
            if (*(int *)(iVar4 + 0x5c) < (int)objStack_48[1]) goto LAB_0014bc34;
            objStack_48[6] = 8;
            objStack_48[5] = 0;
            objStack_48[3] = DAT_0014bdd0;
            objStack_48[4] = 0x500;
            objStack_48[2] = (uint)*(ushort *)((int)puVar6 + 10);
            objStack_48[0] = *puVar6;
            func_005FF018(*puVar2,*(int *)(iVar4 + 0x5c),*(int *)(iVar4 + 0x60),DAT_0014bdd0,
                          objStack_48[0],objStack_48[1],objStack_48[2],DAT_0014bdd0,0x500,0,8);
            iVar4 = *(int *)(param_1 + 0x1d0);
            if (((iVar4 < 1) || ((int)unaff_r5 < 0)) || (iVar4 <= (int)unaff_r5)) goto LAB_0014bd40;
            uVar3 = unaff_r5;
            if ((int)unaff_r5 < iVar4 + -1) {
              do {
                iVar5 = *(int *)(param_1 + 0x1c8);
                iVar4 = *(int *)(param_1 + 0x1cc) + uVar3;
                if (iVar5 <= iVar4) {
                  iVar4 = iVar4 - iVar5;
                }
                iVar8 = uVar3 + 1 + *(int *)(param_1 + 0x1cc);
                if (iVar5 <= iVar8) {
                  iVar8 = iVar8 - iVar5;
                }
                puVar9 = (undefined4 *)(*(int *)(param_1 + 0x1c4) + iVar8 * 0x14);
                puVar2 = (undefined4 *)(*(int *)(param_1 + 0x1c4) + iVar4 * 0x14);
                uVar11 = puVar9[1];
                uVar12 = puVar9[2];
                uVar13 = puVar9[3];
                uVar14 = puVar9[4];
                uVar3 = uVar3 + 1;
                *puVar2 = *puVar9;
                puVar2[1] = uVar11;
                puVar2[2] = uVar12;
                puVar2[3] = uVar13;
                puVar2[4] = uVar14;
              } while ((int)uVar3 < *(int *)(param_1 + 0x1d0) + -1);
            }
          }
          *(int *)(param_1 + 0x1d0) = *(int *)(param_1 + 0x1d0) + -1;
        }
        else {
          unaff_r5 = unaff_r5 + 1;
        }
LAB_0014bd40:
      } while ((int)unaff_r5 < *(int *)(param_1 + 0x1d0));
    }
    *(undefined4 *)(param_1 + 0x1d0) = 0;
    *(undefined4 *)(param_1 + 0x1cc) = 0;
  }
  if ((*(uint *)(param_1 + 0x220) & 0x20) == 0) {
    objStack_48[1] = *(uint *)(param_1 + 0x1b8);
    objStack_48[0] = CONCAT31((*(undefined4 *)((char *)&objStack_48[0] + 1) & 0xFFFFFF),2);
    func_0014A40C(*(int *)(param_1 + 0x1bc),(char *)objStack_48);
  }
  func_0014B3D8(param_1,0);
  func_0012E00C(*DAT_0014bdd4);
  *(undefined4 *)(param_1 + 0x1b8) = 0;
  return;
}

