#include "ghidra_types.h"

extern int func_0010CF7C(undefined4 *param_1,undefined1 param_2);
extern int func_002589F8(int param_1,int param_2,int param_3);
extern int func_00409B8C(int *param_1);
extern void func_00409BC8(int *param_1,int *param_2,float fparam_0);
extern int func_0056A1C0(int param_1);

// USA 002587A8 <- EU 002587D0 (Ghidra, non-matching)

undefined4 func_002587A8(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  float in_s0;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(int *)(albw_frame + 0x0))
  local_10 = param_4;
  func_00409BC8(&local_10,(int *)(param_1 + 0xc),in_s0);
  if (local_10 == 0) {
    func_0010CF7C((undefined4 *)(param_1 + 0x14),0);
  }
  else {
    uVar1 = func_0056A1C0(local_10);
    func_002589F8(param_1,uVar1,1);
    if (((*(char *)(param_1 + 0x6b) != '\0') &&
        (*(uint *)(param_1 + 0x50) <= *(uint *)(param_1 + 0x58))) &&
       (uVar1 < *(uint *)(param_1 + 0x58))) {
      func_0010CF7C((undefined4 *)(param_1 + 0x14),0);
    }
    *(uint *)(param_1 + 0x58) = uVar1;
  }
  return func_00409B8C(&local_10);
}

