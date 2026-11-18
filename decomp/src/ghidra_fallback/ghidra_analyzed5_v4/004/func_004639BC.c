#include "ghidra_types.h"

extern int func_0010983C(undefined4 param_1,undefined4 param_2);
extern int func_0010BAB4(undefined4 param_1);
extern int func_00166C20(int *param_1,uint param_2,int *param_3,int param_4);
extern int func_0016773C(int param_1,int param_2);
extern int func_0025D4F4(int param_1);
extern int func_00463FE8(undefined4 *param_1,int *param_2,int param_3);
extern int *DAT_00463af0;
extern undefined4 *DAT_00463af4;
extern undefined1 *DAT_00463af8;
extern undefined4 DAT_00463afc;
extern undefined4 DAT_00463b00;
extern int DAT_00463b04;
extern undefined4 DAT_00463b08;

// USA 004639BC <- EU 00463994 (Ghidra, non-matching)
// GLOBAL DAT_00463af0 int *
// GLOBAL DAT_00463af4 undefined4 *
// GLOBAL DAT_00463af8 undefined1 *
// GLOBAL DAT_00463afc undefined4
// GLOBAL DAT_00463b00 undefined4
// GLOBAL DAT_00463b04 int
// GLOBAL DAT_00463b08 undefined4

void func_004639BC(int *param_1)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(int *)(albw_frame + 0x0))
  #define local_2c (*(undefined4 *)(albw_frame + 0x4))
  puVar1 = DAT_00463af4;
  if (*(int *)(*DAT_00463af0 + 0x50) == 0) {
    iVar8 = 1;
  }
  else {
    iVar8 = func_0010983C(*DAT_00463af4,*(int *)(*DAT_00463af0 + 0x50));
  }
  uVar3 = DAT_00463afc;
  puVar2 = DAT_00463af8;
  *DAT_00463af8 = 1;
  (**(code **)(*param_1 + 0x38))(param_1,uVar3,0);
  piVar6 = (int *)param_1[7];
  func_0016773C((int)piVar6,2);
  iVar4 = DAT_00463b04;
  local_2c = DAT_00463b00;
  local_30 = DAT_00463b04;
  func_00166C20(piVar6,0,&local_30,0);
  local_2c = DAT_00463b08;
  local_30 = iVar4;
  func_00166C20(piVar6,1,&local_30,0);
  param_1[10] = (int)piVar6;
  *(undefined2 *)((int)param_1 + 0x22) = 0;
  *(undefined2 *)(param_1 + 8) = 0;
  param_1[0xd] = (int)piVar6;
  *(undefined2 *)((int)param_1 + 0x2e) = 1;
  *(undefined2 *)(param_1 + 0xb) = 0;
  uVar7 = 0;
  *(undefined1 *)((int)param_1 + 0xf) = 0x43;
  do {
    puVar5 = (undefined4 *)func_0010BAB4(0x58);
    if (puVar5 == (undefined4 *)0x0) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      puVar5 = func_00463FE8(puVar5,(int *)param_1[7],uVar7);
    }
    piVar6 = param_1 + 0x32;
    if (uVar7 < 0x1a) {
      piVar6 = piVar6 + uVar7;
    }
    uVar7 = uVar7 + 1;
    *piVar6 = (int)puVar5;
  } while (uVar7 < 0x1a);
  param_1[0x53] = 2;
  func_0025D4F4(param_1[0x4d]);
  if ((int *)param_1[0x4d] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x4d] + 4))((int *)param_1[0x4d]);
  }
  *puVar2 = 0;
  if (iVar8 != 1) {
    func_0010983C(*puVar1,iVar8);
  }
  return;
}

