#include "ghidra_types.h"

extern int func_0047A5B4(int param_1,undefined4 *param_2,int param_3);
extern undefined4 DAT_0043d91c;
extern undefined4 DAT_0043d920;

// USA 0043D904 <- EU 0043D8E4 (Ghidra, non-matching)
// GLOBAL DAT_0043d91c undefined4
// GLOBAL DAT_0043d920 undefined4

undefined4 func_0043D904(int param_1)

{
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(undefined4 *)(albw_frame + 0x0))
  #define uStack_c (*(undefined4 *)(albw_frame + 0x4))
  local_10 = DAT_0043d91c;
  uStack_c = DAT_0043d920;
  return func_0047A5B4(*(int *)(param_1 + 0x158),&local_10,(uint)((*(byte *)(param_1 + 0x176) & 1) != 0));
}

