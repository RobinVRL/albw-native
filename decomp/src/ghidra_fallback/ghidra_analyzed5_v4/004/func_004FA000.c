#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_004fa084;
extern undefined1 *DAT_004fa088;
extern undefined1 *DAT_004fa08c;

// USA 004FA000 <- EU 004F9FD8 (Ghidra, non-matching)
// GLOBAL DAT_004fa084 uint *
// GLOBAL DAT_004fa088 undefined1 *
// GLOBAL DAT_004fa08c undefined1 *

undefined1 * func_004FA000(int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  undefined1 *puVar3;
  
  if (((*DAT_004fa084 & 1) == 0) &&
     (iVar2 = func_00100174((int *)DAT_004fa084), puVar1 = DAT_004fa088, iVar2 != 0)) {
    *DAT_004fa088 = 0xff;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
  }
  puVar3 = DAT_004fa08c;
  puVar1 = DAT_004fa088;
  if (param_1 == 0) {
    DAT_004fa088[3] = DAT_004fa08c[3];
    puVar1[2] = puVar3[2];
    puVar1[1] = puVar3[1];
    *puVar1 = *puVar3;
  }
  else {
    puVar3 = DAT_004fa088 + 0x34;
    DAT_004fa088[3] = DAT_004fa088[0x37];
    puVar1[2] = puVar1[0x36];
    puVar1[1] = puVar1[0x35];
    *puVar1 = *puVar3;
  }
  return DAT_004fa088;
}

