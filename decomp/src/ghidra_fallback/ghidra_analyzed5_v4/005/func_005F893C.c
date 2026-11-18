#include "ghidra_types.h"

extern int func_005902C0(void *param_1);
extern undefined4 *DAT_005f8998;
extern undefined4 *DAT_005f899c;
extern undefined4 DAT_005f89bc;
extern undefined4 DAT_005f89c0;
extern undefined4 DAT_005f89c4;
extern undefined4 *DAT_005f89c8;
extern undefined DAT_005f89d4;
extern undefined4 DAT_005f89dc;
extern char s_Gm_CongratulationWindowT_005f89a0[];
extern char s_InOut_005f89cc[];

// USA 005F893C <- EU 005F8914 (Ghidra, non-matching)
// GLOBAL DAT_005f8998 undefined4 *
// GLOBAL DAT_005f899c undefined4 *
// GLOBAL DAT_005f89bc undefined4
// GLOBAL DAT_005f89c0 undefined4
// GLOBAL DAT_005f89c4 undefined4
// GLOBAL DAT_005f89c8 undefined4 *
// GLOBAL DAT_005f89d4 undefined
// GLOBAL DAT_005f89dc undefined4
// GLOBAL s_Gm_CongratulationWindowT_005f89a0 string
// GLOBAL s_InOut_005f89cc string

undefined4 func_005F893C(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = DAT_005f8998;
  *DAT_005f8998 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  uVar2 = DAT_005f89bc;
  puVar1 = DAT_005f899c;
  *DAT_005f899c = 0;
  puVar1[1] = 0;
  puVar1[3] = s_Gm_CongratulationWindowT_005f89a0;
  puVar1[2] = uVar2;
  puVar1 = DAT_005f89c8;
  DAT_005f89c8[1] = s_InOut_005f89cc;
  *puVar1 = uVar2;
  puVar1[3] = s_InOut_005f89cc;
  puVar1[2] = uVar2;
  puVar1[4] = uVar2;
  puVar1[5] = &DAT_005f89d4;
  return func_005902C0(0);
}

