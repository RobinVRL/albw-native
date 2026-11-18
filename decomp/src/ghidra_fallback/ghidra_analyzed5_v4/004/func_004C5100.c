#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_0010983C(undefined4 param_1,undefined4 param_2);
extern int func_0010F1DC(int *param_1,int *param_2);
extern void func_0010F1F8(int *param_1,float fparam_0);
extern undefined8 func_001163A0(uint *param_1,uint *param_2,uint param_3);
extern int func_004C4674(int param_1);
extern int func_004C4884(int param_1,int *param_2,undefined1 param_3);
extern int func_00547AE8(int param_1);
extern int func_00588BE4(int param_1);
extern int func_0058FBB8(undefined4 *param_1,undefined4 *param_2);
extern int *DAT_004c58b0;
extern uint *DAT_004c58b4;
extern undefined4 *DAT_004c58b8;
extern undefined4 DAT_004c58bc;
extern int *DAT_004c58c0;
extern undefined4 *DAT_004c58c4;

// USA 004C5100 <- EU 004C50D8 (Ghidra, non-matching)
// GLOBAL DAT_004c58b0 int *
// GLOBAL DAT_004c58b4 uint *
// GLOBAL DAT_004c58b8 undefined4 *
// GLOBAL DAT_004c58bc undefined4
// GLOBAL DAT_004c58c0 int *
// GLOBAL DAT_004c58c4 undefined4 *

void func_004C5100(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int *piVar7;
  int iVar8;
  undefined4 *puVar9;
  int *piVar10;
  int *unaff_r5;
  int iVar11;
  undefined1 uVar12;
  int iVar13;
  bool bVar14;
  float in_s0;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  int local_54;
  int local_44;
  int local_40;
  
  func_004C4674(param_1);
  bVar14 = false;
  bVar1 = false;
  iVar2 = *DAT_004c58b0;
  if (iVar2 != 0) {
    unaff_r5 = *(int **)(iVar2 + 0x44);
  }
  if (iVar2 != 0 && unaff_r5 != (int *)0x0) {
    if (((*DAT_004c58b4 & 1) == 0) && (iVar2 = func_00100174((int *)DAT_004c58b4), iVar2 != 0)) {
      *DAT_004c58b8 = DAT_004c58bc;
    }
    iVar2 = (**(code **)(*unaff_r5 + 8))(unaff_r5,DAT_004c58b8);
    if (iVar2 == 0) {
      unaff_r5 = (int *)0x0;
    }
    if (unaff_r5 != (int *)0x0) {
      bVar14 = (char)unaff_r5[0x1f] == '\x02';
      if ((!bVar14) && ((char)unaff_r5[0x1f] == '\x03')) {
        bVar14 = true;
        bVar1 = bVar14;
      }
    }
  }
  if ((*(char *)(*DAT_004c58c0 + 0x25) == '\x03') || (bVar14)) {
    iVar2 = *(int *)(param_1 + 0x34);
    if (0 < iVar2) {
      local_40 = 0;
      local_54 = iVar2;
      if (bVar1) {
        iVar13 = 0;
        local_44 = 0;
        do {
          iVar3 = *(int *)(param_1 + 0x30) + iVar13;
          if (*(int *)(param_1 + 0x2c) <= iVar3) {
            iVar3 = iVar3 - *(int *)(param_1 + 0x2c);
          }
          iVar3 = func_00547AE8(*(int *)(param_1 + 0x28) + iVar3 * 0x2c4);
          if (iVar3 == 0) {
            iVar13 = iVar13 + 1;
          }
          else {
            iVar3 = *(int *)(param_1 + 0x30) + iVar13;
            if (*(int *)(param_1 + 0x2c) <= iVar3) {
              iVar3 = iVar3 - *(int *)(param_1 + 0x2c);
            }
            iVar3 = func_004C4884(param_1,(int *)(*(int *)(param_1 + 0x28) + iVar3 * 0x2c4),0);
            if (iVar3 != 0) {
              func_0010F1DC((int *)(param_1 + 0x3db8c),(int *)(*(int *)(param_1 + 0x3db98) + iVar3))
              ;
              *(int *)(param_1 + 0x3db94) = *(int *)(param_1 + 0x3db94) + 1;
            }
            iVar3 = *(int *)(param_1 + 0x34);
            if (0 < iVar3) {
              bVar14 = iVar13 == 0;
              if (-1 < iVar13) {
                bVar14 = iVar3 == iVar13;
              }
              if (!bVar14 && (-1 < iVar13 && iVar13 <= iVar3)) {
                iVar11 = iVar13;
                if (iVar13 < iVar3 + -1) {
                  do {
                    iVar8 = *(int *)(param_1 + 0x2c);
                    iVar3 = *(int *)(param_1 + 0x30) + iVar11;
                    iVar5 = iVar11 + 1 + *(int *)(param_1 + 0x30);
                    if (iVar8 <= iVar3) {
                      iVar3 = iVar3 - iVar8;
                    }
                    if (iVar8 <= iVar5) {
                      iVar5 = iVar5 - iVar8;
                    }
                    puVar6 = (undefined4 *)(*(int *)(param_1 + 0x28) + iVar5 * 0x2c4);
                    puVar9 = (undefined4 *)(*(int *)(param_1 + 0x28) + iVar3 * 0x2c4);
                    *puVar9 = *puVar6;
                    puVar9[1] = puVar6[1];
                    puVar9[2] = puVar6[2];
                    puVar9[3] = puVar6[3];
                    puVar9[4] = puVar6[4];
                    puVar9[5] = puVar6[5];
                    puVar9[6] = puVar6[6];
                    puVar9[7] = puVar6[7];
                    puVar9[8] = puVar6[8];
                    puVar9[9] = puVar6[9];
                    uVar15 = puVar6[0xb];
                    puVar9[10] = puVar6[10];
                    puVar9[0xb] = uVar15;
                    *(undefined2 *)(puVar9 + 0xc) = *(undefined2 *)(puVar6 + 0xc);
                    *(undefined4 *)((int)puVar9 + 0x32) = *(undefined4 *)((int)puVar6 + 0x32);
                    *(undefined2 *)((int)puVar9 + 0x36) = *(undefined2 *)((int)puVar6 + 0x36);
                    puVar9[0xe] = puVar6[0xe];
                    *(undefined2 *)(puVar9 + 0xf) = *(undefined2 *)(puVar6 + 0xf);
                    func_0058FBB8((undefined4 *)((int)puVar9 + 0x3e),
                                  (undefined4 *)((int)puVar6 + 0x3e));
                    puVar9[0x11] = puVar6[0x11];
                    puVar9[0x12] = puVar6[0x12];
                    puVar9[0x13] = puVar6[0x13];
                    *(undefined2 *)(puVar9 + 0x14) = *(undefined2 *)(puVar6 + 0x14);
                    *(undefined2 *)((int)puVar9 + 0x52) = *(undefined2 *)((int)puVar6 + 0x52);
                    *(undefined2 *)(puVar9 + 0x15) = *(undefined2 *)(puVar6 + 0x15);
                    *(undefined2 *)((int)puVar9 + 0x56) = *(undefined2 *)((int)puVar6 + 0x56);
                    *(undefined1 *)(puVar9 + 0x16) = *(undefined1 *)(puVar6 + 0x16);
                    *(undefined1 *)((int)puVar9 + 0x59) = *(undefined1 *)((int)puVar6 + 0x59);
                    func_001163A0((uint *)((int)puVar9 + 0x5a),(uint *)((int)puVar6 + 0x5a),0x240);
                    iVar11 = iVar11 + 1;
                    in_s0 = ALBW_AS_F32(puVar6[0xa7]);
                    uVar15 = puVar6[0xa8];
                    uVar16 = puVar6[0xa9];
                    uVar17 = puVar6[0xaa];
                    uVar18 = puVar6[0xab];
                    uVar19 = puVar6[0xac];
                    uVar20 = puVar6[0xad];
                    uVar21 = puVar6[0xae];
                    puVar9[0xa7] = ALBW_AS_U32(in_s0);
                    puVar9[0xa8] = uVar15;
                    puVar9[0xa9] = uVar16;
                    puVar9[0xaa] = uVar17;
                    puVar9[0xab] = uVar18;
                    puVar9[0xac] = uVar19;
                    puVar9[0xad] = uVar20;
                    puVar9[0xae] = uVar21;
                    puVar9[0xaf] = puVar6[0xaf];
                    puVar9[0xb0] = puVar6[0xb0];
                  } while (iVar11 < *(int *)(param_1 + 0x34) + -1);
                }
                *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + -1;
              }
            }
            local_54 = local_54 + -1;
            local_40 = local_40 + 1;
          }
          local_44 = local_44 + 1;
        } while (local_44 < iVar2);
        if (0 < local_40) goto LAB_004c55e0;
      }
      iVar2 = 0;
      if (*(char *)(*DAT_004c58c0 + 0x25) == '\x03') {
        local_40 = 3 - local_40;
      }
      else {
        local_40 = 8 - local_40;
      }
      if (local_54 < local_40) {
        local_40 = local_54;
      }
      if (0 < local_40) {
        do {
          iVar13 = *(int *)(param_1 + 0x30);
          if (*(int *)(param_1 + 0x2c) <= iVar13) {
            iVar13 = iVar13 - *(int *)(param_1 + 0x2c);
          }
          iVar13 = func_004C4884(param_1,(int *)(*(int *)(param_1 + 0x28) + iVar13 * 0x2c4),0);
          if (iVar13 != 0) {
            func_0010F1DC((int *)(param_1 + 0x3db8c),(int *)(*(int *)(param_1 + 0x3db98) + iVar13));
            *(int *)(param_1 + 0x3db94) = *(int *)(param_1 + 0x3db94) + 1;
          }
          if (0 < *(int *)(param_1 + 0x34)) {
            iVar13 = *(int *)(param_1 + 0x30) + 1;
            *(int *)(param_1 + 0x30) = iVar13;
            if (*(int *)(param_1 + 0x2c) <= iVar13) {
              *(undefined4 *)(param_1 + 0x30) = 0;
            }
            *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + -1;
          }
          iVar2 = iVar2 + 1;
        } while (iVar2 < local_40);
      }
    }
  }
  else {
    iVar2 = 0;
    if (*(int *)(param_1 + 0x34) != 0) {
      do {
        iVar13 = *(int *)(param_1 + 0x30) + iVar2;
        if (*(int *)(param_1 + 0x2c) <= iVar13) {
          iVar13 = iVar13 - *(int *)(param_1 + 0x2c);
        }
        iVar13 = func_004C4884(param_1,(int *)(*(int *)(param_1 + 0x28) + iVar13 * 0x2c4),0);
        if (iVar13 != 0) {
          func_0010F1DC((int *)(param_1 + 0x3db8c),(int *)(*(int *)(param_1 + 0x3db98) + iVar13));
          *(int *)(param_1 + 0x3db94) = *(int *)(param_1 + 0x3db94) + 1;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 != *(int *)(param_1 + 0x34));
    }
    *(undefined4 *)(param_1 + 0x34) = 0;
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
LAB_004c55e0:
  piVar7 = (int *)((param_1 + 0x3db8c) - *(int *)(param_1 + 0x3db98));
  iVar2 = *(int *)(param_1 + 0x3db98);
  piVar10 = (int *)(*(int *)(param_1 + 0x3db90) - iVar2);
  iVar13 = *(int *)((int)piVar10 + iVar2 + 4);
  if (piVar10 != piVar7) {
    do {
      if (*(char *)((int)piVar10 + 0x2d6) == '\0') {
        if (piVar10[0xb2] == 0) {
          iVar3 = 1;
        }
        else {
          iVar3 = func_0010983C(*DAT_004c58c4,piVar10[0xb2]);
        }
        iVar11 = piVar10[0xb3];
        *(int *)(param_1 + 0x3dbdc) = piVar10[1];
        *(int *)(param_1 + 0x3dbe0) = iVar11;
        (**(code **)(*piVar10 + 0x14))(piVar10);
        *(int *)(param_1 + 0x3dbdc) = 0;
        *(undefined4 *)(param_1 + 0x3dbe0) = 0;
        (**(code **)(*piVar10 + 8))(piVar10);
        if (iVar3 != 1) {
          func_0010983C(*DAT_004c58c4,iVar3);
        }
      }
      func_0010F1F8((int *)(*(int *)(param_1 + 0x3db98) + (int)piVar10),in_s0);
      *(int *)(param_1 + 0x3db94) = *(int *)(param_1 + 0x3db94) + -1;
      if (*(char *)((int)piVar10 + 0x2d7) == '\0') {
        iVar11 = func_00588BE4((int)piVar10);
        iVar5 = *(int *)(param_1 + 0x3dbb8);
        iVar8 = *(int *)(param_1 + 0x3dbb8);
        for (iVar3 = *(int *)(param_1 + 0x3dbb0) - iVar8; iVar3 != (param_1 + 0x3dbac) - iVar5;
            iVar3 = *(int *)(iVar3 + iVar8 + 4) - iVar8) {
          iVar4 = func_00588BE4(iVar3);
          if (iVar11 <= iVar4) {
            func_0010F1DC((int *)(*(int *)(param_1 + 0x3dbb8) + iVar3),
                          (int *)(*(int *)(param_1 + 0x3dbb8) + (int)piVar10));
            *(int *)(param_1 + 0x3dbb4) = *(int *)(param_1 + 0x3dbb4) + 1;
            goto LAB_004c57ac;
          }
        }
        func_0010F1DC((int *)(param_1 + 0x3dbac),(int *)(*(int *)(param_1 + 0x3dbb8) + (int)piVar10)
                     );
        *(int *)(param_1 + 0x3dbb4) = *(int *)(param_1 + 0x3dbb4) + 1;
      }
      else {
        func_0010F1DC((int *)(param_1 + 0x3db9c),(int *)(*(int *)(param_1 + 0x3dba8) + (int)piVar10)
                     );
        *(int *)(param_1 + 0x3dba4) = *(int *)(param_1 + 0x3dba4) + 1;
      }
LAB_004c57ac:
      piVar10 = (int *)(iVar13 - iVar2);
      iVar13 = *(int *)(iVar13 + 4);
    } while (piVar10 != piVar7);
  }
  iVar13 = *(int *)(param_1 + 0x3dbb8);
  piVar10 = (int *)((param_1 + 0x3dbac) - *(int *)(param_1 + 0x3dbb8));
  piVar7 = (int *)(*(int *)(param_1 + 0x3dbb0) - iVar13);
  iVar2 = *(int *)((int)piVar7 + iVar13 + 4);
  if (piVar7 != piVar10) {
    do {
      if (*(char *)((int)piVar7 + 0x2d7) == '\0') {
        uVar12 = 0;
        iVar3 = (**(code **)(*piVar7 + 0x18))(piVar7);
        if (iVar3 != 0) {
          (**(code **)(*piVar7 + 0x1c))(piVar7);
          if (*(char *)((int)piVar7 + 0x2d7) == '\0') {
            uVar12 = 2;
          }
          else {
            uVar12 = 1;
          }
        }
        (**(code **)(*piVar7 + 0x20))(piVar7,uVar12);
      }
      if (*(char *)((int)piVar7 + 0x2d7) != '\0') {
        func_0010F1F8((int *)(*(int *)(param_1 + 0x3dbb8) + (int)piVar7),in_s0);
        *(int *)(param_1 + 0x3dbb4) = *(int *)(param_1 + 0x3dbb4) + -1;
        func_0010F1DC((int *)(param_1 + 0x3db9c),(int *)(*(int *)(param_1 + 0x3dba8) + (int)piVar7))
        ;
        *(int *)(param_1 + 0x3dba4) = *(int *)(param_1 + 0x3dba4) + 1;
      }
      piVar7 = (int *)(iVar2 - iVar13);
      iVar2 = *(int *)(iVar2 + 4);
    } while (piVar7 != piVar10);
  }
  return;
}

