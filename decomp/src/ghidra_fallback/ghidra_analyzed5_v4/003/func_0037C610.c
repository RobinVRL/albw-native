#include "ghidra_types.h"

extern int func_0014EEB8(int param_1,undefined4 *param_2,undefined4 param_3,float fparam_0);
extern undefined4 DAT_0037c63c;
extern undefined4 DAT_0037c640;

// USA 0037C610 <- EU 0037C5EC (Ghidra, non-matching)
// GLOBAL DAT_0037c63c undefined4
// GLOBAL DAT_0037c640 undefined4

void func_0037C610(int param_1)

{
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define local_14 (*(undefined4 *)(albw_frame + 0xc))
  #define local_10 (*(undefined4 *)(albw_frame + 0x10))
  if (*(short *)(param_1 + 0x42c) == 0) {
    local_14 = *(undefined4 *)(param_1 + 0x43c);
    local_18 = DAT_0037c63c;
    local_10 = DAT_0037c63c;
    func_0014EEB8(param_1,&local_18,DAT_0037c640,*(float *)(param_1 + 0x43c));
  }
  return;
}

