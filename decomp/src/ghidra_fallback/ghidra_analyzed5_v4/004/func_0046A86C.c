#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_00166C20(int *param_1,uint param_2,int *param_3,int param_4);
extern int func_0016773C(int param_1,int param_2);
extern int func_00168100(int *param_1,int *param_2,int *param_3);
extern int func_00168434(undefined4 *param_1);
extern int func_00232540(undefined4 *param_1);
extern int func_005229AC(int *param_1,int *param_2);
extern undefined4 DAT_0046a9e4;
extern undefined4 DAT_0046a9e8;
extern int DAT_0046a9f4;
extern undefined DAT_0046a9f8;
extern int *DAT_0046aa14;
extern char s_Decide_0046aa00[];
extern char s_OnOff_0046a9ec[];
extern char s_T_GmOvr_00_0046aa08[];

// USA 0046A86C <- EU 0046A844 (Ghidra, non-matching)
// GLOBAL DAT_0046a9e4 undefined4
// GLOBAL DAT_0046a9e8 undefined4
// GLOBAL DAT_0046a9f4 int
// GLOBAL DAT_0046a9f8 undefined
// GLOBAL DAT_0046aa14 int *
// GLOBAL s_Decide_0046aa00 string
// GLOBAL s_OnOff_0046a9ec string
// GLOBAL s_T_GmOvr_00_0046aa08 string

undefined4 * func_0046A86C(undefined4 *param_1,int *param_2,int *param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(int *)(albw_frame + 0x0))
  #define local_1c (*(char * *)(albw_frame + 0x4))
  puVar3 = func_00232540(param_1);
  *puVar3 = DAT_0046a9e4;
  uVar1 = DAT_0046a9e8;
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
  puVar3[0x11] = 0;
  *(undefined1 *)(puVar3 + 0x12) = 0;
  *(undefined1 *)((int)puVar3 + 0x49) = 0;
  puVar4 = (undefined4 *)func_0010BAB4(0x74);
  if (puVar4 == (undefined4 *)0x0) {
    piVar7 = (int *)0x0;
  }
  else {
    piVar7 = func_00168434(puVar4);
  }
  func_00168100(piVar7,param_2,param_3);
  puVar3[7] = piVar7;
  puVar3[6] = puVar3[6] | 0x10;
  func_0016773C((int)piVar7,3);
  iVar2 = DAT_0046a9f4;
  local_1c = s_OnOff_0046a9ec;
  local_20 = DAT_0046a9f4;
  func_00166C20(piVar7,0,&local_20,0);
  local_1c = &DAT_0046a9f8;
  local_20 = iVar2;
  func_00166C20(piVar7,1,&local_20,0);
  local_1c = s_Decide_0046aa00;
  local_20 = iVar2;
  func_00166C20(piVar7,2,&local_20,0);
  puVar3[10] = piVar7;
  *(undefined2 *)((int)puVar3 + 0x22) = 0;
  *(undefined2 *)(puVar3 + 8) = 0;
  puVar3[0xd] = piVar7;
  *(undefined2 *)((int)puVar3 + 0x2e) = 1;
  *(undefined2 *)(puVar3 + 0xb) = 0;
  puVar3[0x10] = piVar7;
  *(undefined2 *)((int)puVar3 + 0x3a) = 2;
  *(undefined2 *)(puVar3 + 0xe) = 0;
  local_1c = s_T_GmOvr_00_0046aa08;
  local_20 = iVar2;
  piVar5 = (int *)func_005229AC((int *)puVar3[7],&local_20);
  piVar7 = DAT_0046aa14;
  if (piVar5 != (int *)0x0) {
    piVar6 = (int *)(**(code **)(*piVar5 + 8))(piVar5);
    do {
      if (piVar6 == piVar7) goto LAB_0046a9d4;
      piVar6 = (int *)*piVar6;
    } while (piVar6 != (int *)0x0);
  }
  piVar5 = (int *)0x0;
LAB_0046a9d4:
  puVar3[0x11] = piVar5;
  return puVar3;
}

