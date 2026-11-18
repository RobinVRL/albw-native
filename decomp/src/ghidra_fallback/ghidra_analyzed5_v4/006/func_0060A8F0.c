#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_001E56CC(undefined4 *param_1,uint *param_2);
extern int func_0034CAA0(undefined4 *param_1);
extern int func_004D3D14(int param_1);
extern undefined4 DAT_0060a988;
extern int DAT_0060a98c;
extern int DAT_0060a990;
extern int *DAT_0060a994;
extern int DAT_0060a998;

// USA 0060A8F0 <- EU 0060A8C8 (Ghidra, non-matching)
// GLOBAL DAT_0060a988 undefined4
// GLOBAL DAT_0060a98c int
// GLOBAL DAT_0060a990 int
// GLOBAL DAT_0060a994 int *
// GLOBAL DAT_0060a998 int

int * func_0060A8F0(uint *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  puVar2 = (undefined4 *)func_0010BAB4(DAT_0060a988);
  piVar3 = (int *)0x0;
  if (puVar2 != (undefined4 *)0x0) {
    piVar3 = func_001E56CC(puVar2,param_1);
    iVar6 = DAT_0060a990;
    iVar5 = DAT_0060a98c;
    piVar3[200] = DAT_0060a990 + 0x74;
    *piVar3 = iVar6;
    piVar3[0x187] = iVar5;
    piVar3[0x188] = 0;
    piVar3[0x189] = 0;
    puVar4 = (undefined4 *)func_0010BAB4(0x48);
    puVar2 = (undefined4 *)0x0;
    if (puVar4 != (undefined4 *)0x0) {
      puVar2 = func_0034CAA0(puVar4);
    }
    piVar1 = DAT_0060a994;
    piVar3[0x18a] = (int)puVar2;
    iVar5 = piVar1[1];
    piVar3[0x18d] = *piVar1;
    piVar3[0x18e] = iVar5;
    iVar5 = DAT_0060a998;
    piVar3[0x18b] = DAT_0060a998;
    piVar3[0x18c] = (int)piVar3;
    iVar6 = piVar1[2];
    iVar7 = piVar1[3];
    piVar3[400] = (int)piVar3;
    piVar3[0x191] = iVar6;
    piVar3[0x192] = iVar7;
    piVar3[399] = iVar5;
    func_004D3D14((int)piVar3);
    piVar3[0xb8] = piVar3[0xb8] | 2;
  }
  return piVar3;
}

