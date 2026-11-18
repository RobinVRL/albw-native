// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_0025D764(int param_1,float *param_2,uint param_3);
extern int func_0051D530(int param_1,undefined4 *param_2);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_005841A8(int param_1,undefined4 param_2,int *param_3);
extern int func_00588BE4(int param_1);
extern int func_0058959C(int param_1);
extern int *DAT_002981d4;
extern uint *DAT_002981d8;
extern undefined4 *DAT_002981dc;
extern undefined4 DAT_002981e0;
extern int *DAT_002981e4;
extern int DAT_002981e8;
extern int *DAT_002981ec;
extern int DAT_002981f0;
extern uint *DAT_002981f4;
extern undefined4 *DAT_002981f8;
extern undefined4 DAT_002981fc;

// USA 00297E28 <- EU 00297E04 (Ghidra, non-matching)
// MAPFIX: tools/ghidra_name_fixes.json applied (do not apply again)
// GLOBAL DAT_002981d4 int *
// GLOBAL DAT_002981d8 uint *
// GLOBAL DAT_002981dc undefined4 *
// GLOBAL DAT_002981e0 undefined4
// GLOBAL DAT_002981e4 int *
// GLOBAL DAT_002981e8 int
// GLOBAL DAT_002981ec int *
// GLOBAL DAT_002981f0 int
// GLOBAL DAT_002981f4 uint *
// GLOBAL DAT_002981f8 undefined4 *
// GLOBAL DAT_002981fc undefined4

void func_00297E28(int param_1)

{
  byte bVar1;
  ushort uVar2;
  short sVar3;
  int *piVar4;
  int iVar5;
  bool bVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 *puVar9;
  int *piVar10;
  ushort uVar11;
  undefined4 uVar12;
  int *piVar13;
  undefined4 uVar14;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define fStack_40 (*(float *)(albw_frame + 0x0))
  #define fStack_3c (*(float *)(albw_frame + 0x4))
  #define uStack_38 (*(undefined4 *)(albw_frame + 0x8))
  #define fStack_34 (*(float *)(albw_frame + 0xc))
  #define fStack_30 (*(float *)(albw_frame + 0x10))
  #define uStack_2c (*(undefined4 *)(albw_frame + 0x14))
  if (*(char *)(param_1 + 0x40d) != '\0') {
    puVar7 = (undefined4 *)func_0052FBA0(*DAT_002981d4 + 0x3dbbc,*(uint *)(param_1 + 0x44c));
    if (((*DAT_002981d8 & 1) == 0) && (iVar8 = func_00100174((int *)DAT_002981d8), iVar8 != 0)) {
      *DAT_002981dc = DAT_002981e0;
    }
    if ((puVar7 == (undefined4 *)0x0) ||
       (iVar8 = (**(code **)*puVar7)(puVar7,DAT_002981dc), iVar8 == 0)) {
      puVar7 = (undefined4 *)0x0;
    }
    if (puVar7 != (undefined4 *)0x0) {
      if (*(char *)(param_1 + 0x450) != '\0') {
        *(undefined4 *)(*(int *)(param_1 + 0x414) + 0x108) = *(undefined4 *)(param_1 + 0x44c);
      }
      piVar13 = DAT_002981e4;
      sVar3 = *(short *)(param_1 + 0x2c);
      iVar8 = *(int *)(*DAT_002981e4 + 0x18);
      func_00115C54(&fStack_34,(float *)(puVar7 + 0xf4),(float *)(param_1 + 0x458));
      fStack_40 = fStack_34;
      fStack_3c = fStack_30;
      uStack_38 = uStack_2c;
      if ((int)sVar3 == 0) {
        func_0051D530(iVar8,(undefined4 *)(param_1 + 0x420));
        fStack_40 = *(float *)(iVar8 + 0x1bc);
        fStack_3c = *(float *)(iVar8 + 0x1c0);
        uStack_38 = *(undefined4 *)(iVar8 + 0x1c4);
      }
      else {
        puVar9 = (undefined4 *)(DAT_002981e8 + ((int)sVar3 & 0xffU) * 0x2c);
        *(undefined4 *)(param_1 + 0x420) = *puVar9;
        *(undefined4 *)(param_1 + 0x424) = puVar9[1];
        *(undefined4 *)(param_1 + 0x428) = puVar9[2];
        *(undefined4 *)(param_1 + 0x42c) = puVar9[3];
        uVar12 = puVar9[5];
        uVar14 = puVar9[6];
        *(undefined4 *)(param_1 + 0x430) = puVar9[4];
        *(undefined4 *)(param_1 + 0x434) = uVar12;
        *(undefined4 *)(param_1 + 0x438) = uVar14;
        *(undefined4 *)(param_1 + 0x43c) = puVar9[7];
        *(undefined4 *)(param_1 + 0x440) = puVar9[8];
        *(undefined4 *)(param_1 + 0x444) = puVar9[9];
        *(undefined2 *)(param_1 + 0x448) = *(undefined2 *)(puVar9 + 10);
        *(undefined2 *)(param_1 + 0x44a) = *(undefined2 *)((int)puVar9 + 0x2a);
        fStack_3c = fStack_30 + *(float *)(param_1 + 0x440);
      }
      bVar6 = func_0058959C(*piVar13);
      iVar5 = DAT_002981f0;
      piVar13 = DAT_002981d4;
      if (bVar6) {
        if (*(char *)(*DAT_002981e4 + 0xe1) == '\0') {
          *(undefined2 *)(param_1 + 0x448) = 0;
        }
        uVar2 = *(ushort *)(param_1 + 0x36);
        iVar8 = *piVar13;
        bVar1 = *(byte *)(param_1 + 0x34);
        piVar10 = (int *)func_005841A8(iVar8,*DAT_002981ec,*(int **)(iVar5 + iVar8));
        piVar4 = DAT_002981ec;
        fStack_34 = 0.0;
        piVar13 = *(int **)(*piVar13 + 0x3dbc8);
        for (; piVar10 != piVar13; piVar10 = (int *)func_005841A8(*DAT_002981d4,*piVar4,piVar10 + 1)
            ) {
          iVar8 = *piVar10;
          uVar11 = (ushort)*(byte *)(iVar8 + 0x34);
          bVar6 = uVar11 == bVar1;
          if (bVar6) {
            uVar11 = *(ushort *)(iVar8 + 0x36);
          }
          if (bVar6 && uVar11 == (uVar2 & 0xff)) {
            if (iVar8 == param_1) {
              fStack_34 = 1.4013e-45;
            }
            else if ((fStack_34 != 0.0) || (iVar8 = func_00588BE4(param_1), iVar8 != *piVar4)) {
              piVar13 = DAT_002981e4;
              *(undefined2 *)(param_1 + 0x44a) = 1;
              *(undefined1 *)(*piVar13 + 0xe1) = 1;
              goto LAB_002980a8;
            }
          }
        }
        *(undefined2 *)(param_1 + 0x44a) = 0;
LAB_002980a8:
        uVar12 = 0;
      }
      else {
        uVar12 = *(undefined4 *)(iVar8 + 0x1a8);
      }
      *(undefined4 *)(param_1 + 0x428) = uVar12;
      iVar8 = (**(code **)(**(int **)(param_1 + 0x414) + 0x34))
                        (*(int **)(param_1 + 0x414),&fStack_40,param_1 + 0x420,0);
      if (iVar8 != 0) {
        *(undefined1 *)(param_1 + 0x411) = 1;
      }
      *(uint *)(param_1 + 0x41c) = (uint)*(ushort *)(param_1 + 0x448);
      if (*(ushort *)(param_1 + 0x448) < 5) {
        *(undefined4 *)(param_1 + 0x41c) = 5;
      }
      iVar8 = 0;
      if (*(short *)(param_1 + 0x32) != 0) {
        iVar8 = 2;
      }
      *(int *)(param_1 + 0x418) = iVar8 + *(short *)(param_1 + 0x2e);
      if (*(uint *)(param_1 + 0x464) != 0) {
        puVar9 = (undefined4 *)func_0052FBA0(*DAT_002981d4 + 0x3dbbc,*(uint *)(param_1 + 0x464));
        if (((*DAT_002981f4 & 1) == 0) && (iVar8 = func_00100174((int *)DAT_002981f4), iVar8 != 0))
        {
          *DAT_002981f8 = DAT_002981fc;
        }
        if ((puVar9 == (undefined4 *)0x0) ||
           (iVar8 = (**(code **)*puVar9)(puVar9,DAT_002981f8), iVar8 == 0)) {
          puVar9 = (undefined4 *)0x0;
        }
        if (puVar9 != (undefined4 *)0x0) {
          func_0025D764((int)puVar9,(float *)(puVar7 + 0xf4),puVar7[0xfa]);
          *(undefined1 *)(puVar9 + 0x106) = 1;
        }
      }
      *(undefined1 *)(param_1 + 0x40d) = 0;
      return;
    }
    if (*(char *)(param_1 + 0x450) != '\0') {
      *(undefined1 *)(param_1 + 0x40d) = 0;
      *(undefined1 *)(param_1 + 0x2d7) = 1;
    }
  }
  return;
}

