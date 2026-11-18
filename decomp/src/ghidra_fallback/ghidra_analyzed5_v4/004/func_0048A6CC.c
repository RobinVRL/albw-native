#include "ghidra_types.h"

extern int func_0048A374(uint param_1,int param_2,int param_3,int param_4);
extern int func_0048A744(int param_1,int param_2,int param_3,int param_4,float *param_5);

// USA 0048A6CC <- EU 0048A6A4 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 float *

undefined4 func_0048A6CC(int param_1,int param_2,int param_3,int param_4,float *param_5)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  _Alignas(8) unsigned char albw_frame[0x420];
  #define auStack_420 ((undefined1 *)(albw_frame + 0x0))
  puVar3 = *(undefined1 **)(param_1 + 0x44);
  if (puVar3 == (undefined1 *)0x0) {
    puVar3 = auStack_420;
    iVar1 = 0x200;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x48);
  }
  iVar2 = param_4;
  if (-1 < param_3) {
    iVar2 = param_3 + 1;
  }
  if (-1 < param_3 && iVar2 <= iVar1) {
    iVar1 = iVar2;
  }
  func_0048A374((uint)puVar3,iVar1,param_2,iVar1 + -1);
  return func_0048A744(param_1,(int)puVar3,-1,param_4,param_5);
}

