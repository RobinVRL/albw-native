#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int func_003A2C34(uint param_1,undefined4 param_2);
extern int func_003ABB24(int *param_1,uint param_2,int param_3);
extern int func_0058A7D4(void);
extern int DAT_002b7dbc;
extern int DAT_002b7dc0;
extern int *DAT_002b7dc4;

// USA 002B7CAC <- EU 002B7C88 (Ghidra, non-matching)
// GLOBAL DAT_002b7dbc int
// GLOBAL DAT_002b7dc0 int
// GLOBAL DAT_002b7dc4 int *

undefined4 func_002B7CAC(int param_1,uint param_2,int param_3)

{
  char cVar1;
  uint *puVar2;
  uint uVar3;
  undefined4 uVar4;
  
  if ((param_3 == 0) && (*(char *)(*(int *)(*(int *)(param_1 + 0x93c) + 4) + 0x62) == '\0')) {
    return 0;
  }
  if (((*(char *)(*(int *)(param_1 + 0x93c) + 0x81c) != '\x0e') && (param_2 == 1)) &&
     (cVar1 = func_003A2C34(param_1 + 0xbc8U,0xe), cVar1 != '\0')) {
    puVar2 = (uint *)func_0058A7D4();
    uVar3 = func_00111A64(puVar2);
    if ((((uint)((ulonglong)uVar3 * 0x65 >> 0x20) < 0x33) &&
        (*(int *)(param_1 + 0xa00) <= DAT_002b7dbc)) || (*(int *)(param_1 + 0xa00) < 0x40000001)) {
      param_2 = 0xe;
    }
  }
  if (((*(char *)(*(int *)(param_1 + 0x93c) + 0x81c) != '\r') && (param_2 == 1)) &&
     (cVar1 = func_003A2C34(param_1 + 0xbc8U,0xd), cVar1 != '\0')) {
    puVar2 = (uint *)func_0058A7D4();
    uVar3 = func_00111A64(puVar2);
    if (((uint)((ulonglong)uVar3 * 0x65 >> 0x20) < 0x33) &&
       (*(int *)(param_1 + 0xa00) <= DAT_002b7dc0)) {
      param_2 = 0xd;
    }
  }
  if (*(int *)(*DAT_002b7dc4 + 0x44) != 0) {
    param_2 = 1;
  }
  uVar4 = func_003ABB24(*(int **)(param_1 + 0x93c),param_2,0);
  return uVar4;
}

