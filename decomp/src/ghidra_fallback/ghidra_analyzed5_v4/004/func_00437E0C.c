#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_0014D0F4(undefined4 *param_1);
extern int func_00166C20(int *param_1,uint param_2,int *param_3,int param_4);
extern int func_0016773C(int param_1,int param_2);
extern int func_0028BE38(undefined4 *param_1,int *param_2,int *param_3);
extern int func_004B9A10(undefined4 *param_1,undefined1 param_2);
extern int DAT_00437f28;
extern undefined4 DAT_00437f2c;
extern int DAT_00437f38;
extern undefined4 DAT_00437f48;
extern undefined4 *DAT_00437f4c;
extern undefined4 DAT_00437f50;
extern char s_InOut_00437f30[];
extern char s_L_Close_00_00437f3c[];

// USA 00437E0C <- EU 00437DEC (Ghidra, non-matching)
// GLOBAL DAT_00437f28 int
// GLOBAL DAT_00437f2c undefined4
// GLOBAL DAT_00437f38 int
// GLOBAL DAT_00437f48 undefined4
// GLOBAL DAT_00437f4c undefined4 *
// GLOBAL DAT_00437f50 undefined4
// GLOBAL s_InOut_00437f30 string
// GLOBAL s_L_Close_00_00437f3c string

int * func_00437E0C(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int *piVar7;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(int *)(albw_frame + 0x0))
  #define local_1c (*(char * *)(albw_frame + 0x4))
  piVar2 = func_004B9A10(param_1,3);
  iVar1 = DAT_00437f28;
  *piVar2 = DAT_00437f28 + -0x54;
  piVar2[0xe] = iVar1;
  piVar2[0x1d] = 0;
  piVar2[0x1e] = 0;
  *(undefined1 *)(piVar2 + 0x1f) = 0;
  (**(code **)(iVar1 + -0x1c))(piVar2,DAT_00437f2c,0);
  piVar7 = (int *)piVar2[7];
  func_0016773C((int)piVar7,1);
  iVar1 = DAT_00437f38;
  local_1c = s_InOut_00437f30;
  local_20 = DAT_00437f38;
  func_00166C20(piVar7,0,&local_20,0);
  piVar2[10] = (int)piVar7;
  *(undefined2 *)((int)piVar2 + 0x22) = 0;
  *(undefined2 *)(piVar2 + 8) = 0;
  piVar2[0xd] = (int)piVar7;
  *(undefined2 *)((int)piVar2 + 0x2e) = 0;
  *(undefined2 *)(piVar2 + 0xb) = 2;
  puVar3 = (undefined4 *)func_0010BAB4(0x70);
  puVar4 = (undefined4 *)0x0;
  if (puVar3 != (undefined4 *)0x0) {
    local_1c = s_L_Close_00_00437f3c;
    local_20 = iVar1;
    puVar4 = func_0028BE38(puVar3,piVar7,&local_20);
  }
  piVar2[0x1d] = (int)puVar4;
  puVar3 = (undefined4 *)func_0010BAB4(0x150);
  puVar4 = (undefined4 *)0x0;
  if (puVar3 != (undefined4 *)0x0) {
    puVar4 = func_0014D0F4(puVar3);
    puVar3 = DAT_00437f4c;
    *puVar4 = DAT_00437f48;
    puVar4[0x4c] = 0xffffffff;
    puVar4[0x4d] = 0;
    uVar5 = *puVar3;
    uVar6 = puVar3[1];
    puVar4[0x4f] = puVar4;
    puVar4[0x50] = uVar5;
    puVar4[0x51] = uVar6;
    puVar4[0x4e] = DAT_00437f50;
    puVar4[0x52] = 0;
    puVar4[0x53] = 0;
  }
  piVar2[0x1e] = (int)puVar4;
  piVar2[6] = piVar2[6] | 0x40;
  *(undefined1 *)((int)piVar2 + 0xf) = 0x44;
  return piVar2;
}

