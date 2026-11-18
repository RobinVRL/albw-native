#include "ghidra_types.h"

extern int func_0010A794(undefined4 *param_1);
extern int func_004C18E0(undefined4 *param_1,uint *param_2,undefined1 param_3,undefined4 *param_4);
extern int DAT_00616738;

// USA 00616714 <- EU 006166EC (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 undefined4 *
// GLOBAL DAT_00616738 int

int func_00616714(undefined4 *param_1,uint *param_2,undefined4 param_3,undefined1 param_4,
                 undefined4 *param_5)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  
  piVar2 = (int *)func_004C18E0(param_1,param_2,param_4,param_5);
  iVar1 = DAT_00616738;
  *piVar2 = DAT_00616738;
  piVar2[200] = iVar1 + 0xb8;
  puVar3 = func_0010A794(piVar2 + 600);
  puVar3[5] = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar3[8] = 0;
  puVar3[9] = param_3;
  return (int)(puVar3 + -600);
}

