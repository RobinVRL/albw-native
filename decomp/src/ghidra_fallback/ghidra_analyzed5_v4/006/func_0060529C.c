#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_00339CC4(undefined4 *param_1,uint *param_2,int param_3,undefined4 param_4, undefined1 param_5);
extern int func_004C03B8(int param_1,undefined4 *param_2);
extern undefined4 DAT_006052e4;
extern undefined4 DAT_006052e8;
extern int DAT_006052ec;
extern undefined4 *DAT_006052f0;
extern int DAT_006052f4;
extern int DAT_006052f8;

// USA 0060529C <- EU 00605274 (Ghidra, non-matching)
// GLOBAL DAT_006052e4 undefined4
// GLOBAL DAT_006052e8 undefined4
// GLOBAL DAT_006052ec int
// GLOBAL DAT_006052f0 undefined4 *
// GLOBAL DAT_006052f4 int
// GLOBAL DAT_006052f8 int

int * func_0060529C(uint *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  
  puVar3 = (undefined4 *)func_0010BAB4(DAT_006052e4);
  piVar4 = (int *)0x0;
  if (puVar3 != (undefined4 *)0x0) {
    piVar4 = func_00339CC4(puVar3,param_1,3,DAT_006052e8,0xff);
    iVar1 = DAT_006052ec;
    piVar4[200] = DAT_006052ec + 0xb8;
    puVar3 = DAT_006052f0;
    *piVar4 = iVar1;
    func_004C03B8((int)piVar4,puVar3);
    iVar2 = DAT_006052f8;
    iVar1 = DAT_006052f4 << 2;
    iVar5 = DAT_006052f4 - DAT_006052f8;
    piVar4[0x24e] = DAT_006052f4;
    piVar4[0x24f] = iVar1;
    piVar4[0x250] = iVar2;
    piVar4[0x251] = iVar5;
  }
  return piVar4;
}

