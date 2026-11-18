#include "ghidra_types.h"

extern int func_00267250(int param_1,undefined4 *param_2,uint param_3,uint param_4);
extern int func_004A1B9C(int *param_1,int param_2,uint *param_3);
extern int func_004CEA18(int param_1,int param_2,uint param_3);
extern int func_004CF478(int param_1,int param_2);
extern int func_0053A4CC(int param_1,float *param_2,uint param_3);
extern int func_00584C14(int param_1,int *param_2);
extern int DAT_002694c0;
extern int DAT_002694c4;
extern int DAT_002694c8;
extern char s_BreakHead_002694b4[];

// USA 00269288 <- EU 002692B0 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 uint
// GLOBAL DAT_002694c0 int
// GLOBAL DAT_002694c4 int
// GLOBAL DAT_002694c8 int
// GLOBAL s_BreakHead_002694b4 string

undefined4 func_00269288(int param_1,uint param_2,int param_3,int param_4,uint param_5)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  uint uVar9;
  bool bVar10;
  bool bVar11;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define afStack_30 ((float *)(albw_frame + 0x0))
  bVar10 = param_4 == 0xf;
  iVar6 = param_1 + 0xb18;
  iVar2 = iVar6 + param_2 * 0x14;
  iVar3 = iVar6;
  if (param_2 < 5) {
    iVar3 = iVar2;
  }
  iVar3 = *(int *)(iVar3 + 0x10);
  if (!bVar10) {
    param_3 = 4;
  }
  if (param_2 < 5) {
    iVar5 = *(int *)(iVar2 + 0x10) - param_3;
    *(int *)(iVar2 + 0x10) = iVar5;
    if (iVar5 < 0) {
      *(undefined4 *)(iVar2 + 0x10) = 0;
    }
  }
  bVar11 = param_2 == 0;
  if (4 < param_2) {
    iVar2 = iVar6;
  }
  bVar1 = *(int *)(iVar2 + 0x10) < 1;
  if (bVar11) {
    if ((0x18 < iVar3) && (*(int *)(param_1 + 0x344) != 0)) {
      func_004A1B9C((int *)afStack_30,*(int *)(param_1 + 0x344),(uint *)s_BreakHead_002694b4);
    }
    if (!bVar1) {
      uVar9 = 0;
      if (*(int *)(param_1 + 0xb28) < 1) {
        uVar9 = 2;
      }
      else if (*(int *)(param_1 + 0xb28) < 0x19) {
        uVar9 = 1;
      }
      uVar7 = 0;
      do {
        piVar8 = (int *)(param_1 + 0x8ec);
        if (uVar7 < 2) {
          piVar8 = (int *)(param_1 + 0x8ec) + uVar7;
        }
        func_004CF478(*(int *)(*piVar8 + 0x18),(uint)(uVar7 == uVar9));
        uVar7 = uVar7 + 1;
      } while ((int)uVar7 < 2);
    }
  }
  else {
    if (*(char *)(param_1 + 0x8cc) == '\n') {
      iVar3 = DAT_002694c8 + param_2 * 8;
      piVar8 = (int *)(iVar3 + -8);
      (**(code **)(*piVar8 + 8))(piVar8);
      iVar2 = *(int *)(param_1 + 0x344);
      puVar4 = *(uint **)(iVar3 + -4);
    }
    else {
      iVar3 = DAT_002694c0 + param_2 * 8;
      piVar8 = (int *)(iVar3 + -8);
      (**(code **)(*piVar8 + 8))(piVar8);
      iVar2 = *(int *)(param_1 + 0x344);
      puVar4 = *(uint **)(iVar3 + -4);
    }
    if (iVar2 != 0) {
      func_004A1B9C((int *)afStack_30,iVar2,puVar4);
    }
    if (bVar1) {
      uVar9 = func_00584C14(*(int *)(param_1 + 0x40c),(int *)(DAT_002694c4 + param_2 * 8 + -8));
      func_004CEA18(*(int *)(param_1 + 0x40c),0,uVar9);
    }
  }
  if (((bool)((bVar11 && bVar10) & ~bVar1)) || ((bool)((bVar10 || bVar1) & ~bVar11))) {
    func_0053A4CC(param_1,afStack_30,param_2);
    func_00267250(param_1,afStack_30,param_2,param_5);
  }
  *(undefined1 *)(param_1 + 0xba5) = 1;
  return 1;
}

