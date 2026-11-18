#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_00166C20(int *param_1,uint param_2,int *param_3,int param_4);
extern int func_0016773C(int param_1,int param_2);
extern int func_0017A520(undefined4 *param_1,undefined2 param_2,int *param_3,int param_4);
extern int func_002313DC(int param_1);
extern int func_004B9958(int param_1,undefined4 param_2);
extern int func_004B9A10(undefined4 *param_1,undefined1 param_2);
extern int func_005229AC(int *param_1,int *param_2);
extern int DAT_004819a8;
extern int DAT_004819ac;
extern int DAT_004819b0;
extern undefined4 DAT_004819b4;
extern int DAT_004819b8;
extern int DAT_004819c8;
extern int *DAT_004819cc;
extern char s_T_Timer_00_004819bc[];

// USA 00481858 <- EU 00481830 (Ghidra, non-matching)
// GLOBAL DAT_004819a8 int
// GLOBAL DAT_004819ac int
// GLOBAL DAT_004819b0 int
// GLOBAL DAT_004819b4 undefined4
// GLOBAL DAT_004819b8 int
// GLOBAL DAT_004819c8 int
// GLOBAL DAT_004819cc int *
// GLOBAL s_T_Timer_00_004819bc string

int * func_00481858(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(int *)(albw_frame + 0x0))
  #define local_1c (*(char * *)(albw_frame + 0x4))
  piVar1 = func_004B9A10(param_1,0);
  iVar6 = DAT_004819a8 + 0x54;
  *piVar1 = DAT_004819a8;
  piVar1[0xe] = iVar6;
  iVar6 = DAT_004819ac;
  *(undefined2 *)(piVar1 + 0x1d) = 0;
  *(undefined2 *)((int)piVar1 + 0x76) = 0xffff;
  piVar1[0x1e] = iVar6;
  piVar1[0x1f] = 0;
  piVar1[0x20] = 0;
  puVar2 = (undefined4 *)func_0010BAB4(0x78);
  puVar3 = (undefined4 *)0x0;
  if (puVar2 != (undefined4 *)0x0) {
    puVar3 = func_0017A520(puVar2,0x400,(int *)0x0,0);
  }
  iVar6 = DAT_004819b0;
  piVar1[0x21] = (int)puVar3;
  iVar7 = *(int *)(iVar6 + 0x14);
  piVar1[0x22] = *(int *)(iVar6 + 0x10);
  piVar1[0x23] = iVar7;
  piVar1[0x24] = 0;
  piVar1[0x25] = -1;
  (**(code **)(*piVar1 + 0x38))(piVar1,DAT_004819b4);
  piVar9 = (int *)piVar1[7];
  func_0016773C((int)piVar9,3);
  iVar6 = DAT_004819b8;
  uVar8 = 0;
  do {
    func_00166C20(piVar9,uVar8,(int *)(iVar6 + uVar8 * 8),0);
    uVar8 = uVar8 + 1;
  } while ((int)uVar8 < 3);
  piVar1[10] = (int)piVar9;
  *(undefined2 *)((int)piVar1 + 0x22) = 0;
  *(undefined2 *)(piVar1 + 8) = 0;
  func_002313DC((int)(piVar1 + 8));
  piVar1[0xd] = (int)piVar9;
  *(undefined2 *)((int)piVar1 + 0x2e) = 1;
  *(undefined2 *)(piVar1 + 0xb) = 2;
  piVar1[0x1f] = (int)piVar9;
  *(undefined2 *)((int)piVar1 + 0x76) = 2;
  *(undefined2 *)(piVar1 + 0x1d) = 0;
  local_1c = s_T_Timer_00_004819bc;
  local_20 = DAT_004819c8;
  piVar4 = (int *)func_005229AC(piVar9,&local_20);
  piVar9 = DAT_004819cc;
  if (piVar4 != (int *)0x0) {
    piVar5 = (int *)(**(code **)(*piVar4 + 8))(piVar4);
    do {
      if (piVar5 == piVar9) goto LAB_0048198c;
      piVar5 = (int *)*piVar5;
    } while (piVar5 != (int *)0x0);
  }
  piVar4 = (int *)0x0;
LAB_0048198c:
  piVar1[0x20] = (int)piVar4;
  func_004B9958((int)piVar1,2);
  return piVar1;
}

