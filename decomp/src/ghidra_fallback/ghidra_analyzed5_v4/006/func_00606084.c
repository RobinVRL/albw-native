#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_00339CC4(undefined4 *param_1,uint *param_2,int param_3,undefined4 param_4, undefined1 param_5);
extern int func_004C03B8(int param_1,undefined4 *param_2);
extern undefined4 DAT_006060b8;
extern undefined4 DAT_006060bc;
extern int DAT_006060c0;
extern undefined4 *DAT_006060c4;

// USA 00606084 <- EU 0060605C (Ghidra, non-matching)
// GLOBAL DAT_006060b8 undefined4
// GLOBAL DAT_006060bc undefined4
// GLOBAL DAT_006060c0 int
// GLOBAL DAT_006060c4 undefined4 *

int * func_00606084(uint *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  
  puVar2 = (undefined4 *)func_0010BAB4(DAT_006060b8);
  piVar3 = (int *)0x0;
  if (puVar2 != (undefined4 *)0x0) {
    piVar3 = func_00339CC4(puVar2,param_1,4,DAT_006060bc,0xff);
    iVar1 = DAT_006060c0;
    *(undefined1 *)((int)piVar3 + 0x911) = 3;
    piVar3[200] = iVar1 + 0xb8;
    puVar2 = DAT_006060c4;
    *piVar3 = iVar1;
    func_004C03B8((int)piVar3,puVar2);
  }
  return piVar3;
}

