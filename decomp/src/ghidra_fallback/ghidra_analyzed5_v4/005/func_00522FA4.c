#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010DB90(void);
extern int func_00566D08(uint *param_1,int param_2,uint *param_3,uint param_4,int param_5);
extern int func_00566E28(int *param_1,int param_2,uint *param_3,int param_4,int param_5);
extern int func_005688C0(int param_1,int *param_2,int *param_3,float *param_4);
extern undefined4 DAT_0052308c;
extern undefined *DAT_00523090;

// USA 00522FA4 <- EU 00522F7C (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 int *
// GLOBAL DAT_0052308c undefined4
// GLOBAL DAT_00523090 undefined *

void func_00522FA4(int param_1,uint *param_2,uint *param_3,int *param_4,int *param_5)

{
  uint uVar1;
  int iVar2;
  _Alignas(8) unsigned char albw_frame[0xa0];
  #define afStack_9c ((float *)(albw_frame + 0x4))
  #define auStack_84 ((undefined1 *)(albw_frame + 0x1c))
  #define auStack_20 ((uint *)(albw_frame + 0x80))
  if (param_4 == (int *)0x0) {
    param_4 = (int *)func_0010DB90();
  }
  if (param_5 == (int *)0x0) {
    param_5 = param_4;
  }
  uVar1 = (**(code **)(*param_4 + 0x18))(param_4,*(undefined4 *)(param_1 + 0x5c),4);
  func_00566D08(auStack_20,*(int *)(param_1 + 8),param_2,uVar1,param_1 + 0x4c);
  iVar2 = (**(code **)(*param_5 + 0x18))(param_5,*(undefined4 *)(param_1 + 0x60),4);
  func_00566E28((int *)auStack_20,*(int *)(param_1 + 8),param_3,iVar2,param_1 + 0x4c);
  iVar2 = func_00100118((int)auStack_84,DAT_00523090,0x10,6);
  *(undefined1 *)(iVar2 + 0x60) = 0;
  *(undefined1 *)(iVar2 + 0x61) = 0;
  iVar2 = *(int *)(param_1 + 8);
  uVar1 = 0;
  if (*(int *)(iVar2 + 0x44) != 0) {
    do {
      func_005688C0(*(int *)(iVar2 + 0x40) + uVar1 * 0x38,(int *)(*param_3 + uVar1 * 0xc),
                    (int *)(*param_2 + uVar1 * 8),afStack_9c);
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)(iVar2 + 0x44));
  }
  return;
}

