#include "ghidra_types.h"

extern int DAT_003cd0b4;
extern int DAT_003cd0b8;
extern int DAT_003cd0bc;
extern int DAT_003cd0c0;
extern int DAT_003cd0c4;
extern int DAT_003cd0c8;

// USA 003CD000 <- EU 003CCFDC (Ghidra, non-matching)
// GLOBAL DAT_003cd0b4 int
// GLOBAL DAT_003cd0b8 int
// GLOBAL DAT_003cd0bc int
// GLOBAL DAT_003cd0c0 int
// GLOBAL DAT_003cd0c4 int
// GLOBAL DAT_003cd0c8 int

int * func_003CD000(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  if (param_2 == 0) {
    iVar4 = param_3 << 8;
  }
  else {
    iVar4 = 0x300;
  }
  *param_1 = iVar4;
  param_1[1] = DAT_003cd0b4;
  iVar4 = DAT_003cd0b8;
  param_1[2] = 0;
  iVar5 = 5;
  param_1[3] = iVar4;
  iVar4 = DAT_003cd0bc;
  piVar3 = param_1 + 3;
  do {
    iVar5 = iVar5 + -1;
    piVar3[1] = iVar4;
    piVar3 = piVar3 + 2;
    *piVar3 = iVar4;
    iVar1 = DAT_003cd0c0;
  } while (iVar5 != 0);
  param_1[0xe] = 0;
  param_1[0xf] = iVar1;
  iVar5 = 0xf;
  piVar3 = param_1 + 0xf;
  do {
    iVar5 = iVar5 + -1;
    piVar3[1] = iVar4;
    piVar3 = piVar3 + 2;
    *piVar3 = iVar4;
    iVar2 = DAT_003cd0c4;
  } while (iVar5 != 0);
  if (param_2 == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = 2;
  }
  param_1[0x2e] = iVar5;
  param_1[0x2f] = iVar2;
  param_1[0x30] = 0;
  param_1[0x31] = iVar1;
  iVar5 = 0xf;
  piVar3 = param_1 + 0x31;
  do {
    iVar5 = iVar5 + -1;
    piVar3[1] = iVar4;
    piVar3 = piVar3 + 2;
    *piVar3 = iVar4;
    iVar1 = DAT_003cd0c8;
  } while (iVar5 != 0);
  param_1[0x50] = param_2;
  param_1[0x51] = iVar1;
  return param_1 + 0x52;
}

