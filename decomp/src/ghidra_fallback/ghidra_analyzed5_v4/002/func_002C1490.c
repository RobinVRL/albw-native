#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_0010BAB4(undefined4 param_1);
extern int func_001712B4(undefined4 *param_1,int param_2,ushort *param_3);
extern undefined4 DAT_002c150c;
extern uint *DAT_002c1510;
extern undefined4 *DAT_002c1514;
extern undefined4 DAT_002c1518;

// USA 002C1490 <- EU 002C146C (Ghidra, non-matching)
// GLOBAL DAT_002c150c undefined4
// GLOBAL DAT_002c1510 uint *
// GLOBAL DAT_002c1514 undefined4 *
// GLOBAL DAT_002c1518 undefined4

undefined4 * func_002C1490(int param_1,ushort *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  
  puVar1 = (undefined4 *)func_0010BAB4(0xb0);
  puVar2 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = func_001712B4(puVar1,param_1,param_2);
    *puVar2 = DAT_002c150c;
    piVar4 = (int *)puVar2[0x23];
    if (((*DAT_002c1510 & 1) == 0) && (iVar3 = func_00100174((int *)DAT_002c1510), iVar3 != 0)) {
      *DAT_002c1514 = DAT_002c1518;
    }
    if ((piVar4 == (int *)0x0) ||
       (iVar3 = (**(code **)(*piVar4 + 8))(piVar4,DAT_002c1514), iVar3 == 0)) {
      piVar4 = (int *)0x0;
    }
    puVar2[0x2b] = piVar4;
  }
  return puVar2;
}

