#include "ghidra_types.h"

extern int func_005902C0(void *param_1);
extern undefined4 *DAT_005d0ba4;
extern undefined4 *DAT_005d0ba8;
extern undefined4 DAT_005d0bb8;
extern undefined4 DAT_005d0bbc;
extern undefined4 DAT_005d0bc0;
extern undefined4 *DAT_005d0bc4;
extern char s_cl_LhandA_005d0bac[];
extern char s_cl_RhandA_005d0bc8[];

// USA 005D0B68 <- EU 005D0B40 (Ghidra, non-matching)
// GLOBAL DAT_005d0ba4 undefined4 *
// GLOBAL DAT_005d0ba8 undefined4 *
// GLOBAL DAT_005d0bb8 undefined4
// GLOBAL DAT_005d0bbc undefined4
// GLOBAL DAT_005d0bc0 undefined4
// GLOBAL DAT_005d0bc4 undefined4 *
// GLOBAL s_cl_LhandA_005d0bac string
// GLOBAL s_cl_RhandA_005d0bc8 string

undefined4 func_005D0B68(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = DAT_005d0ba4;
  *DAT_005d0ba4 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  uVar2 = DAT_005d0bb8;
  puVar1 = DAT_005d0ba8;
  *DAT_005d0ba8 = 0;
  puVar1[1] = 0;
  puVar1[3] = s_cl_LhandA_005d0bac;
  puVar1[2] = uVar2;
  puVar1 = DAT_005d0bc4;
  DAT_005d0bc4[1] = s_cl_RhandA_005d0bc8;
  *puVar1 = uVar2;
  return func_005902C0(puVar1);
}

