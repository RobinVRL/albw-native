#include "ghidra_types.h"

extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern undefined DAT_001d652c;
extern int DAT_001d6544;
extern char s_cf_001d6530[];
extern undefined4 _DAT_001d652c;

// USA 001D64D4 <- EU 001D64D4 (Ghidra, non-matching)
// GLOBAL DAT_001d652c undefined
// GLOBAL DAT_001d6544 int

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 func_001D64D4(int *param_1)

{
  int iVar1;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(int *)(albw_frame + 0x0))
  #define local_c (*(char * *)(albw_frame + 0x4))
  param_1[0x150] = param_1[0xf5];
  iVar1 = _DAT_001d652c;
  param_1[0x13f] = 0x3c;
  param_1[0x140] = iVar1;
  param_1[0x13e] = 0;
  *(undefined1 *)(param_1 + 0x14f) = 0;
  local_c = s_cf_001d6530;
  local_10 = DAT_001d6544;
  return func_00150A84(param_1,&local_10,0);
}

