#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_00166C20(int *param_1,uint param_2,int *param_3,int param_4);
extern int func_0016773C(int param_1,int param_2);
extern int func_0017A520(undefined4 *param_1,undefined2 param_2,int *param_3,int param_4);
extern int func_002313DC(int param_1);
extern int func_004B9A10(undefined4 *param_1,undefined1 param_2);
extern int func_005229AC(int *param_1,int *param_2);
extern int DAT_00486b80;
extern int DAT_00486b84;
extern int DAT_00486b9c;
extern undefined DAT_00486ba0;
extern undefined DAT_00486ba4;
extern undefined DAT_00486ba8;
extern int *DAT_00486bbc;
extern int *DAT_00486bcc;
extern char s_Gm_ShopTutorialB_00486b88[];
extern char s_T_Itm_00_00486bb0[];
extern char s_T_Txt_00_00486bc0[];

// USA 00486984 <- EU 0048695C (Ghidra, non-matching)
// GLOBAL DAT_00486b80 int
// GLOBAL DAT_00486b84 int
// GLOBAL DAT_00486b9c int
// GLOBAL DAT_00486ba0 undefined
// GLOBAL DAT_00486ba4 undefined
// GLOBAL DAT_00486ba8 undefined
// GLOBAL DAT_00486bbc int *
// GLOBAL DAT_00486bcc int *
// GLOBAL s_Gm_ShopTutorialB_00486b88 string
// GLOBAL s_T_Itm_00_00486bb0 string
// GLOBAL s_T_Txt_00_00486bc0 string

int * func_00486984(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(int *)(albw_frame + 0x0))
  #define local_1c (*(char * *)(albw_frame + 0x4))
  piVar3 = func_004B9A10(param_1,0);
  iVar2 = DAT_00486b84;
  iVar1 = DAT_00486b80;
  piVar3[0xe] = DAT_00486b80 + 0x54;
  *piVar3 = iVar1;
  *(undefined2 *)(piVar3 + 0x1d) = 0;
  *(undefined2 *)((int)piVar3 + 0x76) = 0xffff;
  piVar3[0x1e] = iVar2;
  piVar3[0x1f] = 0;
  puVar4 = (undefined4 *)func_0010BAB4(0x78);
  puVar5 = (undefined4 *)0x0;
  if (puVar4 != (undefined4 *)0x0) {
    puVar5 = func_0017A520(puVar4,0x400,(int *)0x0,0);
  }
  iVar1 = DAT_00486b9c;
  piVar3[0x20] = (int)puVar5;
  piVar3[0x21] = 0;
  piVar3[0x22] = 0;
  local_1c = s_Gm_ShopTutorialB_00486b88;
  local_20 = iVar1;
  (**(code **)(*piVar3 + 0x38))(piVar3,&local_20,0);
  piVar9 = (int *)piVar3[7];
  func_0016773C((int)piVar9,3);
  local_1c = &DAT_00486ba0;
  local_20 = iVar1;
  func_00166C20(piVar9,0,&local_20,0);
  local_1c = &DAT_00486ba4;
  local_20 = iVar1;
  func_00166C20(piVar9,1,&local_20,0);
  local_1c = &DAT_00486ba8;
  local_20 = iVar1;
  func_00166C20(piVar9,2,&local_20,0);
  piVar3[10] = (int)piVar9;
  *(undefined2 *)((int)piVar3 + 0x22) = 0;
  *(undefined2 *)(piVar3 + 8) = 0;
  piVar3[0xd] = (int)piVar9;
  *(undefined2 *)((int)piVar3 + 0x2e) = 1;
  *(undefined2 *)(piVar3 + 0xb) = 0;
  piVar3[0x1f] = (int)piVar9;
  *(undefined2 *)((int)piVar3 + 0x76) = 2;
  *(undefined2 *)(piVar3 + 0x1d) = 0;
  func_002313DC((int)(piVar3 + 8));
  local_1c = s_T_Itm_00_00486bb0;
  local_20 = iVar1;
  piVar6 = (int *)func_005229AC((int *)piVar3[7],&local_20);
  piVar9 = DAT_00486bbc;
  if (piVar6 != (int *)0x0) {
    piVar7 = (int *)(**(code **)(*piVar6 + 8))(piVar6);
    do {
      if (piVar7 == piVar9) goto LAB_00486ae4;
      piVar7 = (int *)*piVar7;
    } while (piVar7 != (int *)0x0);
  }
  piVar6 = (int *)0x0;
LAB_00486ae4:
  piVar3[0x21] = (int)piVar6;
  local_1c = s_T_Txt_00_00486bc0;
  local_20 = iVar1;
  piVar6 = (int *)func_005229AC((int *)piVar3[7],&local_20);
  piVar9 = DAT_00486bbc;
  if (piVar6 != (int *)0x0) {
    piVar8 = (int *)(**(code **)(*piVar6 + 8))(piVar6);
    piVar7 = DAT_00486bcc;
    do {
      if (piVar8 == piVar9) {
        if (piVar6 != (int *)0x0) {
          piVar9 = (int *)(**(code **)(*piVar6 + 8))(piVar6);
          goto LAB_00486b40;
        }
        break;
      }
      piVar8 = (int *)*piVar8;
    } while (piVar8 != (int *)0x0);
  }
  goto LAB_00486b54;
  while (piVar9 = (int *)*piVar9, piVar9 != (int *)0x0) {
LAB_00486b40:
    if (piVar9 == piVar7) goto LAB_00486b58;
  }
LAB_00486b54:
  piVar6 = (int *)0x0;
LAB_00486b58:
  piVar3[0x22] = (int)piVar6;
  *(undefined1 *)((int)piVar3 + 0xf) = 0x40;
  return piVar3;
}

