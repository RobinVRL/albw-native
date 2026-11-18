#include "ghidra_types.h"

extern int func_00587F74(int param_1,int *param_2,int param_3);
extern undefined DAT_0019b824;
extern int DAT_0019b840;
extern int *DAT_0019b844;
extern char s__SE_S_WARP_HOLE_APPEAR_0019b827[];
extern char s_cf_0019b827[];
extern undefined4 _DAT_0019b824;

// USA 0019B7D4 <- EU 0019B7D4 (Ghidra, non-matching)
// GLOBAL DAT_0019b824 undefined
// GLOBAL DAT_0019b840 int
// GLOBAL DAT_0019b844 int *
// GLOBAL s_cf_0019b827 string

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 func_0019B7D4(int param_1)

{
  undefined4 uVar1;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(int *)(albw_frame + 0x0))
  #define local_c (*(char * *)(albw_frame + 0x4))
  uVar1 = _DAT_0019b824;
  *(undefined4 *)(param_1 + 0x444) = 10;
  *(undefined4 *)(param_1 + 0x448) = uVar1;
  *(undefined4 *)(param_1 + 0x440) = 0;
  local_c = s__SE_S_WARP_HOLE_APPEAR_0019b827 + 1;
  local_10 = DAT_0019b840;
  return func_00587F74(*DAT_0019b844,&local_10,0);
}

