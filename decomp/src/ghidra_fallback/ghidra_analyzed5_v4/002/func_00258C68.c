#include "ghidra_types.h"

extern int func_00297138(int param_1,int *param_2);
extern int DAT_00258cc4;
extern undefined4 DAT_00258cc8;
extern int *DAT_00258ccc;

// USA 00258C68 <- EU 00258C90 (Ghidra, non-matching)
// GLOBAL DAT_00258cc4 int
// GLOBAL DAT_00258cc8 undefined4
// GLOBAL DAT_00258ccc int *

undefined4 func_00258C68(void)

{
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(undefined4 *)(albw_frame + 0x0))
  #define local_c (*(undefined4 *)(albw_frame + 0x4))
  local_c = *(undefined4 *)(DAT_00258cc4 + 0x24);
  local_10 = DAT_00258cc8;
  return func_00297138(*DAT_00258ccc,&local_10);
}

