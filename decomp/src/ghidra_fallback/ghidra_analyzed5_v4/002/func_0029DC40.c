#include "ghidra_types.h"

extern int func_0014AA1C(int param_1,char *param_2,int param_3);
extern undefined4 DAT_0029dc50;
extern int *DAT_0029dc54;

// USA 0029DC40 <- EU 0029DC1C (Ghidra, non-matching)
// GLOBAL DAT_0029dc50 undefined4
// GLOBAL DAT_0029dc54 int *

undefined4 func_0029DC40(void)

{
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 ((char *)(albw_frame + 0x0))
  #define local_c (*(undefined4 *)(albw_frame + 0x4))
  local_c = DAT_0029dc50;
  local_10[0] = '\x02';
  return func_0014AA1C(*DAT_0029dc54,local_10,5);
}

