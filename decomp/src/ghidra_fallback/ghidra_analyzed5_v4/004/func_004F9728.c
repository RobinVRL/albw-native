#include "ghidra_types.h"

extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int DAT_004f9838;
extern undefined4 DAT_004f983c;
extern undefined4 DAT_004f9840;
extern undefined4 DAT_004f9844;
extern undefined4 DAT_004f9848;

// USA 004F9728 <- EU 004F9700 (Ghidra, non-matching)
// GLOBAL DAT_004f9838 int
// GLOBAL DAT_004f983c undefined4
// GLOBAL DAT_004f9840 undefined4
// GLOBAL DAT_004f9844 undefined4
// GLOBAL DAT_004f9848 undefined4

int func_004F9728(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define iStack_18 (*(int *)(albw_frame + 0x8))
  #define uStack_14 (*(undefined4 *)(albw_frame + 0xc))
  iVar1 = DAT_004f9838;
  switch(param_2) {
  case 0:
                    /* WARNING: Could not recover jumptable at 0x004f9754. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(param_1[200] + 0x34))(param_1 + 200);
    return uVar2;
  case 1:
  case 3:
  case 7:
    break;
  default:
    iStack_18 = DAT_004f9838;
    uStack_14 = DAT_004f983c;
    func_00150A84(param_1,&iStack_18,0);
    iVar1 = (**(code **)(param_1[200] + 0x30))(param_1 + 200);
    break;
  case 5:
    iStack_18 = DAT_004f9838;
    uStack_14 = DAT_004f9840;
    func_00150A84(param_1,&iStack_18,0);
    uVar2 = (**(code **)(param_1[200] + 0x40))(param_1 + 200);
    return uVar2;
  case 6:
    switch(param_3) {
    case 1:
    case 4:
      iStack_18 = DAT_004f9838;
      uStack_14 = DAT_004f9844;
      func_00150A84(param_1,&iStack_18,0);
LAB_004f9820:
      uVar2 = (**(code **)(param_1[200] + 0x44))(param_1 + 200);
      return uVar2;
    case 2:
    case 3:
      iStack_18 = DAT_004f9838;
      uStack_14 = DAT_004f9848;
      iVar1 = func_00150A84(param_1,&iStack_18,0);
      if (param_3 != 3) goto LAB_004f9820;
    }
  }
  return iVar1;
}

