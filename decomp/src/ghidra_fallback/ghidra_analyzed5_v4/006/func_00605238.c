#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_00339CC4(undefined4 *param_1,uint *param_2,int param_3,undefined4 param_4, undefined1 param_5);
extern int func_004C03B8(int param_1,undefined4 *param_2);
extern undefined4 DAT_00605264;
extern undefined4 DAT_00605268;
extern int DAT_0060526c;
extern undefined4 *DAT_00605270;

// USA 00605238 <- EU 00605210 (Ghidra, non-matching)
// GLOBAL DAT_00605264 undefined4
// GLOBAL DAT_00605268 undefined4
// GLOBAL DAT_0060526c int
// GLOBAL DAT_00605270 undefined4 *

int * func_00605238(uint *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_00605264);
  piVar2 = (int *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    piVar2 = func_00339CC4(puVar1,param_1,4,DAT_00605268,0xff);
    iVar3 = DAT_0060526c + 0xb8;
    *piVar2 = DAT_0060526c;
    puVar1 = DAT_00605270;
    piVar2[200] = iVar3;
    func_004C03B8((int)piVar2,puVar1);
  }
  return piVar2;
}

