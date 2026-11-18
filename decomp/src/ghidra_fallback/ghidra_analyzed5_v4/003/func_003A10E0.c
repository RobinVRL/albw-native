#include "ghidra_types.h"

extern int func_0048B130(undefined4 *param_1,int param_2);
extern int func_004927C8(undefined4 *param_1,int param_2,float fparam_0,float fparam_1);
extern int func_00494F50(int param_1,undefined4 param_2);
extern int func_00495028(int param_1,undefined4 *param_2);
extern int func_004952C0(int param_1,undefined4 param_2);
extern int func_00580CE4(int param_1);
extern int *DAT_003a1148;
extern float DAT_003a114c;
extern float DAT_003a1150;
extern undefined4 *DAT_003a1154;

// USA 003A10E0 <- EU 003A10BC (Ghidra, non-matching)
// GLOBAL DAT_003a1148 int *
// GLOBAL DAT_003a114c float
// GLOBAL DAT_003a1150 float
// GLOBAL DAT_003a1154 undefined4 *

undefined4 * func_003A10E0(int param_1)

{
  int iVar1;
  _Alignas(8) unsigned char albw_frame[0x120];
  #define local_118 (*(int *)(albw_frame + 0x8))
  #define auStack_114 ((undefined1 *)(albw_frame + 0xc))
  #define auStack_c0 ((undefined4 *)(albw_frame + 0x60))
  iVar1 = *DAT_003a1148;
  func_004927C8(auStack_c0,param_1,DAT_003a1150,DAT_003a114c);
  func_0048B130(&local_118,(int)auStack_c0);
  (**(code **)(local_118 + 0x10))(&local_118,auStack_114);
  func_00580CE4(param_1);
  func_00494F50(iVar1,auStack_c0);
  func_004952C0(iVar1,&local_118);
  func_00495028(iVar1,DAT_003a1154);
  return auStack_c0;
}

