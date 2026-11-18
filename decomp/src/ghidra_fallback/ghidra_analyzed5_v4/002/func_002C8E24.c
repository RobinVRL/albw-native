#include "ghidra_types.h"

extern int func_00110848(int param_1);
extern int func_004A1B9C(int *param_1,int param_2,uint *param_3);
extern int func_004A2D1C(int param_1,float *param_2);
extern int func_004D7EB0(float *param_1,uint param_2,uint param_3,float *param_4);
extern int func_00588C14(int param_1,int param_2,uint param_3);
extern undefined DAT_002c8f08;
extern uint DAT_002c8f10;

// USA 002C8E24 <- EU 002C8E00 (Ghidra, non-matching)
// GLOBAL DAT_002c8f08 undefined
// GLOBAL DAT_002c8f10 uint

undefined4 func_002C8E24(int param_1)

{
  int iVar1;
  int *piVar2;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define afStack_50 ((float *)(albw_frame + 0x0))
  #define local_20 (*(int *)(albw_frame + 0x30))
  #define uStack_1c (*(undefined4 *)(albw_frame + 0x34))
  *(undefined4 *)(param_1 + 0x40c) = 0;
  func_00588C14(param_1,0,1);
  piVar2 = (int *)(param_1 + 0x450);
  *(undefined1 *)(*(int *)(param_1 + 0x440) + 0x61) = 1;
  *(undefined1 *)(param_1 + 0x478) = 1;
  if (*(int *)(param_1 + 0x344) == 0) {
    *piVar2 = 0;
    *(undefined4 *)(param_1 + 0x454) = 0;
  }
  else {
    iVar1 = *piVar2;
    if ((iVar1 != 0) && (*(int *)(iVar1 + 0x1c) == *(int *)(param_1 + 0x454))) {
      func_00110848(iVar1);
    }
    func_004A1B9C(&local_20,*(int *)(param_1 + 0x344),(uint *)&DAT_002c8f08);
    *piVar2 = local_20;
    *(undefined4 *)(param_1 + 0x454) = uStack_1c;
  }
  if (*(short *)(param_1 + 0x2c) == 1) {
    func_004D7EB0(afStack_50,0,0,(float *)(param_1 + 0x3d0));
    iVar1 = *(int *)(param_1 + 0x450);
    if ((iVar1 != 0) && (*(int *)(iVar1 + 0x1c) == *(int *)(param_1 + 0x454)))
    goto code_r0x002c8efc;
  }
  else {
    func_004D7EB0(afStack_50,DAT_002c8f10,0,(float *)(param_1 + 0x3d0));
    iVar1 = *(int *)(param_1 + 0x450);
    if ((iVar1 != 0) && (*(int *)(iVar1 + 0x1c) == *(int *)(param_1 + 0x454))) {
code_r0x002c8efc:
      return func_004A2D1C(iVar1,afStack_50);
    }
  }
  return 0;
}

