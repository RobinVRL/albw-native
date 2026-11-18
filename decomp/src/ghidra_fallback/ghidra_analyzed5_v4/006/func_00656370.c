#include "ghidra_types.h"

extern int func_0010A794(undefined4 *param_1);
extern int func_00219968(undefined4 *param_1,uint *param_2,undefined1 param_3,uint *param_4);
extern int DAT_0065639c;

// USA 00656370 <- EU 00656348 (Ghidra, non-matching)
// GLOBAL DAT_0065639c int

int func_00656370(undefined4 *param_1,uint *param_2,undefined1 param_3,uint *param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  
  piVar2 = func_00219968(param_1,param_2,param_3,param_4);
  iVar1 = DAT_0065639c;
  *piVar2 = DAT_0065639c;
  piVar2[200] = iVar1 + 0x84;
  puVar3 = func_0010A794(piVar2 + 0x23c);
  puVar3[5] = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar3[8] = 0;
  *(undefined1 *)(puVar3 + 9) = 6;
  *(undefined1 *)((int)puVar3 + 0x25) = 0;
  *(undefined1 *)((int)puVar3 + 0x26) = 0;
  return (int)(puVar3 + -0x23c);
}

