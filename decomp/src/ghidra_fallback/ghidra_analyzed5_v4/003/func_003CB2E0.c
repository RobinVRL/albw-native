#include "ghidra_types.h"

extern int DAT_003cb3a0;
extern int DAT_003cb3a4;
extern int DAT_003cb3a8;
extern int DAT_003cb3ac;
extern int DAT_003cb3b0;
extern int DAT_003cb3b4;

// USA 003CB2E0 <- EU 003CB2BC (Ghidra, non-matching)
// GLOBAL DAT_003cb3a0 int
// GLOBAL DAT_003cb3a4 int
// GLOBAL DAT_003cb3a8 int
// GLOBAL DAT_003cb3ac int
// GLOBAL DAT_003cb3b0 int
// GLOBAL DAT_003cb3b4 int

/* WARNING: Removing unreachable block (ram,0x003cb2d0) */
/* WARNING: Removing unreachable block (ram,0x003cb358) */

int * func_003CB2E0(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  *param_1 = 0x300;
  param_1[1] = DAT_003cb3a0;
  iVar1 = DAT_003cb3a4;
  param_1[2] = 0;
  iVar5 = 5;
  param_1[3] = iVar1;
  iVar1 = DAT_003cb3a8;
  piVar4 = param_1 + 3;
  do {
    iVar5 = iVar5 + -1;
    piVar4[1] = iVar1;
    piVar4 = piVar4 + 2;
    *piVar4 = iVar1;
    iVar2 = DAT_003cb3ac;
  } while (iVar5 != 0);
  param_1[0xe] = 0;
  param_1[0xf] = iVar2;
  iVar5 = 0xf;
  piVar4 = param_1 + 0xf;
  do {
    iVar5 = iVar5 + -1;
    piVar4[1] = iVar1;
    piVar4 = piVar4 + 2;
    *piVar4 = iVar1;
    iVar3 = DAT_003cb3b0;
  } while (iVar5 != 0);
  param_1[0x2e] = 0;
  param_1[0x2f] = iVar3;
  param_1[0x30] = 0;
  param_1[0x31] = iVar2;
  iVar5 = 0xf;
  piVar4 = param_1 + 0x31;
  do {
    iVar5 = iVar5 + -1;
    piVar4[1] = iVar1;
    piVar4 = piVar4 + 2;
    *piVar4 = iVar1;
    iVar2 = DAT_003cb3b4;
  } while (iVar5 != 0);
  param_1[0x50] = 0;
  param_1[0x51] = iVar2;
  return param_1 + 0x52;
}

