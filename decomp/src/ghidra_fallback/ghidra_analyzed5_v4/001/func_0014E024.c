#include "ghidra_types.h"

extern void func_0010F1F8(int *param_1,float fparam_0);
extern int func_00133D34(uint *param_1,int param_2,int param_3);
extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_00169A80(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_0019A4C4(int param_1,undefined4 param_2);
extern int func_0019A778(int param_1);
extern int func_0019A848(int param_1);
extern int func_0019A9DC(int param_1);
extern int func_004CF478(int param_1,int param_2);
extern int func_004ECEFC(void *param_1);
extern int func_00521004(int param_1);
extern int func_0052781C(int param_1);
extern int func_00588BF0(int param_1,int param_2);
extern int func_006901E4(undefined4 *param_1,int param_2);

// USA 0014E024 <- EU 0014E024 (Ghidra, non-matching)

undefined4 func_0014E024(int param_1,int param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint extraout_r1;
  uint uVar5;
  int extraout_r1_00;
  int iVar6;
  int extraout_r1_01;
  int *piVar7;
  int iVar8;
  float in_s0;
  
  iVar6 = param_2;
  if (*(char *)(param_1 + 0x558) == '\0') {
    uVar3 = func_00521004(param_1);
    uVar5 = extraout_r1;
    if (uVar3 != 0) {
      uVar5 = (uint)*(ushort *)(param_1 + 0x36);
    }
    if (uVar3 != 0 && uVar5 != 0) {
      bVar2 = func_00588BF0(param_1,0);
      uVar3 = (uint)bVar2;
    }
    param_3 = 0;
    *(char *)(*(int *)(param_1 + 0x534) + 0x44) = (char)uVar3;
    param_4 = *(int **)(param_1 + 0x530);
    func_004CF478((int)param_4,uVar3);
    iVar6 = extraout_r1_00;
  }
  uVar5 = 0;
  if (0 < *(int *)(param_1 + 0x538)) {
    do {
      if (uVar5 < *(uint *)(param_1 + 0x538)) {
        iVar6 = *(int *)(param_1 + 0x540);
        piVar7 = *(int **)(iVar6 + uVar5 * 4);
      }
      else {
        piVar7 = (int *)0x0;
      }
      func_00169A80(piVar7,iVar6,param_3,param_4);
      param_3 = 0;
      func_00168E9C(piVar7,*(int *)(param_1 + 0x530),(int *)0x0);
      uVar5 = uVar5 + 1;
      iVar6 = extraout_r1_01;
    } while ((int)uVar5 < *(int *)(param_1 + 0x538));
  }
  uVar5 = 0;
  if (0 < *(int *)(param_1 + 0x544)) {
    do {
      if (uVar5 < *(uint *)(param_1 + 0x544)) {
        puVar4 = *(undefined4 **)(*(int *)(param_1 + 0x54c) + uVar5 * 4);
      }
      else {
        puVar4 = (undefined4 *)0x0;
      }
      func_006901E4(puVar4,*(int *)(param_1 + 0x530));
      uVar5 = uVar5 + 1;
    } while ((int)uVar5 < *(int *)(param_1 + 0x544));
  }
  func_00133D34((uint *)(param_1 + 0x40c),param_1,*(int *)(param_1 + 0x530));
  *(bool *)(param_1 + 0x3cd) = param_2 == 0;
  iVar8 = *(int *)(param_1 + 0x404);
  iVar6 = *(int *)(param_1 + 0x3fc) - iVar8;
  iVar1 = *(int *)(iVar6 + iVar8 + 4);
  while (iVar6 != (param_1 + 0x3f8) - iVar8) {
    bVar2 = func_0052781C(iVar6);
    if (bVar2) {
      if (*(char *)(param_1 + 0x3cd) == '\0') {
        func_0019A9DC(iVar6);
      }
      else {
        func_0019A778(iVar6);
      }
    }
    else if ((*(char *)(iVar6 + 0x4d) == '\0') && (bVar2 = func_0052781C(iVar6), !bVar2)) {
      func_0019A848(iVar6);
      func_0010F1F8((int *)(*(int *)(param_1 + 0x404) + iVar6),in_s0);
      *(int *)(param_1 + 0x400) = *(int *)(param_1 + 0x400) + -1;
    }
    iVar6 = iVar1 - iVar8;
    iVar1 = *(int *)(iVar1 + 4);
  }
  if (*(int *)(param_1 + 0x3f0) != 0) {
    func_0019A4C4(*(int *)(param_1 + 0x3f0),param_1 + 0x3d0);
    *(undefined4 *)(param_1 + 0x3f0) = 0;
  }
  iVar6 = *(int *)(param_1 + 0x3f4);
  if (iVar6 != 0) {
    if ((*(char *)(iVar6 + 0x4d) != '\0') || (bVar2 = func_0052781C(iVar6), bVar2)) {
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

