#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_00166C20(int *param_1,uint param_2,int *param_3,int param_4);
extern int func_0016773C(int param_1,int param_2);
extern int func_0017A520(undefined4 *param_1,undefined2 param_2,int *param_3,int param_4);
extern int func_002313DC(int param_1);
extern int func_0031B220(int param_1,int *param_2,int *param_3);
extern int func_0031BFA0(undefined4 *param_1);
extern int func_004B9A10(undefined4 *param_1,undefined1 param_2);
extern int func_005229AC(int *param_1,int *param_2);
extern int DAT_00486738;
extern undefined4 DAT_0048673c;
extern undefined1 *DAT_00486740;
extern int DAT_00486760;
extern undefined DAT_00486764;
extern undefined DAT_00486770;
extern int *DAT_00486784;
extern char s_Change_00486768[];
extern char s_Gm_MainSystemItemTutorialT_00486744[];
extern char s_L_ItemIcon_00_00486798[];
extern char s_T_ItemName_00_00486774[];
extern char s_T_ItemText_00_00486788[];

// USA 004864E8 <- EU 004864C0 (Ghidra, non-matching)
// GLOBAL DAT_00486738 int
// GLOBAL DAT_0048673c undefined4
// GLOBAL DAT_00486740 undefined1 *
// GLOBAL DAT_00486760 int
// GLOBAL DAT_00486764 undefined
// GLOBAL DAT_00486770 undefined
// GLOBAL DAT_00486784 int *
// GLOBAL s_Change_00486768 string
// GLOBAL s_Gm_MainSystemItemTutorialT_00486744 string
// GLOBAL s_L_ItemIcon_00_00486798 string
// GLOBAL s_T_ItemName_00_00486774 string
// GLOBAL s_T_ItemText_00_00486788 string

int * func_004864E8(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(int *)(albw_frame + 0x8))
  #define local_24 (*(char * *)(albw_frame + 0xc))
  piVar5 = func_004B9A10(param_1,0);
  iVar6 = DAT_00486738;
  *piVar5 = DAT_00486738;
  piVar5[0xe] = iVar6 + 0x54;
  iVar6 = func_0031BFA0(piVar5 + 0x1d);
  piVar5 = (int *)(iVar6 + -0x74);
  *(undefined2 *)(iVar6 + 0x50) = 0;
  uVar1 = DAT_0048673c;
  *(undefined2 *)(iVar6 + 0x52) = 0xffff;
  *(undefined4 *)(iVar6 + 0x54) = uVar1;
  *(undefined4 *)(iVar6 + 0x58) = 0;
  puVar7 = (undefined4 *)func_0010BAB4(0x78);
  puVar8 = (undefined4 *)0x0;
  if (puVar7 != (undefined4 *)0x0) {
    puVar8 = func_0017A520(puVar7,0x400,(int *)0x0,0);
  }
  *(undefined4 **)(iVar6 + 0x5c) = puVar8;
  puVar7 = (undefined4 *)func_0010BAB4(0x78);
  puVar8 = (undefined4 *)0x0;
  if (puVar7 != (undefined4 *)0x0) {
    puVar8 = func_0017A520(puVar7,0x400,(int *)0x0,0);
  }
  puVar2 = DAT_00486740;
  *(undefined4 **)(iVar6 + 0x60) = puVar8;
  *(undefined4 *)(iVar6 + 100) = 0;
  *(undefined4 *)(iVar6 + 0x68) = 0;
  *(undefined1 *)(iVar6 + 0x6c) = 0xff;
  *(undefined1 *)(iVar6 + 0x6d) = 0xff;
  iVar3 = DAT_00486760;
  *(undefined1 *)(iVar6 + 0x6e) = 0;
  *puVar2 = 1;
  local_24 = s_Gm_MainSystemItemTutorialT_00486744;
  local_28 = iVar3;
  (**(code **)(*piVar5 + 0x38))(piVar5,&local_28,0);
  piVar11 = *(int **)(iVar6 + -0x58);
  func_0016773C((int)piVar11,3);
  local_24 = &DAT_00486764;
  local_28 = iVar3;
  func_00166C20(piVar11,0,&local_28,0);
  local_24 = s_Change_00486768;
  local_28 = iVar3;
  func_00166C20(piVar11,1,&local_28,0);
  local_24 = &DAT_00486770;
  local_28 = iVar3;
  func_00166C20(piVar11,2,&local_28,0);
  *(int **)(iVar6 + -0x4c) = piVar11;
  *(undefined2 *)(iVar6 + -0x52) = 0;
  *(undefined2 *)(iVar6 + -0x54) = 0;
  *(int **)(iVar6 + -0x40) = piVar11;
  *(undefined2 *)(iVar6 + -0x46) = 2;
  *(undefined2 *)(iVar6 + -0x48) = 0;
  func_002313DC(iVar6 + -0x54);
  *(int **)(iVar6 + 0x58) = piVar11;
  *(undefined2 *)(iVar6 + 0x52) = 1;
  *(undefined2 *)(iVar6 + 0x50) = 0;
  local_24 = s_T_ItemName_00_00486774;
  local_28 = iVar3;
  piVar9 = (int *)func_005229AC(*(int **)(iVar6 + -0x58),&local_28);
  piVar4 = DAT_00486784;
  if (piVar9 != (int *)0x0) {
    piVar10 = (int *)(**(code **)(*piVar9 + 8))(piVar9);
    do {
      if (piVar10 == piVar4) goto LAB_0048668c;
      piVar10 = (int *)*piVar10;
    } while (piVar10 != (int *)0x0);
  }
  piVar9 = (int *)0x0;
LAB_0048668c:
  *(int **)(iVar6 + 100) = piVar9;
  puVar8 = *(undefined4 **)(iVar6 + 0x5c);
  *puVar8 = piVar9 + 0x45;
  piVar9[0x4a] = (int)puVar8;
  local_24 = s_T_ItemText_00_00486788;
  local_28 = iVar3;
  piVar9 = (int *)func_005229AC(*(int **)(iVar6 + -0x58),&local_28);
  piVar4 = DAT_00486784;
  if (piVar9 != (int *)0x0) {
    piVar10 = (int *)(**(code **)(*piVar9 + 8))(piVar9);
    do {
      if (piVar10 == piVar4) goto LAB_004866ec;
      piVar10 = (int *)*piVar10;
    } while (piVar10 != (int *)0x0);
  }
  piVar9 = (int *)0x0;
LAB_004866ec:
  *(int **)(iVar6 + 0x68) = piVar9;
  puVar8 = *(undefined4 **)(iVar6 + 0x60);
  *puVar8 = piVar9 + 0x45;
  piVar9[0x4a] = (int)puVar8;
  local_24 = s_L_ItemIcon_00_00486798;
  local_28 = iVar3;
  func_0031B220(iVar6,piVar11,&local_28);
  *(uint *)(iVar6 + -0x5c) = *(uint *)(iVar6 + -0x5c) | 0x40;
  *puVar2 = 0;
  return piVar5;
}

