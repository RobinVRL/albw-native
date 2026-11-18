#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern undefined4 DAT_0057f38c;
extern uint *DAT_0057f390;
extern undefined4 *DAT_0057f394;
extern uint *DAT_0057f398;
extern undefined4 *DAT_0057f39c;
extern uint *DAT_0057f3a0;
extern undefined4 *DAT_0057f3a4;

// USA 0057F260 <- EU 0057F238 (Ghidra, non-matching)
// GLOBAL DAT_0057f38c undefined4
// GLOBAL DAT_0057f390 uint *
// GLOBAL DAT_0057f394 undefined4 *
// GLOBAL DAT_0057f398 uint *
// GLOBAL DAT_0057f39c undefined4 *
// GLOBAL DAT_0057f3a0 uint *
// GLOBAL DAT_0057f3a4 undefined4 *

undefined4 * func_0057F260(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  
  uVar2 = DAT_0057f38c;
  puVar4 = *(undefined4 **)(param_1 + 0x220);
  if (puVar4 != (undefined4 *)0x0) {
    cVar1 = *(char *)(puVar4 + 1);
    if (cVar1 == '\0') {
      if (((*DAT_0057f390 & 1) == 0) && (iVar3 = func_00100174((int *)DAT_0057f390), iVar3 != 0)) {
        *DAT_0057f394 = uVar2;
      }
      iVar3 = (**(code **)*puVar4)(puVar4,DAT_0057f394);
      if (iVar3 == 0) {
        puVar4 = (undefined4 *)0x0;
      }
    }
    else if (cVar1 == '\x01') {
      if (((*DAT_0057f398 & 1) == 0) && (iVar3 = func_00100174((int *)DAT_0057f398), iVar3 != 0)) {
        *DAT_0057f39c = uVar2;
      }
      iVar3 = (**(code **)*puVar4)(puVar4,DAT_0057f39c);
      if (iVar3 == 0) {
        puVar4 = (undefined4 *)0x0;
      }
    }
    else {
      if (cVar1 != '\x02') {
        return (undefined4 *)0x0;
      }
      if (((*DAT_0057f3a0 & 1) == 0) && (iVar3 = func_00100174((int *)DAT_0057f3a0), iVar3 != 0)) {
        *DAT_0057f3a4 = uVar2;
      }
      iVar3 = (**(code **)*puVar4)(puVar4,DAT_0057f3a4);
      if (iVar3 == 0) {
        puVar4 = (undefined4 *)0x0;
      }
    }
    if (puVar4 != (undefined4 *)0x0) {
      return puVar4 + 2;
    }
  }
  return (undefined4 *)0x0;
}

