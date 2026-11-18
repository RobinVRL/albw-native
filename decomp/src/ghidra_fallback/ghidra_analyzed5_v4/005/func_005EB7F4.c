#include "ghidra_types.h"

extern int func_005902C0(void *param_1);
extern undefined4 *DAT_005eb80c;
extern undefined4 *DAT_005eb810;
extern undefined4 DAT_005eb814;
extern undefined4 DAT_005eb824;
extern undefined4 DAT_005eb828;
extern char s_Audio3DMgr_005eb818[];

// USA 005EB7F4 <- EU 005EB7CC (Ghidra, non-matching)
// GLOBAL DAT_005eb80c undefined4 *
// GLOBAL DAT_005eb810 undefined4 *
// GLOBAL DAT_005eb814 undefined4
// GLOBAL DAT_005eb824 undefined4
// GLOBAL DAT_005eb828 undefined4
// GLOBAL s_Audio3DMgr_005eb818 string

undefined4 func_005EB7F4(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005eb80c;
  *DAT_005eb80c = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005eb810;
  *DAT_005eb810 = 0;
  puVar1[1] = 0;
  puVar1[2] = DAT_005eb814;
  puVar1[3] = s_Audio3DMgr_005eb818;
  return func_005902C0(puVar1 + 2);
}

