#include "ghidra_types.h"

extern int func_0010A98C(uint param_1);
extern int func_0010CE7C(undefined4 *param_1);
extern int func_00115EF8(undefined4 *param_1,undefined4 param_2);
extern undefined4 DAT_0049bacc;

// USA 0049BAA8 <- EU 0049BA80 (Ghidra, non-matching)
// GLOBAL DAT_0049bacc undefined4

undefined4 * func_0049BAA8(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(undefined4 *)(albw_frame + 0x0))
  puVar1 = func_0010CE7C(param_1);
  *puVar1 = DAT_0049bacc;
  puVar1[4] = 0;
  local_10 = 0;
  puVar2 = func_00115EF8(&local_10,0);
  if (-1 < (int)puVar2) {
    puVar2 = (undefined4 *)0x0;
    puVar1[4] = local_10;
  }
  if ((int)puVar2 < 0) {
    func_0010A98C((uint)puVar2);
  }
  return puVar1;
}

