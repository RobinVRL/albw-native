#include "ghidra_types.h"

extern int func_00569668(int param_1,uint param_2,undefined4 *param_3);
extern int func_005696BC(int param_1,uint param_2,uint *param_3);
extern int func_00569710(int param_1,uint param_2,undefined4 *param_3);
extern int func_00569AB8(int param_1,uint param_2,undefined4 *param_3);

// USA 0056C424 <- EU 0056C3FC (Ghidra, non-matching)

undefined4 func_0056C424(int *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 ((uint *)(albw_frame + 0x8))
  #define local_20 (*(undefined1 *)(albw_frame + 0x10))
  iVar2 = param_1[1];
  if (iVar2 == 0) {
    return 0;
  }
  uVar1 = param_2 >> 0x18;
  uVar3 = 0;
  if (uVar1 == 1) {
    func_00569710(iVar2,param_2,local_28);
  }
  else if (uVar1 == 3) {
    local_28[0] = 0xffffffff;
    func_00569668(iVar2,param_2,local_28);
  }
  else if (uVar1 == 5) {
    local_20 = 0;
    local_28[0] = 0xffffffff;
    func_00569AB8(param_1[1],param_2,local_28);
  }
  else {
    if (uVar1 != 6) {
      return 0;
    }
    local_28[0] = 0xffffffff;
    local_28[1] = 0;
    func_005696BC(param_1[1],param_2,local_28);
  }
  if (local_28[0] != 0xffffffff) {
    uVar3 = (**(code **)(*param_1 + 0x10))(param_1);
  }
  return uVar3;
}

