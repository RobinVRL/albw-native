#include "ghidra_types.h"

extern int func_004EFAF4(int param_1,undefined4 *param_2);
extern int *DAT_0043a228;

// USA 0043A1F8 <- EU 0043A1D8 (Ghidra, non-matching)
// GLOBAL DAT_0043a228 int *

void func_0043A1F8(int param_1)

{
  int iVar1;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(undefined4 *)(albw_frame + 0x0))
  #define uStack_c (*(undefined4 *)(albw_frame + 0x4))
  #define local_8 (*(undefined4 *)(albw_frame + 0x8))
  if ((uint)(int)*(short *)(param_1 + 0x1b0) < 0xd) {
    iVar1 = *(int *)(param_1 + 0xec + *(short *)(param_1 + 0x1b0) * 4);
    local_8 = *(undefined4 *)(iVar1 + 0x90);
    local_10 = *(undefined4 *)(iVar1 + 0x88);
    uStack_c = *(undefined4 *)(iVar1 + 0x8c);
    if (*DAT_0043a228 != 0) {
      func_004EFAF4(*DAT_0043a228,&local_10);
    }
    return;
  }
  return;
}

