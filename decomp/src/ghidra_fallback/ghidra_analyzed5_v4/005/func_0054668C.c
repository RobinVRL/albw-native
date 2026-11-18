#include "ghidra_types.h"

extern int func_00377220(undefined4 *param_1,undefined4 param_2,undefined1 param_3,undefined1 param_4, float fparam_0);
extern int func_005465D0(int param_1,int param_2,uint *param_3,float fparam_0,float fparam_1);
extern float DAT_005466bc;

// USA 0054668C <- EU 00546664 (Ghidra, non-matching)
// GLOBAL DAT_005466bc float

undefined4 func_0054668C(int param_1,uint *param_2,float fparam_0,float fparam_1)

{
  undefined4 uVar1;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define auStack_48 ((undefined4 *)(albw_frame + 0x8))
  func_00377220(auStack_48,*(undefined4 *)(*(int *)(param_1 + 0x28) + 0x2cc),0,0,DAT_005466bc);
  uVar1 = func_005465D0(param_1,(int)auStack_48,param_2,fparam_0,fparam_1);
  return uVar1;
}

