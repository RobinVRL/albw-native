#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_00166C20(int *param_1,uint param_2,int *param_3,int param_4);
extern int func_0016773C(int param_1,int param_2);
extern int func_00168100(int *param_1,int *param_2,int *param_3);
extern int func_00168434(undefined4 *param_1);
extern int func_00232540(undefined4 *param_1);
extern int func_002C00A8(int param_1);
extern int func_002C00D4(undefined4 *param_1,undefined4 param_2,int *param_3);
extern int func_002C0294(undefined4 *param_1);
extern undefined4 DAT_004641ac;
extern undefined4 DAT_004641b0;
extern int DAT_004641b4;
extern int DAT_004641c4;
extern undefined DAT_004641dc;
extern char s_OnOff_004641d4[];
extern char s_TouchDecide_004641c8[];
extern char s_TouchOnOff_004641b8[];

// USA 00463FE8 <- EU 00463FC0 (Ghidra, non-matching)
// GLOBAL DAT_004641ac undefined4
// GLOBAL DAT_004641b0 undefined4
// GLOBAL DAT_004641b4 int
// GLOBAL DAT_004641c4 int
// GLOBAL DAT_004641dc undefined
// GLOBAL s_OnOff_004641d4 string
// GLOBAL s_TouchDecide_004641c8 string
// GLOBAL s_TouchOnOff_004641b8 string

undefined4 * func_00463FE8(undefined4 *param_1,int *param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int *piVar6;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(int *)(albw_frame + 0x0))
  #define local_1c (*(char * *)(albw_frame + 0x4))
  puVar3 = func_00232540(param_1);
  *puVar3 = DAT_004641ac;
  uVar1 = DAT_004641b0;
  *(undefined2 *)(puVar3 + 8) = 0;
  *(undefined2 *)((int)puVar3 + 0x22) = 0xffff;
  puVar3[9] = uVar1;
  puVar3[10] = 0;
  *(undefined2 *)(puVar3 + 0xb) = 0;
  *(undefined2 *)((int)puVar3 + 0x2e) = 0xffff;
  puVar3[0xc] = uVar1;
  puVar3[0xd] = 0;
  *(undefined2 *)(puVar3 + 0xe) = 0;
  *(undefined2 *)((int)puVar3 + 0x3a) = 0xffff;
  puVar3[0xf] = uVar1;
  puVar3[0x10] = 0;
  *(undefined2 *)(puVar3 + 0x11) = 0;
  *(undefined2 *)((int)puVar3 + 0x46) = 0xffff;
  puVar3[0x12] = uVar1;
  puVar3[0x14] = 0xffffffff;
  puVar3[0x13] = 0;
  *(undefined1 *)(puVar3 + 0x15) = 0;
  *(undefined1 *)((int)puVar3 + 0x55) = 0;
  puVar4 = (undefined4 *)func_0010BAB4(0x74);
  if (puVar4 == (undefined4 *)0x0) {
    piVar6 = (int *)0x0;
  }
  else {
    piVar6 = func_00168434(puVar4);
  }
  func_00168100(piVar6,param_2,(int *)(DAT_004641b4 + param_3 * 8));
  puVar3[7] = piVar6;
  puVar3[6] = puVar3[6] | 0x10;
  func_0016773C((int)piVar6,4);
  iVar2 = DAT_004641c4;
  local_1c = s_TouchOnOff_004641b8;
  local_20 = DAT_004641c4;
  func_00166C20(piVar6,0,&local_20,0);
  local_1c = s_TouchDecide_004641c8;
  local_20 = iVar2;
  func_00166C20(piVar6,1,&local_20,0);
  local_1c = s_OnOff_004641d4;
  local_20 = iVar2;
  func_00166C20(piVar6,2,&local_20,0);
  local_1c = &DAT_004641dc;
  local_20 = iVar2;
  func_00166C20(piVar6,3,&local_20,0);
  puVar3[10] = piVar6;
  *(undefined2 *)((int)puVar3 + 0x22) = 0;
  *(undefined2 *)(puVar3 + 8) = 0;
  puVar3[0xd] = piVar6;
  *(undefined2 *)((int)puVar3 + 0x2e) = 1;
  *(undefined2 *)(puVar3 + 0xb) = 0;
  puVar3[0x10] = piVar6;
  *(undefined2 *)((int)puVar3 + 0x3a) = 2;
  *(undefined2 *)(puVar3 + 0xe) = 0;
  puVar3[0x13] = piVar6;
  *(undefined2 *)((int)puVar3 + 0x46) = 3;
  *(undefined2 *)(puVar3 + 0x11) = 5;
  puVar3[0x14] = param_3;
  puVar5 = (undefined4 *)func_0010BAB4(0x20);
  puVar4 = (undefined4 *)0x0;
  if (puVar5 != (undefined4 *)0x0) {
    puVar4 = func_002C0294(puVar5);
  }
  puVar3[5] = puVar4;
  func_002C00D4(puVar4,puVar3,piVar6);
  *(ushort *)(puVar3[5] + 0x16) = *(ushort *)(puVar3[5] + 0x16) & 0xffbf;
  func_002C00A8(puVar3[5]);
  *(ushort *)(puVar3[5] + 0x16) = *(ushort *)(puVar3[5] + 0x16) & 0xfffd;
  return puVar3;
}

