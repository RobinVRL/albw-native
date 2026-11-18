#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_00100950(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_00100A86(int param_1,int param_2,int param_3,int param_4,undefined *param_5);
extern int func_0010B3EC(undefined4 *param_1,int param_2,int param_3);
extern int func_0010BAB4(undefined4 param_1);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_00166C20(int *param_1,uint param_2,int *param_3,int param_4);
extern int func_0016773C(int param_1,int param_2);
extern int func_0017A520(undefined4 *param_1,undefined2 param_2,int *param_3,int param_4);
extern int func_00367C18(int param_1,int *param_2,undefined4 param_3,undefined4 param_4,int *param_5, int param_6,int param_7);
extern int func_003681A4(int param_1,int *param_2,uint param_3,int *param_4,int param_5);
extern int func_00368300(int param_1,int *param_2,int *param_3);
extern int func_00368828(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, undefined4 param_5);
extern int func_00368978(int param_1,int *param_2,int *param_3,int *param_4);
extern int func_003693A0(int param_1,int *param_2,int *param_3,int *param_4);
extern int func_00369560(int param_1,int *param_2,int *param_3,int param_4);
extern int func_0036959C(undefined4 *param_1,int param_2);
extern int func_004994B0(int param_1,undefined4 param_2,uint param_3,undefined4 param_4,...);
extern int func_004B9A10(undefined4 *param_1,undefined1 param_2);
extern int func_005229AC(int *param_1,int *param_2);
extern int func_0055696C(int param_1,int param_2);
extern int func_005826A4(int param_1,int *param_2,int *param_3,int *param_4);
extern int DAT_00464bd4;
extern int *DAT_00464bd8;
extern int DAT_00464bdc;
extern uint DAT_00464be0;
extern int *DAT_00464bf0;
extern int *DAT_00464bf4;
extern int DAT_00464bf8;
extern undefined *DAT_00464c2c;
extern undefined *DAT_00464c40;
extern undefined *DAT_00464c44;
extern int *DAT_00464c58;
extern undefined *DAT_00464c5c;
extern int DAT_00464c60;
extern int DAT_00464d74;
extern int *DAT_00464d98;
extern char s_L_Heart__02d_00464c30[];
extern char s_L_RupeeNum_00_00464c48[];
extern char s_P_PowerUpSword_00_00464d78[];
extern char s_P_Xbtn_00_00464d8c[];
extern char s_T_MedalNum_00_00464bfc[];
extern char s_T_PlayerName_00_00464c0c[];
extern char s_T_Rupee_00_00464be4[];
extern char s_T_UserName_00_00464c1c[];
extern char s_cf_00464c30[];

// USA 004647C8 <- EU 004647A0 (Ghidra, non-matching)
// GLOBAL DAT_00464bd4 int
// GLOBAL DAT_00464bd8 int *
// GLOBAL DAT_00464bdc int
// GLOBAL DAT_00464be0 uint
// GLOBAL DAT_00464bf0 int *
// GLOBAL DAT_00464bf4 int *
// GLOBAL DAT_00464bf8 int
// GLOBAL DAT_00464c2c undefined *
// GLOBAL DAT_00464c40 undefined *
// GLOBAL DAT_00464c44 undefined *
// GLOBAL DAT_00464c58 int *
// GLOBAL DAT_00464c5c undefined *
// GLOBAL DAT_00464c60 int
// GLOBAL DAT_00464d74 int
// GLOBAL DAT_00464d98 int *
// GLOBAL s_cf_00464c30 string
// GLOBAL s_L_RupeeNum_00_00464c48 string
// GLOBAL s_P_PowerUpSword_00_00464d78 string
// GLOBAL s_P_Xbtn_00_00464d8c string
// GLOBAL s_T_MedalNum_00_00464bfc string
// GLOBAL s_T_PlayerName_00_00464c0c string
// GLOBAL s_T_Rupee_00_00464be4 string
// GLOBAL s_T_UserName_00_00464c1c string

/* WARNING: Variable defined which should be unmapped: objStack_738 */

int * func_004647C8(undefined4 *param_1)

{
  uint uVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int *piVar7;
  int *piVar8;
  uint *puVar9;
  undefined2 *puVar10;
  uint uVar11;
  int iVar12;
  undefined4 uVar13;
  uint uVar14;
  int iVar15;
  int *piVar16;
  _Alignas(8) unsigned char albw_frame[0x740];
  #define objStack_738 ((uint *)(albw_frame + 0x8))
  #define local_728 (*(uint *)(albw_frame + 0x18))
  #define local_724 (*(char * *)(albw_frame + 0x1c))
  #define local_720 (*(int *)(albw_frame + 0x20))
  #define local_71c ((uint *)(albw_frame + 0x24))
  #define local_710 (*(int *)(albw_frame + 0x30))
  #define local_70c (*(int *)(albw_frame + 0x34))
  #define local_708 (*(int *)(albw_frame + 0x38))
  #define auStack_704 ((undefined1 *)(albw_frame + 0x3c))
  #define auStack_3b8 ((undefined1 *)(albw_frame + 0x388))
  #define local_48 (*(int * *)(albw_frame + 0x6f8))
  #define local_40 (*(uint *)(albw_frame + 0x700))
  #define local_3c (*(char * *)(albw_frame + 0x704))
  piVar3 = func_004B9A10(param_1,0);
  iVar4 = DAT_00464bd4 + 0x54;
  *piVar3 = DAT_00464bd4;
  piVar3[0xe] = iVar4;
  puVar5 = (undefined4 *)func_0010BAB4(0xf8);
  puVar6 = (undefined4 *)0x0;
  if (puVar5 != (undefined4 *)0x0) {
    puVar6 = func_0036959C(puVar5,(int)DAT_00464bd8);
  }
  piVar3[0x1d] = (int)puVar6;
  puVar5 = (undefined4 *)func_0010BAB4(0x78);
  puVar6 = (undefined4 *)0x0;
  if (puVar5 != (undefined4 *)0x0) {
    puVar6 = func_0017A520(puVar5,0x400,(int *)0x0,0);
  }
  piVar3[0x1e] = (int)puVar6;
  puVar6 = (undefined4 *)func_0010BAB4(0x10);
  if (puVar6 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    *puVar6 = 0;
    puVar6[1] = 0;
    puVar6[3] = 0xffffffff;
    puVar6[2] = 0;
  }
  piVar3[0x1f] = (int)puVar6;
  piVar3[0x20] = 0;
  piVar3[0x21] = 0;
  iVar4 = DAT_00464bdc;
  *(undefined2 *)(piVar3 + 0x22) = 0;
  *(undefined2 *)((int)piVar3 + 0x8a) = 0xffff;
  piVar3[0x23] = iVar4;
  piVar3[0x24] = 0;
  *(undefined2 *)(piVar3 + 0x25) = 0;
  *(undefined2 *)((int)piVar3 + 0x96) = 0xffff;
  piVar3[0x26] = iVar4;
  piVar3[0x27] = 0;
  *(undefined2 *)(piVar3 + 0x28) = 0;
  *(undefined2 *)((int)piVar3 + 0xa2) = 0xffff;
  piVar3[0x29] = iVar4;
  piVar3[0x2a] = 0;
  piVar3[0x2b] = 0;
  piVar3[0x2c] = 0;
  (**(code **)(*piVar3 + 0x38))(piVar3,DAT_00464bd8);
  uVar1 = DAT_00464be0;
  piVar16 = (int *)piVar3[7];
  objStack_738[1] = (uint)s_T_Rupee_00_00464be4;
  objStack_738[0] = DAT_00464be0;
  piVar7 = (int *)func_005229AC(piVar16,(int *)objStack_738);
  piVar2 = DAT_00464bf0;
  if (piVar7 != (int *)0x0) {
    piVar8 = (int *)(**(code **)(*piVar7 + 8))(piVar7);
    do {
      if (piVar8 == piVar2) goto LAB_004648f0;
      piVar8 = (int *)*piVar8;
    } while (piVar8 != (int *)0x0);
  }
  piVar7 = (int *)0x0;
LAB_004648f0:
  piVar3[0x20] = (int)piVar7;
  objStack_738[1] = piVar7[0x2a];
  objStack_738[0] = uVar1;
  func_005826A4(*DAT_00464bf4,(int *)piVar3[0x1f],DAT_00464bd8,(int *)objStack_738);
  func_0016773C((int)piVar16,9);
  iVar4 = DAT_00464bf8;
  uVar14 = 0;
  do {
    func_00166C20(piVar16,uVar14,(int *)(iVar4 + uVar14 * 8),0);
    uVar14 = uVar14 + 1;
  } while ((int)uVar14 < 5);
  piVar3[0x24] = (int)piVar16;
  *(undefined2 *)((int)piVar3 + 0x8a) = 4;
  *(undefined2 *)(piVar3 + 0x22) = 0;
  piVar3[0x27] = (int)piVar16;
  *(undefined2 *)((int)piVar3 + 0x96) = 2;
  *(undefined2 *)(piVar3 + 0x25) = 0;
  piVar3[0x2a] = (int)piVar16;
  *(undefined2 *)((int)piVar3 + 0xa2) = 1;
  *(undefined2 *)(piVar3 + 0x28) = 0;
  local_724 = s_T_MedalNum_00_00464bfc;
  local_728 = uVar1;
  objStack_738[1] = (uint)s_T_PlayerName_00_00464c0c;
  objStack_738[0] = uVar1;
  func_003693A0(piVar3[0x1d],piVar16,(int *)objStack_738,(int *)&local_728);
  objStack_738[1] = (uint)s_T_UserName_00_00464c1c;
  objStack_738[0] = uVar1;
  func_00368300(piVar3[0x1d],piVar16,(int *)objStack_738);
  local_48 = piVar3 + 0x25;
  uVar13 = 0x14;
  func_00100118((int)&local_728,DAT_00464c2c,0x2c,0x14);
  uVar14 = 0;
  do {
    puVar9 = &local_728 + uVar14 * 0xb;
    do {
      func_004994B0((int)puVar9,s_L_Heart__02d_00464c30,uVar14,uVar13);
      uVar14 = uVar14 + 1;
      if (0x13 < (int)uVar14) {
        objStack_738[0] = (uint)DAT_00464c40;
        objStack_738[0] = func_00100A86((int)auStack_3b8,(int)&local_728,0x2c,0x14,DAT_00464c40);
        objStack_738[1] = 1;
        objStack_738[2] = (uint)piVar3;
        func_00367C18(piVar3[0x1d],piVar16,local_48,piVar3 + 0x28,(int *)objStack_738[0],1,
                      (int)piVar3);
        func_00100950((int)auStack_3b8,DAT_00464c44,0x2c,0x14);
        func_00100950((int)&local_728,DAT_00464c44,0x2c,0x14);
        objStack_738[1] = (uint)s_L_RupeeNum_00_00464c48;
        objStack_738[0] = uVar1;
        func_00369560(piVar3[0x1d],piVar16,(int *)objStack_738,(int)piVar3);
        objStack_738[0] = (uint)piVar3;
        func_003681A4(piVar3[0x1d],piVar16,7,DAT_00464c58,(int)piVar3);
        iVar4 = func_0010CEE0(0x30,(int *)0x0,4);
        if ((iVar4 != 0) && (iVar4 = func_00100118(iVar4,DAT_00464c5c,0xc,4), iVar4 != 0)) {
          piVar3[0x2c] = iVar4;
          piVar3[0x2b] = 4;
        }
        iVar4 = DAT_00464c60;
        uVar14 = 0;
        do {
          func_00166C20(piVar16,uVar14 + 5,(int *)(iVar4 + uVar14 * 8),0);
          if (uVar14 < (uint)piVar3[0x2b]) {
            puVar10 = (undefined2 *)(piVar3[0x2c] + uVar14 * 0xc);
          }
          else {
            puVar10 = (undefined2 *)piVar3[0x2c];
          }
          puVar9 = &local_728;
          if (uVar14 < 4) {
            puVar9 = &local_728 + uVar14;
          }
          *puVar10 = 0;
          *(int **)(puVar10 + 4) = piVar16;
          puVar10[1] = (short)(uVar14 + 5);
          if (uVar14 < (uint)piVar3[0x2b]) {
            uVar11 = piVar3[0x2c] + uVar14 * 0xc;
          }
          else {
            uVar11 = piVar3[0x2c];
          }
          uVar14 = uVar14 + 1;
          *puVar9 = uVar11;
        } while ((int)uVar14 < 4);
        objStack_738[0] = local_71c[0];
        func_00368828(piVar3[0x1d],local_728,local_724,local_720,local_71c[0]);
        local_728 = 0;
        local_724 = (char *)0x0;
        local_720 = 0;
        func_0010B3EC(&local_728,3,(int)local_71c);
        local_710 = 0;
        local_70c = 0;
        local_708 = 0;
        func_0010B3EC(&local_710,3,(int)auStack_704);
        iVar4 = DAT_00464d74;
        iVar12 = 0;
        iVar15 = DAT_00464d74 + 0x18;
        do {
          if ((int)local_728 < (int)local_724) {
            *(int *)(local_720 + local_728 * 4) = iVar4 + iVar12 * 8;
            local_728 = local_728 + 1;
          }
          if (local_710 < local_70c) {
            *(int *)(local_708 + local_710 * 4) = iVar15 + iVar12 * 8;
            local_710 = local_710 + 1;
          }
          iVar12 = iVar12 + 1;
        } while (iVar12 < 3);
        func_00368978(piVar3[0x1d],piVar16,(int *)&local_728,&local_710);
        local_3c = s_P_PowerUpSword_00_00464d78;
        local_40 = uVar1;
        iVar4 = func_005229AC(piVar16,(int *)&local_40);
        piVar3[0x21] = iVar4;
        objStack_738[1] = (uint)s_P_Xbtn_00_00464d8c;
        objStack_738[0] = uVar1;
        iVar4 = func_005229AC(piVar16,(int *)objStack_738);
        if (iVar4 != 0 && *DAT_00464d98 != 0) {
          iVar12 = func_0055696C(*DAT_00464d98,0x27);
          *(byte *)(iVar4 + 0x44) = iVar12 != 0 | *(byte *)(iVar4 + 0x44) & 0xfe;
        }
        return piVar3;
      }
      puVar9 = &local_728;
    } while (0x13 < uVar14);
  } while( true );
}

