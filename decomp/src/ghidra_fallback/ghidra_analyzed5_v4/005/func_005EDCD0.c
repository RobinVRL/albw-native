#include "ghidra_types.h"

extern int func_005902C0(void *param_1);
extern undefined4 *DAT_005edce8;
extern undefined4 *DAT_005edcec;
extern undefined4 DAT_005edcf0;
extern undefined4 DAT_005edd00;
extern undefined4 DAT_005edd04;
extern char s_AudioPlayer_005edcf4[];

// USA 005EDCD0 <- EU 005EDCA8 (Ghidra, non-matching)
// GLOBAL DAT_005edce8 undefined4 *
// GLOBAL DAT_005edcec undefined4 *
// GLOBAL DAT_005edcf0 undefined4
// GLOBAL DAT_005edd00 undefined4
// GLOBAL DAT_005edd04 undefined4
// GLOBAL s_AudioPlayer_005edcf4 string

undefined4 func_005EDCD0(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005edce8;
  *DAT_005edce8 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005edcec;
  *DAT_005edcec = 0;
  puVar1[1] = 0;
  puVar1[2] = DAT_005edcf0;
  puVar1[3] = s_AudioPlayer_005edcf4;
  return func_005902C0(puVar1 + 2);
}

