#include "ghidra_types.h"

extern int func_004EF418(int param_1,byte *param_2,int param_3,int param_4);
extern int *DAT_00197440;

// USA 001973E4 <- EU 001973E4 (Ghidra, non-matching)
// GLOBAL DAT_00197440 int *

void func_001973E4(int param_1)

{
  int iVar1;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 ((byte *)(albw_frame + 0x8))
  #define local_14 (*(undefined4 *)(albw_frame + 0xc))
  #define local_10 (*(undefined2 *)(albw_frame + 0x10))
  #define local_e (*(undefined1 *)(albw_frame + 0x12))
  if (*(char *)(param_1 + 0x4ac) != '\0') {
    local_18[0] = 8;
    local_14 = 8;
    local_10 = 0;
    local_e = 1;
    iVar1 = func_004EF418(*DAT_00197440,local_18,0,0);
    if (iVar1 != 0) {
      *(undefined1 *)(param_1 + 0x4ac) = 0;
    }
  }
  return;
}

