#include "ghidra_types.h"

extern int func_001119F4(undefined4 *param_1,undefined4 *param_2);
extern int func_001151EC(undefined4 *param_1,undefined4 *param_2);
extern int func_001157FC(float *param_1,float *param_2,float *param_3);
extern int func_00491E80(float *param_1,uint param_2,uint param_3,uint param_4);
extern undefined4 *DAT_0039aff8;

// USA 0039AF40 <- EU 0039AF1C (Ghidra, non-matching)
// GLOBAL DAT_0039aff8 undefined4 *

undefined4 func_0039AF40(int param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define afStack_70 ((float *)(albw_frame + 0x0))
  #define afStack_40 ((float *)(albw_frame + 0x30))
  func_001119F4(afStack_70,DAT_0039aff8);
  if (*(int *)(param_1 + 0xc) == param_3) {
    uVar1 = 0;
    uVar2 = -*(int *)(param_1 + 0x18);
  }
  else {
    if (*(int *)(param_1 + 8) == param_3) {
      func_00491E80(afStack_70,0,*(uint *)(param_1 + 0x14),0);
      goto LAB_0039afa8;
    }
    if (*(int *)(param_1 + 0x10) != param_3) goto LAB_0039afa8;
    uVar1 = *(uint *)(param_1 + 0x1c);
    uVar2 = 0;
  }
  func_00491E80(afStack_70,uVar1,0,uVar2);
LAB_0039afa8:
  iVar3 = *(int *)(*(int *)(param_1 + 4) + 0x40c);
  func_001119F4(afStack_40,(undefined4 *)(*(int *)(*(int *)(iVar3 + 0x24) + 0x14) + param_3 * 0x30))
  ;
  func_001157FC(afStack_40,afStack_40,afStack_70);
  func_001151EC((undefined4 *)(*(int *)(*(int *)(iVar3 + 0x24) + 0x14) + param_3 * 0x30),afStack_40)
  ;
  return 0;
}

