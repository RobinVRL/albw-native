#include "ghidra_types.h"

extern int func_004A8F40(int param_1,int *param_2,uint param_3);
extern int func_0051D2F4(int *param_1,int param_2,int param_3,int param_4,float fparam_0);
extern int func_00521018(int param_1);
extern int func_00658604(undefined4 *param_1,undefined1 param_2);
extern int DAT_001634ac;
extern float DAT_001634b0;
extern uint DAT_001634b4;
extern int *DAT_001634b8;

// USA 001633AC <- EU 001633B0 (Ghidra, non-matching)
// GLOBAL DAT_001634ac int
// GLOBAL DAT_001634b0 float
// GLOBAL DAT_001634b4 uint
// GLOBAL DAT_001634b8 int *

void func_001633AC(int param_1)

{
  bool bVar1;
  uint uVar2;
  uint extraout_r1;
  uint extraout_r1_00;
  undefined4 *puVar3;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 ((int *)(albw_frame + 0x0))
  #define uStack_20 (*(uint *)(albw_frame + 0x10))
  #define local_1c (*(undefined4 *)(albw_frame + 0x14))
  #define local_18 (*(undefined4 *)(albw_frame + 0x18))
  #define local_14 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_10 (*(undefined1 *)(albw_frame + 0x20))
  func_0051D2F4((int *)(param_1 + 1000),*(int *)(param_1 + 0x904),DAT_001634ac,0x7fffffff,
                DAT_001634b0);
  puVar3 = (undefined4 *)(param_1 + 0x8bc);
  if (*(uint *)(param_1 + 0x908) < *(uint *)(param_1 + 0x90c)) {
    *(uint *)(param_1 + 0x908) = *(uint *)(param_1 + 0x908) + 1;
  }
  else {
    func_00658604(puVar3,0);
  }
  bVar1 = func_00521018(param_1);
  uVar2 = extraout_r1;
  if (bVar1) {
    *(undefined1 *)(param_1 + 0x921) = 1;
    func_00658604(puVar3,0);
    uVar2 = extraout_r1_00;
  }
  uStack_20 = DAT_001634b4 | uVar2 & 0xffff0000;
  local_30[0] = 0;
  local_30[1] = 0;
  local_30[2] = 0;
  local_1c = 0xff;
  local_18 = 0;
  local_10 = 0;
  local_30[3] = *(undefined4 *)(param_1 + 0x2cc);
  local_14 = *(undefined4 *)(param_1 + 0x424);
  uVar2 = func_004A8F40(*DAT_001634b8,local_30,4);
  if (uVar2 != 0) {
    func_00658604(puVar3,0);
  }
  return;
}

