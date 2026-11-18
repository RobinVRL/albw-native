#include "ghidra_types.h"

extern int func_001B8B1C(int param_1);
extern int func_00689894(int param_1,int *param_2,uint param_3);
extern undefined4 DAT_003007a4;
extern int DAT_003007a8;

// USA 00300780 <- EU 0030075C (Ghidra, non-matching)
// GLOBAL DAT_003007a4 undefined4
// GLOBAL DAT_003007a8 int

void func_00300780(int param_1)

{
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define local_14 (*(undefined4 *)(albw_frame + 0xc))
  func_001B8B1C(param_1);
  local_18 = DAT_003007a8;
  local_14 = DAT_003007a4;
  *(undefined1 *)(param_1 + 0x57f) = 0;
  func_00689894(param_1 + 0x588,&local_18,0xffffffff);
  *(undefined4 *)(param_1 + 0x5d4) = 0;
  return;
}

