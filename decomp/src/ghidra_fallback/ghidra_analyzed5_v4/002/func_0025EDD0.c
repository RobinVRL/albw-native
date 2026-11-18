#include "ghidra_types.h"

extern int func_0049BE9C(int param_1,undefined4 param_2);
extern int func_0049BEAC(undefined4 *param_1,int param_2,int *param_3,undefined4 param_4,undefined1 param_5, undefined4 param_6,undefined4 param_7,int param_8);
extern undefined4 DAT_0025ee6c;
extern int DAT_0025ee70;
extern char s_Culling_0025ee64[];

// USA 0025EDD0 <- EU 0025EDF8 (Ghidra, non-matching)
// GLOBAL DAT_0025ee6c undefined4
// GLOBAL DAT_0025ee70 int
// GLOBAL s_Culling_0025ee64 string

int * func_0025EDD0(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(undefined4 *)(albw_frame + 0x0))
  #define local_c (*(char * *)(albw_frame + 0x4))
  local_c = s_Culling_0025ee64;
  local_10 = DAT_0025ee6c;
  piVar2 = func_0049BEAC(param_1,(int)&local_10,(int *)0x0,0x10,1,0x7fffffff,0x1000,0x20);
  iVar1 = DAT_0025ee70;
  *piVar2 = DAT_0025ee70;
  *(undefined1 *)(piVar2 + 0x23) = 0;
  piVar2[6] = iVar1 + 0x4c;
  func_0049BE9C((int)piVar2,1);
  return piVar2;
}

