#include "ghidra_types.h"

extern int func_00294404(int param_1,int *param_2,int param_3,int *param_4,int param_5);
extern int func_0053900C(undefined4 param_1,int *param_2,int param_3);
extern int func_00689024(undefined4 *param_1);

// USA 004EC4FC <- EU 004EC4D4 (Ghidra, non-matching)

undefined4 func_004EC4FC(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define aiStack_5c ((int *)(albw_frame + 0x4))
  func_00689024(aiStack_5c);
  iVar1 = func_0053900C(*(undefined4 *)(param_1 + 0x50),aiStack_5c,param_3);
  uVar2 = 0;
  if (iVar1 != 0) {
    func_00294404(*(int *)(param_1 + 0x4c),aiStack_5c,param_2,(int *)0x1,1);
    uVar2 = *(undefined4 *)(param_1 + 0x50);
  }
  return uVar2;
}

