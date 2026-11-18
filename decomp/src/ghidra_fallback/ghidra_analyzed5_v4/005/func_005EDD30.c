#include "ghidra_types.h"

extern int func_005902C0(void *param_1);
extern undefined4 *DAT_005edd48;
extern undefined4 *DAT_005edd4c;
extern undefined4 DAT_005edd50;
extern undefined4 DAT_005edd60;
extern undefined4 DAT_005edd64;
extern char s_AudioSystem_005edd54[];

// USA 005EDD30 <- EU 005EDD08 (Ghidra, non-matching)
// GLOBAL DAT_005edd48 undefined4 *
// GLOBAL DAT_005edd4c undefined4 *
// GLOBAL DAT_005edd50 undefined4
// GLOBAL DAT_005edd60 undefined4
// GLOBAL DAT_005edd64 undefined4
// GLOBAL s_AudioSystem_005edd54 string

undefined4 func_005EDD30(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005edd48;
  *DAT_005edd48 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005edd4c;
  *DAT_005edd4c = 0;
  puVar1[1] = 0;
  puVar1[2] = DAT_005edd50;
  puVar1[3] = s_AudioSystem_005edd54;
  return func_005902C0(puVar1 + 2);
}

