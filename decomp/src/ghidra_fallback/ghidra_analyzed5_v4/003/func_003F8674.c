#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_00110490(undefined4 *param_1,uint param_2);
extern ulonglong func_00110710(uint param_1,uint param_2);
extern int func_001139F8(int param_1);
extern undefined8 func_001163A0(uint *param_1,uint *param_2,uint param_3);
extern int func_003CD2EC(undefined4 *param_1);
extern int func_003E35DC(undefined4 param_1,undefined4 param_2);
extern int func_003EEF24(uint *param_1,uint param_2,uint *param_3,uint *param_4,uint *param_5);
extern int func_003EEF68(int param_1);
extern int func_003F41C8(int param_1,int param_2,char *param_3);
extern int func_003F41E0(undefined4 *param_1);
extern int func_003F9AA4(int param_1,int param_2,int param_3,undefined4 param_4,int param_5,int param_6);
extern undefined4 DAT_003f8bb0;
extern undefined4 DAT_003f8bb4;
extern undefined *DAT_003f8bb8;
extern undefined *DAT_003f8bbc;
extern undefined4 DAT_003f8bc0;
extern undefined4 DAT_003f9514;

// USA 003F8674 <- EU 003F8654 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 int
// PARAM param_6 Stack[0x4]:4 undefined1 *
// GLOBAL DAT_003f8bb0 undefined4
// GLOBAL DAT_003f8bb4 undefined4
// GLOBAL DAT_003f8bb8 undefined *
// GLOBAL DAT_003f8bbc undefined *
// GLOBAL DAT_003f8bc0 undefined4
// GLOBAL DAT_003f9514 undefined4

void func_003F8674(int param_1,int *param_2,int param_3,undefined4 param_4,int param_5,
                  undefined1 *param_6)

{
  uint *puVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  undefined2 *puVar9;
  int *piVar10;
  int *piVar11;
  uint uVar12;
  uint uVar13;
  uint *puVar14;
  uint uVar15;
  undefined4 *puVar16;
  undefined2 *puVar17;
  int iVar18;
  int iVar19;
  uint *puVar20;
  undefined4 *puVar21;
  uint uVar22;
  uint uVar23;
  uint *puVar24;
  undefined1 *puVar25;
  char *pcVar26;
  uint *puVar27;
  int *piVar28;
  uint uVar29;
  uint *puVar30;
  undefined4 *puVar31;
  bool bVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  int local_58;
  
  *(int *)(param_1 + 4) = param_5;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(int **)(param_1 + 0x1c) = param_2;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 8) = param_4;
  *(int *)(param_1 + 0xc) = param_3;
  *(int *)(param_1 + 0x10) = *(int *)(param_3 + 0x10) + param_3;
  *(int *)(param_1 + 0x14) = *(int *)(param_3 + 0x14) + param_3;
  if (*(int *)(param_3 + 8) != 0) {
    if (param_6 == (undefined1 *)0x0) {
      *(char *)(param_1 + 0x30) = (char)*(undefined4 *)(param_5 + 0x4e4);
      *(char *)(param_1 + 0x31) = (char)*(undefined4 *)(param_5 + 0x4e8);
      uVar3 = *(undefined4 *)(param_5 + 0x4f0);
    }
    else {
      *(undefined1 *)(param_1 + 0x30) = *param_6;
      *(undefined1 *)(param_1 + 0x31) = param_6[1];
      uVar3 = *(undefined4 *)(param_6 + 4);
    }
    *(undefined4 *)(param_1 + 0x34) = uVar3;
    piVar11 = (int *)(*(int *)(param_3 + 0x1c) + param_3);
    iVar4 = *piVar11;
    iVar18 = piVar11[4];
    *(int *)(param_1 + 0x24) = iVar4;
    uVar3 = (**(code **)(*param_2 + 8))(param_2,iVar4 << 2,0x80);
    *(undefined4 *)(param_1 + 0x20) = uVar3;
    uVar22 = 0;
    pcVar26 = (char *)(iVar18 + (int)piVar11);
    if (*(int *)(param_1 + 0x24) != 0) {
      do {
        puVar5 = (undefined4 *)(**(code **)(*param_2 + 8))(param_2,0x10,0x80);
        puVar6 = (undefined4 *)0x0;
        if (puVar5 != (undefined4 *)0x0) {
          puVar6 = func_003F41E0(puVar5);
        }
        *(undefined4 **)(*(int *)(param_1 + 0x20) + uVar22 * 4) = puVar6;
        func_003F41C8((int)puVar6,
                      (int)((char *)(iVar18 + (int)piVar11) +
                           *(int *)(pcVar26 + 0x20) + iVar4 * 0x2c),pcVar26);
        uVar22 = uVar22 + 1;
        pcVar26 = pcVar26 + 0x2c;
      } while (uVar22 < *(uint *)(param_1 + 0x24));
    }
    piVar11 = (int *)(*(int *)(*(int *)(param_1 + 0xc) + 0x2c) + param_3);
    iVar19 = piVar11[2];
    iVar18 = *piVar11;
    *(int *)(param_1 + 0x2c) = iVar18;
    iVar4 = iVar18 * 0x50 + iVar19;
    if (iVar18 != 0) {
      uVar3 = (**(code **)(*param_2 + 8))(param_2,iVar18 << 2,0x80);
      *(undefined4 *)(param_1 + 0x28) = uVar3;
      uVar22 = 0;
      if (*(int *)(param_1 + 0x2c) != 0) {
        uVar33 = CONCAT44(DAT_003f8bb4,DAT_003f8bb0);
        do {
          iVar7 = (**(code **)(*param_2 + 8))(param_2,0x810,0x80);
          iVar18 = 0;
          if (iVar7 != 0) {
            *(undefined4 *)(iVar7 + 8) = 0;
            *(undefined4 *)(iVar7 + 0xc) = 0;
            *(undefined4 *)(iVar7 + 0x10) = 0;
            *(undefined4 *)(iVar7 + 0x14) = 0;
            *(undefined4 *)(iVar7 + 0x18) = 0;
            *(undefined4 *)(iVar7 + 0x1c) = 0;
            *(undefined4 *)(iVar7 + 0x20) = 0;
            *(undefined4 *)(iVar7 + 0x24) = 0;
            *(undefined4 *)(iVar7 + 0x28) = 0;
            *(undefined4 *)(iVar7 + 0x2c) = 0;
            *(undefined4 *)(iVar7 + 0x30) = 0;
            *(undefined4 *)(iVar7 + 0x34) = 0;
            *(undefined4 *)(iVar7 + 0x38) = 0;
            *(undefined4 *)(iVar7 + 0x3c) = 0;
            *(undefined4 *)(iVar7 + 0x40) = 0;
            *(undefined4 *)(iVar7 + 0x44) = 0;
            *(undefined4 *)(iVar7 + 0x48) = 0;
            *(undefined4 *)(iVar7 + 0x4c) = 0;
            *(undefined4 *)(iVar7 + 0x50) = 0;
            *(undefined4 *)(iVar7 + 0x54) = 0;
            iVar18 = func_00100118(iVar7 + 0x1c8,DAT_003f8bb8,0x70,0xc);
            iVar7 = func_00100118(iVar18 + 0x540,DAT_003f8bbc,0x14,0xc);
            iVar18 = iVar7 + -0x6a0;
            *(undefined4 *)(iVar7 + -0x6a0) = 0;
            func_00110490((undefined4 *)(iVar7 + -0x69c),0x150);
            uVar29 = 0;
            do {
              *(undefined1 *)(iVar18 + uVar29 + 0x154) = 0;
              func_003CD2EC((undefined4 *)(iVar18 + uVar29 * 0x70 + 0x160));
              uVar23 = uVar29 + 1;
              iVar8 = iVar18 + uVar29 * 0x14;
              *(undefined1 *)(iVar8 + 0x6a0) = 0;
              uVar3 = (undefined4)uVar33;
              *(undefined4 *)(iVar8 + 0x6a4) = uVar3;
              *(undefined4 *)(iVar8 + 0x6a8) = uVar3;
              *(undefined4 *)(iVar8 + 0x6ac) = uVar3;
              *(undefined4 *)(iVar8 + 0x6b0) = uVar3;
              uVar29 = uVar23;
            } while (uVar23 < 0xc);
            *(undefined4 *)(iVar7 + 0xf0) = 0;
            *(undefined4 *)(iVar7 + 0xf4) = 0;
            *(undefined1 *)(iVar7 + 0xf8) = 0;
            *(undefined1 *)(iVar7 + -0x708) = 0;
            *(undefined4 *)(iVar7 + -0x704) = 0;
            *(undefined4 *)(iVar7 + -0x6b0) = 0;
            *(undefined4 *)(iVar7 + -0x6ac) = 0;
            *(undefined4 *)(iVar7 + -0x6a8) = 0;
            *(undefined4 *)(iVar7 + -0x6a4) = 0;
            *(undefined4 *)(iVar7 + 0xfc) = 0;
            *(undefined1 *)(iVar7 + 0x100) = 0;
            *(undefined1 *)(iVar7 + 0x101) = 0;
            iVar18 = iVar7 + -0x708;
            *(undefined4 *)(iVar7 + 0x104) = 0;
          }
          puVar27 = (uint *)0x0;
          puVar24 = (uint *)((int)piVar11 + uVar22 * 0x50 + iVar19);
          *(int *)(*(int *)(param_1 + 0x28) + uVar22 * 4) = iVar18;
          puVar20 = (uint *)((int)piVar11 + puVar24[10] + iVar4);
          puVar14 = (uint *)((int)piVar11 + puVar24[0x12] + iVar4);
          uVar29 = 0;
          puVar30 = (uint *)((int)piVar11 + puVar24[2] + iVar4);
          if (puVar24[6] != 0) {
            puVar27 = (uint *)((int)piVar11 + puVar24[6] + iVar4);
            uVar29 = puVar24[5];
            uVar34 = func_00110710(puVar24[4],uVar29);
            uVar35 = func_00110710(*puVar24,puVar24[1]);
            if (((int)uVar34 == 1) && ((int)uVar35 != 1)) {
              uVar29 = uVar29 * (int)uVar35 * 4;
              *(undefined1 *)(iVar18 + 0x809) = 1;
            }
            else {
              uVar29 = puVar24[7];
            }
          }
          cVar2 = *(char *)(param_1 + 0x31);
          if (cVar2 != '\x01' && cVar2 != '\x02') {
            cVar2 = '\0';
          }
          *(char *)(*(int *)(*(int *)(param_1 + 0x28) + uVar22 * 4) + 0x808) = cVar2;
          bVar32 = puVar30 != (uint *)0x0;
          *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x28) + uVar22 * 4) + 0x80c) =
               *(undefined4 *)(param_1 + 0x34);
          uVar23 = puVar24[0x10];
          uVar12 = puVar24[3];
          uVar15 = puVar24[0xb];
          uVar13 = puVar24[0x13];
          puVar25 = (undefined1 *)(*(uint **)(param_1 + 0x28))[uVar22];
          puVar24 = *(uint **)(param_1 + 0x28);
          if (bVar32) {
            puVar24 = puVar20;
          }
          puVar1 = puVar24;
          if (bVar32 && puVar24 != (uint *)0x0) {
            puVar1 = puVar14;
          }
          if ((bVar32 && puVar24 != (uint *)0x0) && puVar1 != (uint *)0x0) {
            *puVar25 = 1;
            *(uint *)(puVar25 + 4) = uVar23;
            *(uint *)(puVar25 + 0x10) = uVar12;
            uVar3 = 3;
            puVar24 = (uint *)(**(code **)(*param_2 + 8))(param_2,uVar12,0x80);
            *(uint **)(puVar25 + 0x14) = puVar24;
            *(undefined4 *)(puVar25 + 0xc) = uVar3;
            func_001163A0(puVar24,puVar30,uVar12);
            if ((byte)puVar25[0x808] == 0) {
              *(uint **)(puVar25 + 0x58) = puVar24;
            }
            else {
              *(undefined4 *)(puVar25 + 0x18) = 0;
              iVar18 = func_003F9AA4(*(int *)(puVar25 + 0x14),*(int *)(puVar25 + 0x10),
                                     (uint)(byte)puVar25[0x808],DAT_003f8bc0,
                                     *(int *)(puVar25 + 0x80c),0);
              *(int *)(puVar25 + 0x18) = iVar18;
              if (iVar18 == *(int *)(puVar25 + 0x14)) {
                *(undefined4 *)(puVar25 + 0x18) = 0;
                iVar18 = *(int *)(puVar25 + 0x14);
              }
              *(int *)(puVar25 + 0x58) = iVar18;
            }
            if (*(int *)(puVar25 + 0x14) != 0) {
              func_003E35DC(*(int *)(puVar25 + 0x14),*(undefined4 *)(puVar25 + 0x10));
            }
            if (puVar27 == (uint *)0x0) {
              *(int *)(puVar25 + 0x24) = *(int *)(puVar25 + 4) << 4;
              puVar6 = (undefined4 *)
                       (**(code **)(*param_2 + 8))(param_2,*(int *)(puVar25 + 4) << 4,0x80);
              *(undefined4 **)(puVar25 + 0x28) = puVar6;
              *(undefined4 *)(puVar25 + 0x20) = 4;
              iVar18 = *(int *)(puVar25 + 4);
              if (iVar18 != 0) {
                puVar16 = puVar6 + 1;
                puVar21 = puVar6 + 2;
                puVar31 = puVar6 + 3;
                puVar5 = puVar6;
                do {
                  uVar3 = (undefined4)((ulonglong)uVar33 >> 0x20);
                  *puVar5 = uVar3;
                  *puVar16 = uVar3;
                  *puVar21 = uVar3;
                  *puVar31 = uVar3;
                  iVar18 = iVar18 + -1;
                  puVar5 = puVar5 + 4;
                  puVar16 = puVar16 + 4;
                  puVar21 = puVar21 + 4;
                  puVar31 = puVar31 + 4;
                } while (iVar18 != 0);
              }
              if ((byte)puVar25[0x808] == 0) {
                *(undefined4 **)(puVar25 + 0x5c) = puVar6;
              }
              else {
                *(undefined4 *)(puVar25 + 0x2c) = 0;
                iVar18 = func_003F9AA4(*(int *)(puVar25 + 0x28),*(int *)(puVar25 + 0x24),
                                       (uint)(byte)puVar25[0x808],DAT_003f8bc0,
                                       *(int *)(puVar25 + 0x80c),0);
                *(int *)(puVar25 + 0x2c) = iVar18;
                if (iVar18 == *(int *)(puVar25 + 0x28)) {
                  *(undefined4 *)(puVar25 + 0x2c) = 0;
                  iVar18 = *(int *)(puVar25 + 0x28);
                }
                *(int *)(puVar25 + 0x5c) = iVar18;
              }
              iVar18 = *(int *)(puVar25 + 0x28);
            }
            else {
              *(uint *)(puVar25 + 0x24) = uVar29;
              puVar24 = (uint *)(**(code **)(*param_2 + 8))(param_2,uVar29,0x80);
              *(uint **)(puVar25 + 0x28) = puVar24;
              *(undefined4 *)(puVar25 + 0x20) = 4;
              if (puVar25[0x809] == '\0') {
                func_001163A0(puVar24,puVar27,uVar29);
              }
              else {
                uVar12 = 0;
                puVar30 = puVar24;
                if (uVar29 != 0) {
                  do {
                    uVar12 = uVar12 + 0x10;
                    *puVar30 = *puVar27;
                    puVar30[1] = puVar27[1];
                    puVar30[2] = puVar27[2];
                    puVar30[3] = puVar27[3];
                    puVar30 = puVar30 + 4;
                  } while (uVar12 < uVar29);
                }
              }
              if ((byte)puVar25[0x808] == 0) {
                *(uint **)(puVar25 + 0x5c) = puVar24;
              }
              else {
                *(undefined4 *)(puVar25 + 0x2c) = 0;
                iVar18 = func_003F9AA4(*(int *)(puVar25 + 0x28),*(int *)(puVar25 + 0x24),
                                       (uint)(byte)puVar25[0x808],DAT_003f8bc0,
                                       *(int *)(puVar25 + 0x80c),0);
                *(int *)(puVar25 + 0x2c) = iVar18;
                if (iVar18 == *(int *)(puVar25 + 0x28)) {
                  *(undefined4 *)(puVar25 + 0x2c) = 0;
                  iVar18 = *(int *)(puVar25 + 0x28);
                }
                *(int *)(puVar25 + 0x5c) = iVar18;
              }
              iVar18 = *(int *)(puVar25 + 0x28);
            }
            if (iVar18 != 0) {
              func_003E35DC(iVar18,*(undefined4 *)(puVar25 + 0x24));
            }
            uVar29 = 0;
            if (puVar20 != (uint *)0x0) {
              uVar29 = uVar15;
            }
            if (puVar20 == (uint *)0x0 || uVar29 == 0) {
              *(int *)(puVar25 + 0x38) = *(int *)(puVar25 + 4) << 3;
              puVar6 = (undefined4 *)
                       (**(code **)(*param_2 + 8))(param_2,*(int *)(puVar25 + 4) << 3,0x80);
              *(undefined4 **)(puVar25 + 0x3c) = puVar6;
              *(undefined4 *)(puVar25 + 0x34) = 2;
              if (*(uint *)(puVar25 + 4) != 0) {
                puVar16 = puVar6 + -1;
                uVar3 = (undefined4)((ulonglong)uVar33 >> 0x20);
                puVar5 = puVar6 + -2;
                if ((*(uint *)(puVar25 + 4) & 1) != 0) {
                  puVar16 = puVar6 + 1;
                  *puVar6 = uVar3;
                  *puVar16 = uVar3;
                  puVar5 = puVar6;
                }
                for (uVar29 = *(uint *)(puVar25 + 4) >> 1; uVar29 != 0; uVar29 = uVar29 - 1) {
                  puVar5[2] = uVar3;
                  puVar5 = puVar5 + 4;
                  puVar16[2] = uVar3;
                  puVar16 = puVar16 + 4;
                  *puVar5 = uVar3;
                  *puVar16 = uVar3;
                }
              }
              if ((byte)puVar25[0x808] == 0) {
                *(undefined4 **)(puVar25 + 0x60) = puVar6;
              }
              else {
                *(undefined4 *)(puVar25 + 0x40) = 0;
                iVar18 = func_003F9AA4(*(int *)(puVar25 + 0x3c),*(int *)(puVar25 + 0x38),
                                       (uint)(byte)puVar25[0x808],DAT_003f8bc0,
                                       *(int *)(puVar25 + 0x80c),0);
                *(int *)(puVar25 + 0x40) = iVar18;
                if (iVar18 == *(int *)(puVar25 + 0x3c)) {
                  *(undefined4 *)(puVar25 + 0x40) = 0;
                  iVar18 = *(int *)(puVar25 + 0x3c);
                }
                *(int *)(puVar25 + 0x60) = iVar18;
              }
              iVar18 = *(int *)(puVar25 + 0x3c);
            }
            else {
              *(uint *)(puVar25 + 0x38) = uVar29;
              puVar24 = (uint *)(**(code **)(*param_2 + 8))(param_2,uVar29,0x80);
              *(uint **)(puVar25 + 0x3c) = puVar24;
              *(undefined4 *)(puVar25 + 0x34) = 2;
              func_001163A0(puVar24,puVar20,uVar15);
              if ((byte)puVar25[0x808] == 0) {
                *(uint **)(puVar25 + 0x60) = puVar24;
              }
              else {
                *(undefined4 *)(puVar25 + 0x40) = 0;
                iVar18 = func_003F9AA4(*(int *)(puVar25 + 0x3c),*(int *)(puVar25 + 0x38),
                                       (uint)(byte)puVar25[0x808],DAT_003f8bc0,
                                       *(int *)(puVar25 + 0x80c),0);
                *(int *)(puVar25 + 0x40) = iVar18;
                if (iVar18 == *(int *)(puVar25 + 0x3c)) {
                  *(undefined4 *)(puVar25 + 0x40) = 0;
                  iVar18 = *(int *)(puVar25 + 0x3c);
                }
                *(int *)(puVar25 + 0x60) = iVar18;
              }
              iVar18 = *(int *)(puVar25 + 0x3c);
            }
            if (iVar18 != 0) {
              func_003E35DC(iVar18,*(undefined4 *)(puVar25 + 0x38));
            }
            uVar29 = 0;
            if (puVar14 != (uint *)0x0) {
              uVar29 = uVar13;
            }
            if (puVar14 != (uint *)0x0 && uVar29 != 0) {
              *(uint *)(puVar25 + 0x4c) = uVar23 << 1;
              puVar9 = (undefined2 *)(**(code **)(*param_2 + 8))(param_2,uVar23 << 1,0x80);
              *(undefined2 **)(puVar25 + 0x50) = puVar9;
              *(undefined4 *)(puVar25 + 0x48) = 1;
              if (uVar23 != 0) {
                puVar20 = puVar14 + -1;
                puVar17 = puVar9 + -1;
                if ((uVar23 & 1) != 0) {
                  *puVar9 = (short)*puVar14;
                  puVar20 = puVar14;
                  puVar17 = puVar9;
                }
                for (uVar23 = uVar23 >> 1; uVar23 != 0; uVar23 = uVar23 - 1) {
                  puVar17[1] = (short)puVar20[1];
                  puVar20 = puVar20 + 2;
                  puVar17 = puVar17 + 2;
                  *puVar17 = (short)*puVar20;
                }
              }
              if ((byte)puVar25[0x808] != 0) {
                *(undefined4 *)(puVar25 + 0x54) = 0;
                puVar9 = (undefined2 *)
                         func_003F9AA4(*(int *)(puVar25 + 0x50),*(int *)(puVar25 + 0x4c),
                                       (uint)(byte)puVar25[0x808],DAT_003f8bc0,
                                       *(int *)(puVar25 + 0x80c),0);
                *(undefined2 **)(puVar25 + 0x54) = puVar9;
                if (puVar9 == *(undefined2 **)(puVar25 + 0x50)) {
                  *(undefined4 *)(puVar25 + 0x54) = 0;
                  puVar9 = *(undefined2 **)(puVar25 + 0x50);
                }
              }
              *(undefined2 **)(puVar25 + 0x804) = puVar9;
            }
          }
          uVar22 = uVar22 + 1;
        } while (uVar22 < *(uint *)(param_1 + 0x2c));
      }
    }
    uVar3 = (**(code **)(**(int **)(param_1 + 0x1c) + 8))
                      (*(int **)(param_1 + 0x1c),*(int *)(*(int *)(param_1 + 0xc) + 8) * 0x3c,0x80);
    *(undefined4 *)(param_1 + 0x18) = uVar3;
    local_58 = 0;
    if (0 < *(int *)(*(int *)(param_1 + 0xc) + 8)) {
      do {
        piVar28 = (int *)(*(int *)(param_1 + 0x18) + local_58 * 0x3c);
        iVar4 = *(int *)(param_1 + 0xc) + local_58 * 0x1c + 0x48;
        *piVar28 = iVar4;
        iVar18 = *(int *)(param_1 + 0x10) + *(int *)(iVar4 + 8);
        *(int *)(iVar4 + 0xc) = iVar18;
        piVar11 = (int *)*piVar28;
        piVar28[8] = iVar18;
        iVar4 = piVar11[4];
        piVar28[2] = iVar4;
        piVar28[3] = *piVar11;
        *(undefined1 *)(piVar28 + 9) = 0;
        piVar28[10] = *(int *)(param_1 + 0x20);
        piVar28[0xb] = *(int *)(param_1 + 0x24);
        piVar28[0xc] = *(int *)(param_1 + 0x28);
        piVar28[0xd] = *(int *)(param_1 + 0x2c);
        if (piVar11[5] == 0) {
          piVar28[1] = 0;
        }
        else {
          iVar18 = 0;
          piVar28[1] = piVar11[5] + param_3;
          if (0 < iVar4) {
            do {
              piVar11 = (int *)(piVar28[1] + iVar18 * 8);
              if (*piVar11 == 0) {
                piVar11[1] = 0;
              }
              else {
                iVar4 = *piVar11 + param_3;
                piVar11[1] = iVar4;
                *(int *)(iVar4 + 0x3c) = *(int *)(iVar4 + 0x38) + *(int *)(param_1 + 0x10);
                iVar4 = piVar11[1];
                if (*(int *)(iVar4 + 0xb0) < 1) {
                  if (0 < *(int *)(iVar4 + 0xa8)) {
                    puVar14 = (uint *)(*(int *)(iVar4 + 0xa4) + *(int *)(param_1 + 0x14));
                    if (*(int *)(iVar4 + 0xa0) == 2) {
                      iVar19 = 4;
                    }
                    else {
                      iVar19 = 3;
                    }
                    puVar20 = (uint *)(**(code **)(*param_2 + 8))
                                                (param_2,(uint)*(ushort *)(iVar4 + 0x40) *
                                                         (uint)*(ushort *)(iVar4 + 0x42) * iVar19,
                                                 0x80);
                    *(undefined4 *)(iVar4 + 0xb8) = 0;
                    puVar24 = (uint *)func_003EEF68(*(int *)(iVar4 + 0xa0));
                    iVar19 = func_003EEF24(puVar24,(uint)*(ushort *)(iVar4 + 0x40),
                                           (uint *)(uint)*(ushort *)(iVar4 + 0x42),puVar14,puVar20);
                    if (iVar19 == 0) {
                      (**(code **)(*param_2 + 0xc))(param_2,puVar20);
                    }
                    else {
                      *(uint **)(iVar4 + 0xb8) = puVar20;
                    }
                  }
                }
                else {
                  iVar19 = *(int *)(iVar4 + 0xb4) + *(int *)(param_1 + 0x14);
                  uVar22 = (uint)*(byte *)(param_1 + 0x30);
                  if (uVar22 == 1 || uVar22 == 2) {
                    iVar19 = func_003F9AA4(iVar19,*(int *)(iVar4 + 0xb0),uVar22,DAT_003f9514,
                                           *(int *)(param_1 + 0x34),0);
                  }
                  *(int *)(iVar4 + 0xb8) = iVar19;
                }
                iVar4 = piVar11[1];
                if (*(int *)(iVar4 + 300) < 1) {
                  if (0 < *(int *)(iVar4 + 0x124)) {
                    puVar14 = (uint *)(*(int *)(param_1 + 0x14) + *(int *)(iVar4 + 0x120));
                    if (*(int *)(iVar4 + 0x11c) == 2) {
                      iVar19 = 4;
                    }
                    else {
                      iVar19 = 3;
                    }
                    puVar20 = (uint *)(**(code **)(*param_2 + 8))
                                                (param_2,(uint)*(ushort *)(iVar4 + 0xbc) *
                                                         (uint)*(ushort *)(iVar4 + 0xbe) * iVar19,
                                                 0x80);
                    *(undefined4 *)(iVar4 + 0x134) = 0;
                    puVar24 = (uint *)func_003EEF68(*(int *)(iVar4 + 0x11c));
                    iVar19 = func_003EEF24(puVar24,(uint)*(ushort *)(iVar4 + 0xbc),
                                           (uint *)(uint)*(ushort *)(iVar4 + 0xbe),puVar14,puVar20);
                    if (iVar19 == 0) {
                      (**(code **)(*param_2 + 0xc))(param_2,puVar20);
                    }
                    else {
                      *(uint **)(iVar4 + 0x134) = puVar20;
                    }
                  }
                }
                else {
                  iVar19 = *(int *)(param_1 + 0x14) + *(int *)(iVar4 + 0x130);
                  uVar22 = (uint)*(byte *)(param_1 + 0x30);
                  if (uVar22 == 1 || uVar22 == 2) {
                    iVar19 = func_003F9AA4(iVar19,*(int *)(iVar4 + 300),uVar22,DAT_003f9514,
                                           *(int *)(param_1 + 0x34),0);
                  }
                  *(int *)(iVar4 + 0x134) = iVar19;
                }
                piVar10 = (int *)piVar11[1];
                if ((*piVar10 == 1) && ((piVar10[0x152] & 1U) != 0)) {
                  if (piVar10[0x188] < 1) {
                    if (0 < piVar10[0x186]) {
                      puVar14 = (uint *)(*(int *)(param_1 + 0x14) + piVar10[0x185]);
                      if (piVar10[0x184] == 2) {
                        iVar4 = 4;
                      }
                      else {
                        iVar4 = 3;
                      }
                      puVar20 = (uint *)(**(code **)(*param_2 + 8))
                                                  (param_2,(uint)*(ushort *)(piVar10 + 0x16c) *
                                                           (uint)*(ushort *)((int)piVar10 + 0x5b2) *
                                                           iVar4,0x80);
                      piVar10[0x18a] = 0;
                      puVar24 = (uint *)func_003EEF68(piVar10[0x184]);
                      iVar4 = func_003EEF24(puVar24,(uint)*(ushort *)(piVar10 + 0x16c),
                                            (uint *)(uint)*(ushort *)((int)piVar10 + 0x5b2),puVar14,
                                            puVar20);
                      if (iVar4 == 0) {
                        (**(code **)(*param_2 + 0xc))(param_2,puVar20);
                      }
                      else {
                        piVar10[0x18a] = (int)puVar20;
                      }
                    }
                  }
                  else {
                    iVar4 = piVar10[0x189] + *(int *)(param_1 + 0x14);
                    uVar22 = (uint)*(byte *)(param_1 + 0x30);
                    if (uVar22 == 1 || uVar22 == 2) {
                      iVar4 = func_003F9AA4(iVar4,piVar10[0x188],uVar22,DAT_003f9514,
                                            *(int *)(param_1 + 0x34),0);
                    }
                    piVar10[0x18a] = iVar4;
                  }
                }
                iVar4 = piVar11[1];
                if (*(int *)(iVar4 + 0x140) != 0) {
                  *(int *)(iVar4 + 0x138) =
                       *(int *)(*(int *)(param_1 + 0xc) + 0x24) + param_3 + *(int *)(iVar4 + 0x13c);
                }
                iVar7 = 0;
                iVar4 = 0;
                iVar19 = *(int *)(*(int *)(param_1 + 0xc) + 0x40) + param_3;
                pcVar26 = (char *)(*(int *)(piVar11[1] + 0x158) + iVar19);
                *(int *)(param_1 + 0x38) = iVar19;
                piVar28[0xe] = iVar19;
                cVar2 = *pcVar26;
                bVar32 = cVar2 == 'M';
                if (bVar32) {
                  cVar2 = pcVar26[1];
                }
                if (bVar32 && cVar2 == 'A') {
                  cVar2 = pcVar26[2];
                  bVar32 = cVar2 == 'T';
                  if (bVar32) {
                    cVar2 = pcVar26[3];
                  }
                  if (bVar32 && cVar2 == 'C') {
                    iVar4 = (int)pcVar26[8];
                    iVar7 = (int)pcVar26[4];
                  }
                }
                puVar14 = (uint *)(pcVar26 + iVar7 * 4 + 8);
                uVar22 = func_001139F8(*(int *)(piVar11[1] + 0xb8));
                *puVar14 = uVar22 >> 3;
                if (*(int *)(piVar11[1] + 0x134) != 0) {
                  uVar22 = func_001139F8(*(int *)(piVar11[1] + 0x134));
                  *(uint *)(pcVar26 + iVar4 * 4 + 8) = uVar22 >> 3;
                }
                piVar11 = (int *)piVar11[1];
                if ((*piVar11 == 1) && ((piVar11[0x152] & 1U) != 0)) {
                  pcVar26 = (char *)(piVar11[0x1c5] + iVar19);
                  cVar2 = *pcVar26;
                  bVar32 = cVar2 == 'M';
                  if (bVar32) {
                    cVar2 = pcVar26[1];
                  }
                  if (bVar32 && cVar2 == 'A') {
                    cVar2 = pcVar26[2];
                    bVar32 = cVar2 == 'T';
                    if (bVar32) {
                      cVar2 = pcVar26[3];
                    }
                    if (bVar32 && cVar2 == 'C') {
                      iVar7 = (int)pcVar26[4];
                    }
                  }
                  uVar22 = func_001139F8(piVar11[0x18a]);
                  *(uint *)(pcVar26 + iVar7 * 4 + 4) = uVar22 >> 3;
                }
              }
              iVar18 = iVar18 + 1;
            } while (iVar18 < piVar28[2]);
          }
        }
        piVar28[4] = *piVar28;
        piVar28[5] = piVar28[1];
        piVar28[6] = piVar28[2];
        piVar28[7] = piVar28[3];
        local_58 = local_58 + 1;
      } while (local_58 < *(int *)(*(int *)(param_1 + 0xc) + 8));
    }
  }
  return;
}

