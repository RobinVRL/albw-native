#include "ghidra_types.h"

extern int func_00166C20(int *param_1,uint param_2,int *param_3,int param_4);
extern int func_0016773C(int param_1,int param_2);
extern int func_002313DC(int param_1);
extern int func_00441330(undefined4 *param_1,int *param_2,int *param_3,int *param_4);
extern int DAT_00486da0;
extern undefined4 *DAT_00486da4;
extern int DAT_00486da8;
extern undefined DAT_00486dac;
extern undefined DAT_00486db0;
extern char s_L_Arrow_00_00486d94[];

// USA 00486CB4 <- EU 00486C8C (Ghidra, non-matching)
// GLOBAL DAT_00486da0 int
// GLOBAL DAT_00486da4 undefined4 *
// GLOBAL DAT_00486da8 int
// GLOBAL DAT_00486dac undefined
// GLOBAL DAT_00486db0 undefined
// GLOBAL s_L_Arrow_00_00486d94 string

int * func_00486CB4(undefined4 *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(int *)(albw_frame + 0x0))
  #define local_2c (*(char * *)(albw_frame + 0x4))
  #define iStack_28 (*(int *)(albw_frame + 0x8))
  #define uStack_24 (*(undefined4 *)(albw_frame + 0xc))
  #define local_20 (*(int *)(albw_frame + 0x10))
  #define local_1c (*(undefined4 *)(albw_frame + 0x14))
  iVar1 = DAT_00486da0;
  local_2c = s_L_Arrow_00_00486d94;
  local_30 = DAT_00486da0;
  if (param_2 == 1) {
    local_1c = DAT_00486da4[4];
  }
  else {
    local_1c = DAT_00486da4[3];
  }
  local_20 = DAT_00486da0;
  if (param_2 == 0) {
    uStack_24 = *DAT_00486da4;
  }
  else if (param_2 == 1) {
    uStack_24 = DAT_00486da4[1];
  }
  else {
    uStack_24 = DAT_00486da4[2];
  }
  iStack_28 = DAT_00486da0;
  piVar2 = func_00441330(param_1,&iStack_28,&local_20,&local_30);
  iVar3 = DAT_00486da8 + 0xac;
  *piVar2 = DAT_00486da8;
  piVar2[0xe] = iVar3;
  piVar4 = (int *)piVar2[7];
  func_0016773C((int)piVar4,2);
  local_2c = &DAT_00486dac;
  local_30 = iVar1;
  func_00166C20(piVar4,0,&local_30,0);
  local_2c = &DAT_00486db0;
  local_30 = iVar1;
  func_00166C20(piVar4,1,&local_30,0);
  piVar2[10] = (int)piVar4;
  *(undefined2 *)((int)piVar2 + 0x22) = 0;
  *(undefined2 *)(piVar2 + 8) = 0;
  piVar2[0xd] = (int)piVar4;
  *(undefined2 *)((int)piVar2 + 0x2e) = 1;
  *(undefined2 *)(piVar2 + 0xb) = 0;
  func_002313DC((int)(piVar2 + 8));
  *(undefined2 *)(piVar2 + 0x38) = 0;
  *(undefined1 *)((int)piVar2 + 0xe2) = 1;
  return piVar2;
}

