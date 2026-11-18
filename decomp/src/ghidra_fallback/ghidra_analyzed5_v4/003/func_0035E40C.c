#include "ghidra_types.h"

extern int func_0014EEB8(int param_1,undefined4 *param_2,undefined4 param_3,float fparam_0);
extern float func_0054DE3C(int param_1,uint param_2,int param_3);
extern int func_00666C04(undefined4 *param_1,undefined1 param_2);
extern undefined4 DAT_0035e458;
extern undefined4 DAT_0035e45c;

// USA 0035E40C <- EU 0035E3E8 (Ghidra, non-matching)
// GLOBAL DAT_0035e458 undefined4
// GLOBAL DAT_0035e45c undefined4

void func_0035E40C(int param_1)

{
  int iVar1;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define local_14 (*(float *)(albw_frame + 0xc))
  #define uStack_10 (*(undefined4 *)(albw_frame + 0x10))
  local_14 = func_0054DE3C(param_1,0,1);
  local_18 = DAT_0035e458;
  uStack_10 = DAT_0035e458;
  iVar1 = func_0014EEB8(param_1,&local_18,DAT_0035e45c,local_14);
  if ((iVar1 != 0) || (*(float *)(param_1 + 0x3d4) < *(float *)(param_1 + 0x444))) {
    func_00666C04((undefined4 *)(param_1 + 0x40c),1);
  }
  return;
}

