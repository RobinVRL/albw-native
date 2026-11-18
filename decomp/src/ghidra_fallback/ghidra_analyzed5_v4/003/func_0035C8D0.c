#include "ghidra_types.h"

extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern undefined DAT_0035c8f8;
extern int DAT_0035c908;
extern char s_cf_0035c8fc[];
extern undefined4 _DAT_0035c8f8;

// USA 0035C8D0 <- EU 0035C8AC (Ghidra, non-matching)
// GLOBAL DAT_0035c8f8 undefined
// GLOBAL DAT_0035c908 int

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 func_0035C8D0(int *param_1)

{
  int iVar1;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(int *)(albw_frame + 0x0))
  #define local_c (*(char * *)(albw_frame + 0x4))
  iVar1 = _DAT_0035c8f8;
  param_1[0x14c] = 0x77;
  param_1[0x14d] = iVar1;
  param_1[0x14b] = 0;
  local_c = s_cf_0035c8fc;
  local_10 = DAT_0035c908;
  return func_00150A84(param_1,&local_10,0);
}

