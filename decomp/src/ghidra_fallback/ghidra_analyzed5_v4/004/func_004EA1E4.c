#include "ghidra_types.h"

extern int func_0025A654(int param_1);
extern int func_0025AA50(undefined4 *param_1,int param_2);
extern int func_00293CF0(int param_1,int param_2);
extern int func_00294404(int param_1,int *param_2,int param_3,int *param_4,int param_5);
extern int func_0029450C(int param_1);
extern int func_00296190(int param_1,int param_2);
extern int func_00296BD0(int param_1,int param_2);
extern int func_00296C48(int param_1,int param_2,uint param_3,int *param_4);
extern int func_00297140(int param_1,int *param_2);
extern int func_00320E80(int param_1,uint param_2,int param_3,float fparam_0);
extern int func_004B083C(void);
extern int func_0053819C(int param_1);
extern int func_00538274(int param_1);
extern int func_00538FEC(int param_1);
extern int func_0053900C(undefined4 param_1,int *param_2,int param_3);
extern int func_0054030C(int param_1);
extern int func_00540784(int param_1);
extern int func_00540A78(int param_1,int *param_2);
extern int func_00540AE8(int param_1);
extern int func_00556EAC(int param_1,int param_2);
extern int func_0056D3E4(int param_1,uint *param_2);
extern int func_0057F260(int param_1);
extern int func_0058843C(int param_1,char *param_2);
extern int func_00689024(undefined4 *param_1);
extern int *piRam004ea81c;
extern int *DAT_004ea80c;
extern int DAT_004ea810;
extern int *DAT_004ea814;
extern int *DAT_004ea818;
extern float DAT_004ea820;
extern uint DAT_004ea824;
extern uint DAT_004ea828;
extern uint DAT_004ea82c;
extern uint DAT_004ea830;
extern uint DAT_004ea834;
extern uint DAT_004ea838;
extern uint DAT_004ea83c;

// USA 004EA1E4 <- EU 004EA1BC (Ghidra, non-matching)
// GLOBAL DAT_004ea80c int *
// GLOBAL DAT_004ea810 int
// GLOBAL DAT_004ea814 int *
// GLOBAL DAT_004ea818 int *
// GLOBAL DAT_004ea820 float
// GLOBAL DAT_004ea824 uint
// GLOBAL DAT_004ea828 uint
// GLOBAL DAT_004ea82c uint
// GLOBAL DAT_004ea830 uint
// GLOBAL DAT_004ea834 uint
// GLOBAL DAT_004ea838 uint
// GLOBAL DAT_004ea83c uint
// GLOBAL UNK_004ea81c int *

undefined4 func_004EA1E4(int param_1,int param_2,uint param_3,int *param_4)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int *piVar5;
  int *piVar6;
  uint *puVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  undefined4 *puVar11;
  uint uVar12;
  int iVar13;
  float fparam_0;
  _Alignas(8) unsigned char albw_frame[0xb0];
  #define local_a4 (*(int *)(albw_frame + 0xc))
  #define local_a0 (*(uint * *)(albw_frame + 0x10))
  #define local_58 (*(int *)(albw_frame + 0x58))
  #define local_54 (*(int *)(albw_frame + 0x5c))
  #define local_4c (*(uint *)(albw_frame + 0x64))
  #define iStack_40 (*(int *)(albw_frame + 0x70))
  #define puStack_3c (*(uint * *)(albw_frame + 0x74))
  #define local_38 (*(int *)(albw_frame + 0x78))
  #define local_34 (*(int *)(albw_frame + 0x7c))
  if (*(char *)(*DAT_004ea80c + 0x25) == '\x02' || *(char *)(*DAT_004ea80c + 0x25) == '\x03') {
    *(undefined1 *)(param_1 + 0x7e) = 0;
    *(undefined1 *)(param_1 + 0x7f) = 0;
    return func_00296C48(*(int *)(param_1 + 0x4c),0,param_3,param_4);
  }
  func_00689024(&local_a4);
  bVar8 = true;
  bVar1 = false;
  iVar13 = 0x3c;
  bVar3 = true;
  bVar2 = false;
  local_4c = 0x1e;
  if ((*(char *)(param_1 + 0x7f) != '\0') || (iVar9 = func_004B083C(), iVar9 != 0)) {
    bVar2 = true;
  }
  iVar9 = func_00538FEC(*(int *)(param_1 + 0x50));
  if ((iVar9 != 0) && (iVar9 = func_0054030C(*(int *)(param_1 + 0x4c)), iVar9 != 0)) {
    bVar8 = false;
    bVar3 = false;
    iVar9 = func_00538274(*(int *)(param_1 + 0x50));
    if (iVar9 != 0) {
      func_00293CF0(*(int *)(param_1 + 0x4c),0x2d);
    }
  }
  func_0025A654(*(int *)(param_1 + 0x50));
  iVar9 = DAT_004ea810;
  if (param_2 == 0) {
    if (*(char *)(param_1 + 0x82) != '\0') {
      if ((int)*(char *)(*DAT_004ea814 + 0x18) - 9U < 0xd) {
        local_54 = DAT_004ea818[6];
        local_58 = DAT_004ea810;
        iVar13 = func_00540A78(*(int *)(param_1 + 0x4c),&local_58);
        if (iVar13 == 0) goto LAB_004ea308;
        bVar4 = true;
      }
      else {
LAB_004ea308:
        bVar4 = false;
      }
      if (bVar4) goto LAB_004ea720;
      goto LAB_004ea314;
    }
  }
  else {
LAB_004ea314:
    iVar13 = 0x1e;
  }
  if (!bVar8) goto LAB_004ea720;
  param_3 = 1;
  iVar10 = func_0053900C(*(undefined4 *)(param_1 + 0x50),&local_a4,1);
  if (iVar10 != 0) {
    iVar10 = func_00540A78(*(int *)(param_1 + 0x4c),&local_a4);
    if (iVar10 != 0) goto LAB_004ea720;
    bVar8 = func_00540AE8(*(int *)(param_1 + 0x4c));
    if (bVar8) {
      if (*(char *)(param_1 + 0x7e) == '\0') {
        local_34 = DAT_004ea818[7];
        local_38 = iVar9;
        iVar10 = func_00540A78(*(int *)(param_1 + 0x4c),&local_38);
        if ((iVar10 == 0) && (bVar8 = func_0053819C(*(int *)(param_1 + 0x50)), !bVar8))
        goto LAB_004ea494;
        bVar8 = true;
      }
      else {
LAB_004ea494:
        bVar8 = false;
      }
      if (bVar8) {
        func_00296190(*(int *)(param_1 + 0x4c),iVar13);
      }
      else {
        func_00296BD0(*(int *)(param_1 + 0x4c),iVar13);
      }
      bVar1 = true;
    }
    else {
      iVar10 = func_00540784(*(int *)(param_1 + 0x4c));
      if (iVar10 != 0) {
        func_00296BD0(*(int *)(param_1 + 0x4c),0);
      }
    }
    func_0029450C(*(int *)(param_1 + 0x4c));
    (**(code **)(local_a4 + 8))(&local_a4);
    puVar7 = local_a0;
    puVar11 = func_0057F260(*(int *)(*(int *)(param_1 + 0x24) + 0x140));
    uVar12 = func_0056D3E4((int)puVar11,puVar7);
    if (uVar12 == 0xffffffff) goto LAB_004ea720;
    if ((bVar1) && ((param_2 != 0 || (*(char *)(param_1 + 0x82) != '\0')))) {
      local_4c = iVar13 + 10;
    }
    bVar8 = func_00556EAC(*piRam004ea81c,0x61);
    piVar6 = DAT_004ea818;
    if (!bVar8) {
      puStack_3c = (uint *)DAT_004ea818[5];
      iStack_40 = iVar9;
      (**(code **)(local_a4 + 8))(&local_a4);
      (**(code **)(local_a4 + 8))(&local_a4);
      puVar7 = local_a0;
      (**(code **)(iStack_40 + 8))(&iStack_40);
      piVar5 = DAT_004ea814;
      if (puVar7 == puStack_3c) {
LAB_004ea618:
        bVar8 = true;
      }
      else {
        iVar13 = 0;
        do {
          param_3 = (uint)*(char *)((int)puStack_3c + iVar13);
          param_4 = (int *)local_a0;
          if ((int)*(char *)((int)local_a0 + iVar13) != param_3) break;
          if ((int)*(char *)((int)local_a0 + iVar13) == 0) goto LAB_004ea618;
          iVar13 = iVar13 + 1;
        } while (iVar13 < 0x40001);
        bVar8 = false;
      }
      if (!bVar8 && !bVar2) {
        puStack_3c = (uint *)piVar6[3];
        iStack_40 = iVar9;
        (**(code **)(local_a4 + 8))(&local_a4);
        (**(code **)(local_a4 + 8))(&local_a4);
        puVar7 = local_a0;
        (**(code **)(iStack_40 + 8))(&iStack_40);
        if (puVar7 == puStack_3c) {
LAB_004ea6c4:
          bVar8 = true;
        }
        else {
          iVar13 = 0;
          do {
            if (*(char *)((int)local_a0 + iVar13) != *(char *)((int)puStack_3c + iVar13)) break;
            if (*(char *)((int)local_a0 + iVar13) == '\0') goto LAB_004ea6c4;
            iVar13 = iVar13 + 1;
          } while (iVar13 < 0x40001);
          iVar13 = func_0058843C(*piVar6,(char *)(*piVar5 + 0x18));
          bVar8 = false;
          if (iVar13 != 0) goto LAB_004ea6c4;
        }
        if (bVar8) {
          param_4 = (int *)0x1;
          param_3 = 0x3c;
          func_00294404(*(int *)(param_1 + 0x4c),&local_a4,0x3c,(int *)0x1,1);
        }
        else {
          param_4 = (int *)0x0;
          param_3 = local_4c;
          func_00294404(*(int *)(param_1 + 0x4c),&local_a4,local_4c,(int *)0x0,0);
        }
        goto LAB_004ea720;
      }
    }
    func_00297140(*(int *)(param_1 + 0x4c),&local_a4);
    goto LAB_004ea720;
  }
  bVar8 = func_00540AE8(*(int *)(param_1 + 0x4c));
  if (bVar8) {
    if (*(char *)(param_1 + 0x7e) == '\0') {
      local_54 = DAT_004ea818[7];
      local_58 = iVar9;
      iVar9 = func_00540A78(*(int *)(param_1 + 0x4c),&local_58);
      if ((iVar9 == 0) && (bVar8 = func_0053819C(*(int *)(param_1 + 0x50)), !bVar8))
      goto LAB_004ea3b8;
      bVar8 = true;
    }
    else {
LAB_004ea3b8:
      bVar8 = false;
    }
    iVar9 = *(int *)(param_1 + 0x4c);
    if (bVar8) {
      func_00296190(iVar9,iVar13);
    }
    else {
LAB_004ea3f4:
      func_00296BD0(iVar9,iVar13);
    }
  }
  else {
    iVar13 = func_00540784(*(int *)(param_1 + 0x4c));
    if (iVar13 != 0) {
      iVar9 = *(int *)(param_1 + 0x4c);
      iVar13 = 0;
      goto LAB_004ea3f4;
    }
  }
  iVar13 = func_004B083C();
  if ((iVar13 == 0) && (*(char *)(*DAT_004ea80c + 0x25) != '\x03')) {
    func_0029450C(*(int *)(param_1 + 0x4c));
  }
LAB_004ea720:
  if (bVar3) {
    func_00296C48(*(int *)(param_1 + 0x4c),0x1e,param_3,param_4);
  }
  if (param_2 == 0) {
    iVar13 = 0;
  }
  else {
    iVar13 = 0xf;
  }
  fparam_0 = DAT_004ea820;
  func_00320E80(*(int *)(param_1 + 0x24),DAT_004ea824,iVar13,DAT_004ea820);
  func_00320E80(*(int *)(param_1 + 0x24),DAT_004ea828,iVar13,fparam_0);
  func_00320E80(*(int *)(param_1 + 0x24),DAT_004ea82c,iVar13,fparam_0);
  func_00320E80(*(int *)(param_1 + 0x24),DAT_004ea830,iVar13,fparam_0);
  if (param_2 == 0) {
    iVar13 = 0;
  }
  else {
    iVar13 = 0xf;
  }
  func_00320E80(*(int *)(param_1 + 0x24),DAT_004ea834,iVar13,fparam_0);
  func_00320E80(*(int *)(param_1 + 0x24),DAT_004ea838,iVar13,fparam_0);
  func_00320E80(*(int *)(param_1 + 0x24),DAT_004ea83c,iVar13,fparam_0);
  func_0025AA50(*(undefined4 **)(param_1 + 0x50),param_2);
  *(undefined1 *)(param_1 + 0x82) = 0;
  *(undefined1 *)(param_1 + 0x7b) = 1;
  *(undefined1 *)(param_1 + 0x7e) = 0;
  *(undefined1 *)(param_1 + 0x7f) = 0;
  return 0;
}

