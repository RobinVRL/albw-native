#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_003842C0(int param_1,int param_2,int param_3,int param_4);
extern int func_0052FBA0(int param_1,uint param_2);
extern int *DAT_003b226c;
extern uint *DAT_003b2270;
extern undefined4 *DAT_003b2274;
extern undefined4 DAT_003b2278;

// USA 003B21C4 <- EU 003B21A0 (Ghidra, non-matching)
// GLOBAL DAT_003b226c int *
// GLOBAL DAT_003b2270 uint *
// GLOBAL DAT_003b2274 undefined4 *
// GLOBAL DAT_003b2278 undefined4

undefined4 func_003B21C4(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)func_0052FBA0(*DAT_003b226c + 0x3dbbc,*(uint *)(param_1 + 0x90));
  if (((*DAT_003b2270 & 1) == 0) && (iVar2 = func_00100174((int *)DAT_003b2270), iVar2 != 0)) {
    *DAT_003b2274 = DAT_003b2278;
  }
  if ((puVar1 == (undefined4 *)0x0) ||
     (iVar2 = (**(code **)*puVar1)(puVar1,DAT_003b2274), iVar2 == 0)) {
    puVar1 = (undefined4 *)0x0;
  }
  if ((puVar1 != (undefined4 *)0x0) && (*(char *)((int)puVar1 + 0x4f1) != '\0')) {
    return func_003842C0(*(int *)(param_1 + 0x48) + 0x8c0,0x59,10,1);
  }
  return func_003842C0(*(int *)(param_1 + 0x48) + 0x8c0,0,10,1);
}

