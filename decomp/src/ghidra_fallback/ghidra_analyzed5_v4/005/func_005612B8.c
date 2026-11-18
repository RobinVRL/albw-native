#include "ghidra_types.h"

extern int func_0010AC24(undefined4 param_1,undefined4 param_2);
extern int func_0056137C(uint *param_1,uint *param_2);

// USA 005612B8 <- EU 00561290 (Ghidra, non-matching)

undefined8 func_005612B8(int param_1)

{
  int iVar1;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 ((undefined8 *)(albw_frame + 0x0))
  iVar1 = func_0056137C((uint *)(param_1 + 4),(uint *)local_10);
  if (iVar1 < 0) {
    func_0010AC24(iVar1,0x5612ac);
  }
  return local_10[0];
}

