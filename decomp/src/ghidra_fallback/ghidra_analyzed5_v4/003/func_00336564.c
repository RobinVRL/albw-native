#include "ghidra_types.h"

extern int func_0014E904(int param_1,int param_2,int param_3);
extern int func_0016898C(int param_1,uint *param_2);
extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_00169608(uint *param_1,uint param_2,int *param_3,int param_4);
extern int func_0016A02C(int param_1,int param_2,int *param_3,int param_4);
extern undefined4 DAT_0033661c;
extern undefined4 DAT_00336620;
extern undefined4 DAT_00336624;

// USA 00336564 <- EU 00336540 (Ghidra, non-matching)
// GLOBAL DAT_0033661c undefined4
// GLOBAL DAT_00336620 undefined4
// GLOBAL DAT_00336624 undefined4

undefined4 func_00336564(int param_1,int *param_2,int *param_3)

{
  uint *puVar1;
  uint in_r12;
  undefined4 uVar2;
  _Alignas(8) unsigned char albw_frame[0x80];
  #define local_78 ((uint *)(albw_frame + 0x8))
  #define local_70 (*(undefined4 * *)(albw_frame + 0x10))
  #define local_6c (*(undefined4 *)(albw_frame + 0x14))
  #define local_68 (*(undefined4 *)(albw_frame + 0x18))
  #define uStack_64 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_60 (*(undefined4 *)(albw_frame + 0x20))
  #define local_5c (*(undefined4 *)(albw_frame + 0x24))
  #define local_58 (*(uint *)(albw_frame + 0x28))
  #define local_24 (*(undefined4 *)(albw_frame + 0x5c))
  #define local_20 (*(undefined1 *)(albw_frame + 0x60))
  puVar1 = (uint *)func_0014E904(param_1,1,0);
  *param_2 = (int)puVar1;
  func_00169608(puVar1,0,param_3,*(int *)(param_1 + 0x438));
  func_0016A02C(*param_2,-1,(int *)0xffffffff,0);
  local_78[1] = 3;
  local_70 = &local_6c;
  local_78[0] = 1;
  local_24 = 0;
  local_20 = 0;
  local_6c = 0;
  local_60 = DAT_00336624;
  local_5c = DAT_00336620;
  local_58 = in_r12 | 0xff;
  local_68 = DAT_0033661c;
  uStack_64 = DAT_00336620;
  uVar2 = DAT_0033661c;
  func_0016898C(*param_2,local_78);
  *(undefined4 *)(*(int *)(*param_2 + 0x14) + 0x10) = uVar2;
  return func_00168E9C((int *)*param_2,*(int *)(param_1 + 0x440),(int *)0x0);
}

