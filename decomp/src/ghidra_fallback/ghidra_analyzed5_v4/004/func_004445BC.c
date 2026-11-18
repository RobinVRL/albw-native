#include "ghidra_types.h"

extern int func_00166C20(int *param_1,uint param_2,int *param_3,int param_4);
extern int func_0016773C(int param_1,int param_2);
extern int func_002313DC(int param_1);
extern int func_004B9A10(undefined4 *param_1,undefined1 param_2);
extern int func_005229AC(int *param_1,int *param_2);
extern int DAT_004447c0;
extern int DAT_004447c4;
extern undefined1 *DAT_004447c8;
extern undefined4 *DAT_004447cc;
extern int DAT_004447d0;
extern undefined DAT_004447d4;
extern undefined DAT_004447e4;
extern undefined DAT_004447ec;
extern int *DAT_004447fc;
extern char s_T_GuideS_00_00444800[];
extern char s_T_Guide_00_004447f0[];
extern char s_TextChange_004447d8[];

// USA 004445BC <- EU 0044459C [EDITED REGION: check by hand] (Ghidra, non-matching)
// GLOBAL DAT_004447c0 int
// GLOBAL DAT_004447c4 int
// GLOBAL DAT_004447c8 undefined1 *
// GLOBAL DAT_004447cc undefined4 *
// GLOBAL DAT_004447d0 int
// GLOBAL DAT_004447d4 undefined
// GLOBAL DAT_004447e4 undefined
// GLOBAL DAT_004447ec undefined
// GLOBAL DAT_004447fc int *
// GLOBAL s_T_GuideS_00_00444800 string
// GLOBAL s_T_Guide_00_004447f0 string
// GLOBAL s_TextChange_004447d8 string

int * func_004445BC(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined4 *puVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(int *)(albw_frame + 0x8))
  #define local_24 (*(char * *)(albw_frame + 0xc))
  piVar5 = func_004B9A10(param_1,0);
  iVar2 = DAT_004447c4;
  iVar1 = DAT_004447c0;
  piVar5[0xe] = DAT_004447c0 + 0x54;
  *piVar5 = iVar1;
  *(undefined2 *)(piVar5 + 0x1d) = 0;
  *(undefined2 *)((int)piVar5 + 0x76) = 0xffff;
  piVar5[0x1e] = iVar2;
  piVar5[0x1f] = 0;
  *(undefined2 *)(piVar5 + 0x20) = 0;
  *(undefined2 *)((int)piVar5 + 0x82) = 0xffff;
  piVar5[0x21] = iVar2;
  piVar5[0x22] = 0;
  puVar3 = DAT_004447c8;
  piVar5[0x23] = 0;
  puVar4 = DAT_004447cc;
  piVar5[0x24] = 0;
  *(undefined1 *)(piVar5 + 0x25) = 0xff;
  *(undefined1 *)((int)piVar5 + 0x95) = 0;
  *puVar3 = 1;
  iVar1 = DAT_004447d0;
  local_24 = (char *)*puVar4;
  local_28 = DAT_004447d0;
  (**(code **)(*piVar5 + 0x38))(piVar5,&local_28,0);
  piVar8 = (int *)piVar5[7];
  func_0016773C((int)piVar8,4);
  local_24 = &DAT_004447d4;
  local_28 = iVar1;
  func_00166C20(piVar8,0,&local_28,0);
  local_24 = s_TextChange_004447d8;
  local_28 = iVar1;
  func_00166C20(piVar8,1,&local_28,0);
  local_24 = &DAT_004447e4;
  local_28 = iVar1;
  func_00166C20(piVar8,2,&local_28,0);
  local_24 = &DAT_004447ec;
  local_28 = iVar1;
  func_00166C20(piVar8,3,&local_28,0);
  piVar5[10] = (int)piVar8;
  *(undefined2 *)((int)piVar5 + 0x22) = 0;
  *(undefined2 *)(piVar5 + 8) = 0;
  piVar5[0xd] = (int)piVar8;
  *(undefined2 *)((int)piVar5 + 0x2e) = 3;
  *(undefined2 *)(piVar5 + 0xb) = 0;
  func_002313DC((int)(piVar5 + 8));
  piVar5[0x1f] = (int)piVar8;
  *(undefined2 *)((int)piVar5 + 0x76) = 2;
  *(undefined2 *)(piVar5 + 0x1d) = 0;
  piVar5[0x22] = (int)piVar8;
  *(undefined2 *)((int)piVar5 + 0x82) = 1;
  *(undefined2 *)(piVar5 + 0x20) = 0;
  local_24 = s_T_Guide_00_004447f0;
  local_28 = iVar1;
  piVar6 = (int *)func_005229AC((int *)piVar5[7],&local_28);
  piVar8 = DAT_004447fc;
  if (piVar6 != (int *)0x0) {
    piVar7 = (int *)(**(code **)(*piVar6 + 8))(piVar6);
    do {
      if (piVar7 == piVar8) goto LAB_00444750;
      piVar7 = (int *)*piVar7;
    } while (piVar7 != (int *)0x0);
  }
  piVar6 = (int *)0x0;
LAB_00444750:
  piVar5[0x23] = (int)piVar6;
  local_24 = s_T_GuideS_00_00444800;
  local_28 = iVar1;
  piVar6 = (int *)func_005229AC((int *)piVar5[7],&local_28);
  piVar8 = DAT_004447fc;
  if (piVar6 != (int *)0x0) {
    piVar7 = (int *)(**(code **)(*piVar6 + 8))(piVar6);
    do {
      if (piVar7 == piVar8) goto LAB_004447a0;
      piVar7 = (int *)*piVar7;
    } while (piVar7 != (int *)0x0);
  }
  piVar6 = (int *)0x0;
LAB_004447a0:
  piVar5[0x24] = (int)piVar6;
  piVar5[6] = piVar5[6] | 0x40;
  *puVar3 = 0;
  return piVar5;
}

