#include "ghidra_types.h"

extern int func_005902C0(void *param_1);
extern undefined4 *DAT_005c6214;
extern undefined4 *DAT_005c6218;
extern undefined4 *DAT_005c621c;
extern undefined4 DAT_005c622c;
extern undefined4 DAT_005c6254;
extern undefined4 DAT_005c6258;
extern char s_N_ArrowB_00_005c6230[];
extern char s_N_ArrowL_00_005c623c[];
extern char s_N_ArrowR_00_005c6248[];
extern char s_N_ArrowT_00_005c6220[];

// USA 005C61D4 <- EU 005C61AC (Ghidra, non-matching)
// GLOBAL DAT_005c6214 undefined4 *
// GLOBAL DAT_005c6218 undefined4 *
// GLOBAL DAT_005c621c undefined4 *
// GLOBAL DAT_005c622c undefined4
// GLOBAL DAT_005c6254 undefined4
// GLOBAL DAT_005c6258 undefined4
// GLOBAL s_N_ArrowB_00_005c6230 string
// GLOBAL s_N_ArrowL_00_005c623c string
// GLOBAL s_N_ArrowR_00_005c6248 string
// GLOBAL s_N_ArrowT_00_005c6220 string

undefined4 func_005C61D4(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = DAT_005c6214;
  *DAT_005c6214 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005c6218;
  *DAT_005c6218 = 0;
  puVar1[1] = 0;
  uVar2 = DAT_005c622c;
  puVar1 = DAT_005c621c;
  DAT_005c621c[1] = s_N_ArrowT_00_005c6220;
  *puVar1 = uVar2;
  puVar1[2] = uVar2;
  puVar1[3] = s_N_ArrowB_00_005c6230;
  puVar1[4] = uVar2;
  puVar1[5] = s_N_ArrowL_00_005c623c;
  puVar1[6] = uVar2;
  puVar1[7] = s_N_ArrowR_00_005c6248;
  return func_005902C0(0);
}

