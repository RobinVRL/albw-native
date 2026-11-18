#include "ghidra_types.h"

extern int DAT_003cd0b4;
extern int DAT_003cd0b8;
extern int DAT_003cd0bc;
extern int DAT_003cd0c0;
extern int DAT_003cd0c4;
extern int DAT_003cd0c8;

// USA 003CCFF4 <- EU 003CCFD0 (Ghidra, non-matching)
// GLOBAL DAT_003cd0b4 int
// GLOBAL DAT_003cd0b8 int
// GLOBAL DAT_003cd0bc int
// GLOBAL DAT_003cd0c0 int
// GLOBAL DAT_003cd0c4 int
// GLOBAL DAT_003cd0c8 int

/* WARNING: Removing unreachable block (ram,0x003ccfe4) */
/* WARNING: Removing unreachable block (ram,0x003cd06c) */

int * func_003CCFF4(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  *param_1 = 0x300;
  param_1[1] = DAT_003cd0b4;
  iVar1 = DAT_003cd0b8;
  param_1[2] = 0;
  iVar5 = 5;
  param_1[3] = iVar1;
  iVar1 = DAT_003cd0bc;
  piVar4 = param_1 + 3;
  do {
    iVar5 = iVar5 + -1;
    piVar4[1] = iVar1;
    piVar4 = piVar4 + 2;
    *piVar4 = iVar1;
    iVar2 = DAT_003cd0c0;
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
    iVar3 = DAT_003cd0c4;
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
    iVar2 = DAT_003cd0c8;
  } while (iVar5 != 0);
  param_1[0x50] = 0;
  param_1[0x51] = iVar2;
  return param_1 + 0x52;
}

