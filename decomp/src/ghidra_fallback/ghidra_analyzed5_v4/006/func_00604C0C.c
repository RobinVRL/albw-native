#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_001E518C(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, uint param_5);
extern int func_002375D4(undefined4 *param_1,uint *param_2);
extern int func_00237A7C(int param_1);
extern int func_00237DA8(int param_1);
extern undefined4 DAT_00604c98;
extern int DAT_00604c9c;

// USA 00604C0C <- EU 00604BE4 (Ghidra, non-matching)
// GLOBAL DAT_00604c98 undefined4
// GLOBAL DAT_00604c9c int

int * func_00604C0C(uint *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_00604c98);
  piVar2 = (int *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    piVar2 = func_002375D4(puVar1,param_1);
    iVar4 = DAT_00604c9c + 0x78;
    *piVar2 = DAT_00604c9c;
    piVar2[200] = iVar4;
    piVar2[0x193] = 0;
    piVar2[0x194] = 0;
    piVar2[0x195] = 0;
    iVar3 = 0;
    iVar4 = 0;
    piVar2[0x1a0] = 0;
    do {
      piVar2[iVar3 + 0x196] = 0;
      iVar4 = iVar4 + 2;
      piVar2[iVar3 + 0x197] = 0;
      iVar3 = iVar3 + 2;
    } while (iVar4 < 10);
    func_001E518C(piVar2,param_1,0,0,0);
    func_00237A7C((int)piVar2);
    func_00237DA8((int)piVar2);
  }
  return piVar2;
}

