#include "ghidra_types.h"

extern int func_001B8B1C(int param_1);
extern int func_00689894(int param_1,int *param_2,uint param_3);
extern undefined4 DAT_00387e2c;
extern int DAT_00387e30;

// USA 00387E0C <- EU 00387DE8 (Ghidra, non-matching)
// GLOBAL DAT_00387e2c undefined4
// GLOBAL DAT_00387e30 int

undefined4 func_00387E0C(int param_1)

{
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(int *)(albw_frame + 0x0))
  #define local_c (*(undefined4 *)(albw_frame + 0x4))
  func_001B8B1C(param_1);
  *(undefined1 *)(param_1 + 0x57f) = 0;
  local_c = DAT_00387e2c;
  local_10 = DAT_00387e30;
  return func_00689894(param_1 + 0x588,&local_10,0xffffffff);
}

