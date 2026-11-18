#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_0052FBDC(int param_1,int param_2,int param_3);
extern int *DAT_0015b644;
extern uint *DAT_0015b648;
extern undefined4 *DAT_0015b64c;
extern undefined4 DAT_0015b650;

// USA 0015B580 <- EU 0015B584 (Ghidra, non-matching)
// GLOBAL DAT_0015b644 int *
// GLOBAL DAT_0015b648 uint *
// GLOBAL DAT_0015b64c undefined4 *
// GLOBAL DAT_0015b650 undefined4

undefined4 * func_0015B580(int param_1,uint param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 in_r3;
  undefined4 unaff_r4;
  undefined4 in_lr;
  
  while( true ) {
    if ((*(ushort *)(param_1 + 0x2e) & 0xff) == 0) {
      return (undefined4 *)0x0;
    }
    if (param_2 < 2) break;
    param_2 = 0;
  }
  iVar2 = *(int *)(param_1 + 0xdf4 + param_2 * 4);
  if (iVar2 < 0) {
    return (undefined4 *)0x0;
  }
  puVar1 = (undefined4 *)func_0052FBDC(*DAT_0015b644 + 0x3dbbc,iVar2,0);
  if (((*DAT_0015b648 & 1) == 0) && (iVar2 = func_00100174((int *)DAT_0015b648), iVar2 != 0)) {
    *DAT_0015b64c = DAT_0015b650;
  }
  if ((puVar1 == (undefined4 *)0x0) ||
     (iVar2 = (**(code **)*puVar1)(puVar1,DAT_0015b64c,*(code **)*puVar1,in_r3,unaff_r4,in_lr),
     iVar2 == 0)) {
    puVar1 = (undefined4 *)0x0;
  }
  return puVar1;
}

