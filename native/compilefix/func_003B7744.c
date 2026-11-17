/* USA 003B7744 <- EU 003B7720 (stage-2 Ghidra text) with a dropped indirect-call argument restored
 * (CLASS indirect call dropped arg, BOOT_LOG 129): vtable +0x138 (state change) takes (this, state, 1); at
 * the site Ghidra printed as (param_1,1) the ARM sets r2 = 1; mov r1, r2 (scratchpad vsite.py check). */
#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int func_002B79CC(int param_1,undefined2 param_2);
extern int func_003842C0(int param_1,int param_2,int param_3,int param_4);
extern int func_004EABB8(int param_1,int *param_2,undefined4 *param_3);
extern int func_0058A7D4(void);
extern int DAT_003b77d4;
extern int *DAT_003b77d8;
extern char s_SE_PL_Arrow_SET_003b77c4[];

// USA 003B7744 <- EU 003B7720 (Ghidra, non-matching)
// GLOBAL DAT_003b77d4 int
// GLOBAL DAT_003b77d8 int *
// GLOBAL s_SE_PL_Arrow_SET_003b77c4 string

void func_003B7744(int *param_1)

{
  uint *puVar1;
  uint uVar2;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  func_002B79CC(param_1[0x12],0x1e);
  func_003842C0(param_1[0x12] + 0x8c0,0x22,10,1);
  local_14 = s_SE_PL_Arrow_SET_003b77c4;
  local_18 = DAT_003b77d4;
  func_004EABB8(*DAT_003b77d8,&local_18,(undefined4 *)0x0);
  (**(code **)(*param_1 + 0x138))(param_1,1,1);
  (**(code **)(*param_1 + 0x130))(param_1);
  puVar1 = (uint *)func_0058A7D4();
  uVar2 = func_00111A64(puVar1);
  *(short *)(param_1 + 0x18) = (short)((ulonglong)uVar2 * 0x1f >> 0x20) + 0x1e;
  return;
}

