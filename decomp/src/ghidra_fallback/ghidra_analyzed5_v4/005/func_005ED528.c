#include "ghidra_types.h"

extern int func_005902C0(void *param_1);
extern undefined4 *DAT_005ed564;
extern undefined4 *DAT_005ed568;
extern undefined4 DAT_005ed57c;
extern undefined4 DAT_005ed580;
extern undefined4 DAT_005ed584;
extern undefined4 *DAT_005ed588;
extern char s_Cm_SelectFrame_005ed56c[];
extern char s_W_SelectCursor_00_005ed58c[];

// USA 005ED528 <- EU 005ED500 (Ghidra, non-matching)
// GLOBAL DAT_005ed564 undefined4 *
// GLOBAL DAT_005ed568 undefined4 *
// GLOBAL DAT_005ed57c undefined4
// GLOBAL DAT_005ed580 undefined4
// GLOBAL DAT_005ed584 undefined4
// GLOBAL DAT_005ed588 undefined4 *
// GLOBAL s_Cm_SelectFrame_005ed56c string
// GLOBAL s_W_SelectCursor_00_005ed58c string

undefined4 func_005ED528(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = DAT_005ed564;
  *DAT_005ed564 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  uVar2 = DAT_005ed57c;
  puVar1 = DAT_005ed568;
  *DAT_005ed568 = 0;
  puVar1[1] = 0;
  puVar1[3] = s_Cm_SelectFrame_005ed56c;
  puVar1[2] = uVar2;
  puVar1 = DAT_005ed588;
  DAT_005ed588[1] = s_W_SelectCursor_00_005ed58c;
  *puVar1 = uVar2;
  return func_005902C0(puVar1);
}

