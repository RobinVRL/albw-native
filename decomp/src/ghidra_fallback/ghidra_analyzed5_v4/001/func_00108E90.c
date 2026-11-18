#include "ghidra_types.h"

extern int func_0010873C(uint param_1,undefined4 param_2);
extern int func_00108DF8(void);
extern int func_00108F4C(void);
extern int func_0010B0CC(undefined1 param_1,undefined4 param_2,undefined1 param_3,undefined4 param_4, undefined1 *param_5);

// USA 00108E90 <- EU 00108E90 (Ghidra, non-matching)

int func_00108E90(undefined1 param_1,undefined4 param_2,undefined1 param_3,undefined4 param_4)

{
  uint uVar1;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_1c ((char *)(albw_frame + 0x4))
  func_00108DF8();
  uVar1 = func_0010B0CC(param_1,param_2,param_3,param_4,local_1c);
  if ((int)uVar1 < 0) {
    func_0010873C(uVar1,0x108ed0);
  }
  func_00108F4C();
  return (int)local_1c[0];
}

