#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_0010983C(undefined4 param_1,undefined4 param_2);
extern int func_0010B954(int param_1,int param_2,int *param_3,int param_4,int param_5);
extern int func_0010BAB4(undefined4 param_1);
extern int func_002FF5BC(int param_1);
extern int func_002FF8A4(int param_1,int param_2,int param_3,int param_4,int param_5,int *param_6,int param_7);
extern int func_0030022C(undefined4 *param_1);
extern int func_0051E520(int param_1);
extern int func_0052FBA0(int param_1,uint param_2);
extern int *DAT_0012fb80;
extern int *DAT_0012fb84;
extern undefined4 DAT_0012fb90;
extern undefined4 *DAT_0012fb94;
extern undefined4 DAT_0012fb98;
extern int *DAT_0012fb9c;
extern uint *DAT_0012fba0;
extern undefined4 DAT_0012fba4;
extern undefined4 *DAT_0012fba8;
extern char s_UraTex_0012fb88[];

// USA 0012F914 <- EU 0012F914 (Ghidra, non-matching)
// GLOBAL DAT_0012fb80 int *
// GLOBAL DAT_0012fb84 int *
// GLOBAL DAT_0012fb90 undefined4
// GLOBAL DAT_0012fb94 undefined4 *
// GLOBAL DAT_0012fb98 undefined4
// GLOBAL DAT_0012fb9c int *
// GLOBAL DAT_0012fba0 uint *
// GLOBAL DAT_0012fba4 undefined4
// GLOBAL DAT_0012fba8 undefined4 *
// GLOBAL s_UraTex_0012fb88 string

undefined1 func_0012F914(int param_1)

{
  undefined4 uVar1;
  uint *puVar2;
  undefined4 uVar3;
  bool bVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int *piVar8;
  int iVar9;
  uint *puVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  undefined4 *puVar14;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_34 (*(int *)(albw_frame + 0xc))
  #define local_30 (*(undefined4 *)(albw_frame + 0x10))
  #define local_2c (*(char * *)(albw_frame + 0x14))
  bVar4 = func_0051E520(*DAT_0012fb80);
  piVar5 = DAT_0012fb84;
  if (bVar4) {
    (**(code **)(**(int **)(*DAT_0012fb84 + 0x1c0) + 0x28))(*(int **)(*DAT_0012fb84 + 0x1c0));
    local_2c = s_UraTex_0012fb88;
    local_30 = DAT_0012fb90;
    piVar5 = func_0010B954(0,(int)&local_30,*(int **)(*piVar5 + 0x1c0),1,0);
    puVar14 = (undefined4 *)(param_1 + 0x2c28);
    *puVar14 = piVar5;
    if (piVar5 == (int *)0x0) {
      local_34 = 1;
    }
    else {
      local_34 = func_0010983C(*DAT_0012fb94,piVar5);
    }
    uVar1 = DAT_0012fb98;
    uVar11 = 0;
    piVar5 = (int *)(param_1 + 0x2c20);
    do {
      puVar6 = (undefined4 *)func_0010BAB4(400);
      puVar7 = (undefined4 *)0x0;
      if (puVar6 != (undefined4 *)0x0) {
        puVar7 = (undefined4 *)func_0030022C(puVar6);
        *puVar7 = uVar1;
        *(undefined1 *)(puVar7 + 99) = 1;
        *(undefined1 *)((int)puVar7 + 0x18d) = 0;
        *(undefined1 *)((int)puVar7 + 0x18e) = 0;
        puVar7[0x62] = puVar7[0x62] | 0x60000000;
      }
      piVar8 = piVar5;
      if (uVar11 < 2) {
        piVar8 = piVar5 + uVar11;
      }
      *piVar8 = (int)puVar7;
      piVar8 = piVar5;
      if (uVar11 < 2) {
        piVar8 = piVar5 + uVar11;
      }
      iVar13 = *piVar8;
      func_002FF8A4(iVar13,0xf0,400,1,0,(int *)*puVar14,0);
      *(bool *)(iVar13 + 0x18c) = uVar11 == 0;
      func_002FF5BC(iVar13);
      uVar11 = uVar11 + 1;
      *(undefined1 *)(iVar13 + 0x18d) = 1;
      *(undefined1 *)(iVar13 + 0x18e) = 1;
      uVar3 = DAT_0012fba4;
      puVar2 = DAT_0012fba0;
    } while ((int)uVar11 < 2);
    iVar13 = *DAT_0012fb9c;
    if (iVar13 != 0) {
      iVar12 = *(int *)(param_1 + 0x54);
      if (iVar12 != param_1 + 0x50) {
        do {
          iVar9 = *(int *)(*(int *)(iVar12 + 8) + 0x54);
          if ((iVar9 != 0) &&
             (puVar7 = (undefined4 *)func_0052FBA0(iVar13 + 0x3dbbc,*(uint *)(iVar9 + 4)),
             puVar7 != (undefined4 *)0x0)) {
            if (((*puVar2 & 1) == 0) && (iVar9 = func_00100174((int *)DAT_0012fba0), iVar9 != 0)) {
              *DAT_0012fba8 = uVar3;
            }
            iVar9 = (**(code **)*puVar7)(puVar7,DAT_0012fba8);
            if (iVar9 == 0) {
              puVar7 = (undefined4 *)0x0;
            }
            if (puVar7 != (undefined4 *)0x0) {
              puVar10 = (uint *)(*(int *)(iVar12 + 8) + 0x164);
              *puVar10 = *puVar10 | 1;
            }
          }
          iVar12 = *(int *)(iVar12 + 4);
        } while (iVar12 != param_1 + 0x50);
      }
      (**(code **)(*(int *)*puVar14 + 0x14))((int *)*puVar14);
      if (local_34 != 1) {
        func_0010983C(*DAT_0012fb94,local_34);
      }
      return 1;
    }
    if (local_34 != 1) {
      func_0010983C(*DAT_0012fb94,local_34);
    }
  }
  return 0;
}

