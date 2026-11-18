#include "ghidra_types.h"

extern int func_003D3690(uint *param_1,uint *param_2);
extern undefined8 func_003DB398(void);
extern uint DAT_003d362c;
extern uint *DAT_003d3630;

// USA 003D35F8 <- EU 003D35D4 (Ghidra, non-matching)
// GLOBAL DAT_003d362c uint
// GLOBAL DAT_003d3630 uint *

void func_003D35F8(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(longlong *)(albw_frame + 0x0))
  #define local_18 (*(uint *)(albw_frame + 0x8))
  #define uStack_14 (*(uint *)(albw_frame + 0xc))
  local_20 = func_003DB398();
  local_20 = local_20 * (ulonglong)DAT_003d362c;
  local_18 = *DAT_003d3630;
  uStack_14 = DAT_003d3630[1];
  puVar1 = (undefined4 *)func_003D3690(&local_18,(uint *)&local_20);
  uVar2 = puVar1[1];
  *param_1 = *puVar1;
  param_1[1] = uVar2;
  return;
}

