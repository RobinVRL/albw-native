#include "ghidra_types.h"

extern int func_003E35DC(undefined4 param_1,undefined4 param_2);
extern int func_005FF314(undefined4 param_1,undefined4 param_2,undefined4 param_3);
extern int func_005FF398(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
extern int func_006003B4(undefined4 *param_1,undefined4 *param_2);

// USA 003F9AA4 <- EU 003F9A84 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 int
// PARAM param_6 Stack[0x4]:4 int

int func_003F9AA4(int param_1,int param_2,int param_3,undefined4 param_4,int param_5,int param_6)

{
  undefined4 uVar1;
  int iVar2;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(code * *)(albw_frame + 0x8))
  #define auStack_24 ((undefined4 *)(albw_frame + 0xc))
  if (param_2 != 0) {
    func_003E35DC(param_1,param_2);
  }
  if (param_3 == 1) {
    func_006003B4(&local_28,auStack_24);
    uVar1 = 0x20000;
  }
  else {
    if (param_3 != 2) {
      return param_1;
    }
    func_006003B4(&local_28,auStack_24);
    uVar1 = 0x30000;
  }
  iVar2 = (*local_28)(uVar1,param_4,0,param_2);
  if (iVar2 == 0 && param_6 == 0) {
    return param_1;
  }
  if (param_5 == 0) {
    func_005FF314(param_1,iVar2,param_2);
  }
  else {
    func_005FF398(param_5,param_1,iVar2,param_2);
  }
  return iVar2;
}

