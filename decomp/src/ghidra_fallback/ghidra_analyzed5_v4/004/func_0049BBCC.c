#include "ghidra_types.h"

extern int func_0010A98C(uint param_1);
extern int func_0010EAE8(undefined4 *param_1,undefined4 param_2);
extern int func_0010EDBC(int *param_1,undefined4 param_2);
extern int func_0049BCB8(int *param_1);
extern int *DAT_0049bc08;
extern undefined4 *DAT_0049bc0c;

// USA 0049BBCC <- EU 0049BBA4 (Ghidra, non-matching)
// GLOBAL DAT_0049bc08 int *
// GLOBAL DAT_0049bc0c undefined4 *

int func_0049BBCC(int *param_1)

{
  uint uVar1;
  int in_r3;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(int *)(albw_frame + 0x0))
  local_10 = in_r3;
  func_0010EDBC((int *)(*DAT_0049bc08 + 0x24),param_1);
  uVar1 = func_0010EAE8(&local_10,*DAT_0049bc0c);
  if ((int)uVar1 < 0) {
    func_0010A98C(uVar1);
  }
  param_1[0x1d] = local_10;
  param_1[0x1e] = 1;
  func_0049BCB8(param_1);
  param_1[0x1e] = 3;
  return param_1[0x1e];
}

