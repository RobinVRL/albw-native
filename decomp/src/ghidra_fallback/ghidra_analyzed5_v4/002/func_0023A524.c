#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_005841A8(int param_1,undefined4 param_2,int *param_3);
extern int *DAT_0023a5c8;
extern undefined4 *DAT_0023a5cc;
extern int DAT_0023a5d0;
extern uint *DAT_0023a5d4;
extern undefined4 *DAT_0023a5d8;
extern undefined4 DAT_0023a5dc;

// USA 0023A524 <- EU 0023A524 (Ghidra, non-matching)
// GLOBAL DAT_0023a5c8 int *
// GLOBAL DAT_0023a5cc undefined4 *
// GLOBAL DAT_0023a5d0 int
// GLOBAL DAT_0023a5d4 uint *
// GLOBAL DAT_0023a5d8 undefined4 *
// GLOBAL DAT_0023a5dc undefined4

void func_0023A524(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)
           func_005841A8(*DAT_0023a5c8,*DAT_0023a5cc,*(int **)(DAT_0023a5d0 + *DAT_0023a5c8));
  puVar1 = (undefined4 *)*puVar1;
  if (((*DAT_0023a5d4 & 1) == 0) && (iVar2 = func_00100174((int *)DAT_0023a5d4), iVar2 != 0)) {
    *DAT_0023a5d8 = DAT_0023a5dc;
  }
  if ((puVar1 == (undefined4 *)0x0) ||
     (iVar2 = (**(code **)*puVar1)(puVar1,DAT_0023a5d8), iVar2 == 0)) {
    puVar1 = (undefined4 *)0x0;
  }
  if ((puVar1 != (undefined4 *)0x0) && (*(char *)(puVar1 + 0x121) != '\0')) {
    puVar1[0x11f] = puVar1[0x11f] + 1;
  }
  return;
}

