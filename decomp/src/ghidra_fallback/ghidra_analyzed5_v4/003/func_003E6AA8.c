#include "ghidra_types.h"

extern int func_0010013C(int param_1,int param_2,undefined4 param_3,uint *param_4);

// USA 003E6AA8 <- EU 003E6A88 (Ghidra, non-matching)

undefined4 func_003E6AA8(int param_1,uint param_2,int param_3,undefined4 param_4,...)

{
  _Alignas(8) unsigned char albw_frame[0x40]; /* entry_sp - 0x0 .. entry_sp + 0x40 */
#define stack0x00000000 (*(undefined4 *)(albw_frame + 0x0))
  if (param_3 + 1U < param_2) {
    param_2 = param_3 + 1U;
  }
  return func_0010013C(param_1,param_2,param_4,(uint *)&stack0x00000000);
}

