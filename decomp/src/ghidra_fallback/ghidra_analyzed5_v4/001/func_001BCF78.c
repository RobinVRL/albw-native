#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_0058E2B8(int *param_1);
extern int *DAT_001bd040;
extern uint *DAT_001bd044;
extern undefined4 *DAT_001bd048;
extern undefined4 DAT_001bd04c;
extern uint DAT_001bd050;

// USA 001BCF78 <- EU 001BCF78 (Ghidra, non-matching)
// GLOBAL DAT_001bd040 int *
// GLOBAL DAT_001bd044 uint *
// GLOBAL DAT_001bd048 undefined4 *
// GLOBAL DAT_001bd04c undefined4
// GLOBAL DAT_001bd050 uint

undefined4 func_001BCF78(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(int *)(albw_frame + 0x0))
  if (((*(int *)(param_2 + 0x2c) != 0) && (*(char *)(*(int *)(param_2 + 0x2c) + 1) == '\a')) &&
     (puVar1 = (undefined4 *)func_0052FBA0(*DAT_001bd040 + 0x3dbbc,*(uint *)(param_2 + 0x28)),
     puVar1 != (undefined4 *)0x0)) {
    if (((*DAT_001bd044 & 1) == 0) && (iVar2 = func_00100174((int *)DAT_001bd044), iVar2 != 0)) {
      *DAT_001bd048 = DAT_001bd04c;
    }
    iVar2 = (**(code **)*puVar1)(puVar1,DAT_001bd048);
    if (iVar2 == 0) {
      puVar1 = (undefined4 *)0x0;
    }
    if (puVar1 != (undefined4 *)0x0) {
      local_10 = *(int *)(param_1 + 1000) - puVar1[0xfa];
      uVar3 = func_0058E2B8(&local_10);
      if (uVar3 < DAT_001bd050) {
        return 0;
      }
    }
  }
  return 1;
}

