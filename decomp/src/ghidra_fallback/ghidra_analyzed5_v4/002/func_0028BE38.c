#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_00166C20(int *param_1,uint param_2,int *param_3,int param_4);
extern int func_0016773C(int param_1,int param_2);
extern int func_00168100(int *param_1,int *param_2,int *param_3);
extern int func_00168434(undefined4 *param_1);
extern int func_002BF520(undefined4 *param_1);
extern int func_002C00C0(int param_1);
extern undefined4 DAT_0028bf68;
extern undefined4 DAT_0028bf6c;
extern int DAT_0028bf7c;
extern char s_Disable_0028bf8c[];
extern char s_TouchDecide_0028bf80[];
extern char s_TouchOnOff_0028bf70[];

// USA 0028BE38 <- EU 0028BE60 (Ghidra, non-matching)
// GLOBAL DAT_0028bf68 undefined4
// GLOBAL DAT_0028bf6c undefined4
// GLOBAL DAT_0028bf7c int
// GLOBAL s_Disable_0028bf8c string
// GLOBAL s_TouchDecide_0028bf80 string
// GLOBAL s_TouchOnOff_0028bf70 string

undefined4 * func_0028BE38(undefined4 *param_1,int *param_2,int *param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int *piVar5;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(int *)(albw_frame + 0x0))
  #define local_1c (*(char * *)(albw_frame + 0x4))
  puVar3 = func_002BF520(param_1);
  *puVar3 = DAT_0028bf68;
  uVar1 = DAT_0028bf6c;
  *(undefined2 *)(puVar3 + 0x18) = 0;
  *(undefined2 *)((int)puVar3 + 0x62) = 0xffff;
  puVar3[0x19] = uVar1;
  puVar3[0x1a] = 0;
  puVar3[0x1b] = 0;
  puVar4 = (undefined4 *)func_0010BAB4(0x74);
  if (puVar4 == (undefined4 *)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    piVar5 = func_00168434(puVar4);
  }
  func_00168100(piVar5,param_2,param_3);
  puVar3[7] = piVar5;
  puVar3[6] = puVar3[6] | 0x10;
  func_0016773C((int)piVar5,3);
  iVar2 = DAT_0028bf7c;
  local_1c = s_TouchOnOff_0028bf70;
  local_20 = DAT_0028bf7c;
  func_00166C20(piVar5,0,&local_20,0);
  local_1c = s_TouchDecide_0028bf80;
  local_20 = iVar2;
  func_00166C20(piVar5,1,&local_20,0);
  local_1c = s_Disable_0028bf8c;
  local_20 = iVar2;
  func_00166C20(piVar5,2,&local_20,0);
  func_002C00C0((int)puVar3);
  return puVar3;
}

