#include "ghidra_types.h"

extern int func_005902C0(void *param_1);
extern undefined4 *DAT_005f69a4;
extern undefined4 *DAT_005f69a8;
extern undefined4 DAT_005f69ac;
extern undefined4 DAT_005f69bc;
extern undefined4 DAT_005f69c0;
extern char s_SoundHeap_005f69b0[];

// USA 005F698C <- EU 005F6964 (Ghidra, non-matching)
// GLOBAL DAT_005f69a4 undefined4 *
// GLOBAL DAT_005f69a8 undefined4 *
// GLOBAL DAT_005f69ac undefined4
// GLOBAL DAT_005f69bc undefined4
// GLOBAL DAT_005f69c0 undefined4
// GLOBAL s_SoundHeap_005f69b0 string

undefined4 func_005F698C(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005f69a4;
  *DAT_005f69a4 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005f69a8;
  *DAT_005f69a8 = 0;
  puVar1[1] = 0;
  puVar1[2] = DAT_005f69ac;
  puVar1[3] = s_SoundHeap_005f69b0;
  return func_005902C0(puVar1 + 2);
}

