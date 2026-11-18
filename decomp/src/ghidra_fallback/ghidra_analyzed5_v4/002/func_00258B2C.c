#include "ghidra_types.h"

extern int func_00297138(int param_1,int *param_2);
extern int DAT_00258b88;
extern undefined4 DAT_00258b8c;
extern int *DAT_00258b90;

// USA 00258B2C <- EU 00258B54 (Ghidra, non-matching)
// GLOBAL DAT_00258b88 int
// GLOBAL DAT_00258b8c undefined4
// GLOBAL DAT_00258b90 int *

undefined4 func_00258B2C(void)

{
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(undefined4 *)(albw_frame + 0x0))
  #define local_c (*(undefined4 *)(albw_frame + 0x4))
  local_c = *(undefined4 *)(DAT_00258b88 + 0x20);
  local_10 = DAT_00258b8c;
  return func_00297138(*DAT_00258b90,&local_10);
}

