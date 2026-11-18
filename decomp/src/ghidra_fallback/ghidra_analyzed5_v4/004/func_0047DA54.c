#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_00166C20(int *param_1,uint param_2,int *param_3,int param_4);
extern int func_0016773C(int param_1,int param_2);
extern int func_002313DC(int param_1);
extern int func_00254ECC(int param_1,undefined4 param_2);
extern int func_00254EFC(undefined4 *param_1,int *param_2,int *param_3);
extern int func_00428874(undefined4 *param_1,int param_2);
extern int func_00428AC0(undefined4 *param_1);
extern int func_004B948C(int param_1,int param_2);
extern int func_004B9958(int param_1,undefined4 param_2);
extern int func_004B9A10(undefined4 *param_1,undefined1 param_2);
extern int func_005229AC(int *param_1,int *param_2);
extern int DAT_0047dbe8;
extern int DAT_0047dbec;
extern undefined4 DAT_0047dbf0;
extern int DAT_0047dbf4;
extern int DAT_0047dbf8;
extern int *DAT_0047dc1c;
extern char s_L_ArrowIcon_00_0047dbfc[];
extern char s_T_Message_00_0047dc0c[];

// USA 0047DA54 <- EU 0047DA2C (Ghidra, non-matching)
// GLOBAL DAT_0047dbe8 int
// GLOBAL DAT_0047dbec int
// GLOBAL DAT_0047dbf0 undefined4
// GLOBAL DAT_0047dbf4 int
// GLOBAL DAT_0047dbf8 int
// GLOBAL DAT_0047dc1c int *
// GLOBAL s_L_ArrowIcon_00_0047dbfc string
// GLOBAL s_T_Message_00_0047dc0c string

int * func_0047DA54(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int *piVar6;
  int *piVar7;
  uint uVar8;
  int *piVar9;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(int *)(albw_frame + 0x0))
  #define local_1c (*(char * *)(albw_frame + 0x4))
  piVar3 = func_004B9A10(param_1,1);
  iVar2 = DAT_0047dbec;
  iVar1 = DAT_0047dbe8;
  piVar3[0xe] = DAT_0047dbe8 + 0x54;
  *piVar3 = iVar1;
  *(undefined2 *)(piVar3 + 0x1d) = 0;
  *(undefined2 *)((int)piVar3 + 0x76) = 0xffff;
  piVar3[0x1e] = iVar2;
  piVar3[0x1f] = 0;
  piVar3[0x20] = 0;
  puVar4 = (undefined4 *)func_0010BAB4(0x14);
  puVar5 = (undefined4 *)0x0;
  if (puVar4 != (undefined4 *)0x0) {
    puVar5 = func_00428AC0(puVar4);
  }
  piVar3[0x21] = (int)puVar5;
  piVar3[0x22] = 0;
  (**(code **)(*piVar3 + 0x38))(piVar3,DAT_0047dbf0);
  piVar9 = (int *)piVar3[7];
  func_0016773C((int)piVar9,3);
  iVar1 = DAT_0047dbf4;
  uVar8 = 0;
  do {
    func_00166C20(piVar9,uVar8,(int *)(iVar1 + uVar8 * 8),0);
    uVar8 = uVar8 + 1;
  } while ((int)uVar8 < 3);
  piVar3[10] = (int)piVar9;
  *(undefined2 *)((int)piVar3 + 0x22) = 0;
  *(undefined2 *)(piVar3 + 8) = 0;
  func_002313DC((int)(piVar3 + 8));
  piVar3[0xd] = (int)piVar9;
  *(undefined2 *)((int)piVar3 + 0x2e) = 1;
  *(undefined2 *)(piVar3 + 0xb) = 2;
  piVar3[0x1f] = (int)piVar9;
  *(undefined2 *)((int)piVar3 + 0x76) = 2;
  *(undefined2 *)(piVar3 + 0x1d) = 0;
  func_002313DC((int)(piVar3 + 0x1d));
  puVar4 = (undefined4 *)func_0010BAB4(0x44);
  iVar1 = DAT_0047dbf8;
  puVar5 = (undefined4 *)0x0;
  if (puVar4 != (undefined4 *)0x0) {
    local_1c = s_L_ArrowIcon_00_0047dbfc;
    local_20 = DAT_0047dbf8;
    puVar5 = func_00254EFC(puVar4,piVar9,&local_20);
  }
  piVar3[0x22] = (int)puVar5;
  func_00254ECC((int)puVar5,3);
  func_004B948C((int)piVar3,piVar3[0x22]);
  local_1c = s_T_Message_00_0047dc0c;
  local_20 = iVar1;
  piVar6 = (int *)func_005229AC(piVar9,&local_20);
  piVar9 = DAT_0047dc1c;
  if (piVar6 != (int *)0x0) {
    piVar7 = (int *)(**(code **)(*piVar6 + 8))(piVar6);
    do {
      if (piVar7 == piVar9) goto LAB_0047dbb8;
      piVar7 = (int *)*piVar7;
    } while (piVar7 != (int *)0x0);
  }
  piVar6 = (int *)0x0;
LAB_0047dbb8:
  piVar3[0x20] = (int)piVar6;
  func_00428874((undefined4 *)piVar3[0x21],(int)piVar6);
  *(undefined1 *)((int)piVar3 + 0xf) = 0x41;
  func_004B9958((int)piVar3,2);
  return piVar3;
}

