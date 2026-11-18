// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern void func_0010F1F8(int *param_1,float fparam_0);
extern int func_001151F8(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_00169A80(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_0019A4C4(int param_1,undefined4 param_2);
extern int func_0019A778(int param_1);
extern int func_0019A848(int param_1);
extern int func_0019A9DC(int param_1);
extern float func_00491624(float *param_1,uint param_2,uint param_3,uint param_4);
extern int func_004CEAF0(int param_1);
extern int func_004CF478(int param_1,int param_2);
extern int func_004ECEFC(void *param_1);
extern int func_0052781C(int param_1);
extern int func_00556DC0(int param_1);
extern int func_00581C5C(int param_1);
extern int *piRam00505b40;
extern int *DAT_00505b34;
extern int *DAT_00505b38;
extern int DAT_00505b3c;

// USA 005059A4 <- EU 0050597C (Ghidra, non-matching)
// GLOBAL DAT_00505b34 int *
// GLOBAL DAT_00505b38 int *
// GLOBAL DAT_00505b3c int
// GLOBAL UNK_00505b40 int *

undefined4 func_005059A4(int param_1,int param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int extraout_r1;
  int iVar4;
  undefined4 extraout_r1_00;
  undefined4 *puVar5;
  int *piVar6;
  int iVar7;
  float in_s0;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define afStack_40 ((float *)(albw_frame + 0x0))
  iVar3 = func_00581C5C(*DAT_00505b34);
  iVar4 = extraout_r1;
  if (iVar3 != 0) {
    iVar4 = *(int *)(param_1 + 0x420);
  }
  if (iVar3 != 0 && iVar4 != iVar3) {
    *(int *)(param_1 + 0x420) = iVar3;
    *(undefined1 *)(param_1 + 0x42c) = 0;
    if (*(short *)(iVar3 + 0x5c) == 0) {
      *(undefined1 *)(param_1 + 0x42c) = 1;
      *(undefined1 *)(param_1 + 0x42d) = 1;
    }
  }
  iVar4 = *DAT_00505b38;
  if (DAT_00505b3c < *(int *)(*(int *)(iVar4 + 0x1c) + 4)) {
    *(undefined1 *)(param_1 + 0x42d) = 0;
  }
  if (((*(char *)(param_1 + 0x42c) != *(char *)(param_1 + 0x42d)) &&
      (*(char *)(param_1 + 0x42c) == '\0')) && (cVar2 = func_00556DC0(iVar4), cVar2 == '\0')) {
    *(undefined1 *)(param_1 + 0x42d) = 0;
  }
  func_004CF478(*(int *)(param_1 + 0x410),(int)*(char *)(param_1 + 0x42d));
  func_004CF478(*(int *)(param_1 + 0x418),(int)*(char *)(param_1 + 0x42d));
  piVar6 = piRam00505b40;
  if (*(char *)(param_1 + 0x42d) != '\0') {
    *(int *)(param_1 + 0x424) = *piRam00505b40 + *(int *)(param_1 + 0x424);
    *(int *)(param_1 + 0x428) = piVar6[1] + *(int *)(param_1 + 0x428);
    piVar6 = (int *)0x0;
    func_00491624(afStack_40,0,*(uint *)(param_1 + 0x424),0);
    iVar4 = *(int *)(param_1 + 0x410);
    puVar5 = (undefined4 *)(param_1 + 0x3d0);
    *(uint *)(iVar4 + 0x164) = *(uint *)(iVar4 + 0x164) | 0x40000000;
    func_001151F8((undefined4 *)(iVar4 + 0x80),afStack_40,puVar5);
    func_00169A80(*(int **)(param_1 + 0x41c),extraout_r1_00,puVar5,piVar6);
    func_00168E9C(*(int **)(param_1 + 0x41c),*(int *)(param_1 + 0x410),(int *)0x0);
    func_004CEAF0(*(int *)(param_1 + 0x410));
    in_s0 = func_00491624(afStack_40,0,*(uint *)(param_1 + 0x428),0);
    iVar4 = *(int *)(param_1 + 0x414);
    *(uint *)(iVar4 + 0x164) = *(uint *)(iVar4 + 0x164) | 0x40000000;
    func_001151F8((undefined4 *)(iVar4 + 0x80),afStack_40,(undefined4 *)(param_1 + 0x3d0));
    func_004CEAF0(*(int *)(param_1 + 0x414));
  }
  *(bool *)(param_1 + 0x3cd) = param_2 == 0;
  iVar7 = *(int *)(param_1 + 0x404);
  iVar4 = *(int *)(param_1 + 0x3fc) - iVar7;
  iVar3 = *(int *)(iVar4 + iVar7 + 4);
  while (iVar4 != (param_1 + 0x3f8) - iVar7) {
    bVar1 = func_0052781C(iVar4);
    if (bVar1) {
      if (*(char *)(param_1 + 0x3cd) == '\0') {
        func_0019A9DC(iVar4);
      }
      else {
        func_0019A778(iVar4);
      }
    }
    else if ((*(char *)(iVar4 + 0x4d) == '\0') && (bVar1 = func_0052781C(iVar4), !bVar1)) {
      func_0019A848(iVar4);
      func_0010F1F8((int *)(*(int *)(param_1 + 0x404) + iVar4),in_s0);
      *(int *)(param_1 + 0x400) = *(int *)(param_1 + 0x400) + -1;
    }
    iVar4 = iVar3 - iVar7;
    iVar3 = *(int *)(iVar3 + 4);
  }
  if (*(int *)(param_1 + 0x3f0) != 0) {
    func_0019A4C4(*(int *)(param_1 + 0x3f0),param_1 + 0x3d0);
    *(undefined4 *)(param_1 + 0x3f0) = 0;
  }
  iVar4 = *(int *)(param_1 + 0x3f4);
  if (iVar4 != 0) {
    if ((*(char *)(iVar4 + 0x4d) != '\0') || (bVar1 = func_0052781C(iVar4), bVar1)) {
      func_0019A4C4(*(int *)(param_1 + 0x3f4),param_1 + 0x3d0);
    }
    else {
      *(undefined4 *)(param_1 + 0x3f4) = 0;
    }
  }
  if (param_2 == 2) {
    if (*(char *)(param_1 + 0x395) != '\0') {
      *(char *)(param_1 + 0x395) = *(char *)(param_1 + 0x395) + -1;
    }
    if (*(char *)(param_1 + 0x396) != '\0') {
      *(char *)(param_1 + 0x396) = *(char *)(param_1 + 0x396) + -1;
    }
  }
  return func_004ECEFC(param_1);
}

