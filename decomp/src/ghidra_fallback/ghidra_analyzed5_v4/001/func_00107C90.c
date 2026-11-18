#include "ghidra_types.h"

extern int func_0010B64C(int param_1);
extern int DAT_00107cf8;

// USA 00107C90 <- EU 00107C90 (Ghidra, non-matching)
// GLOBAL DAT_00107cf8 int

int * func_00107C90(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = func_0010B64C(param_1);
  iVar1 = DAT_00107cf8;
  iVar3 = DAT_00107cf8 + 0x44;
  piVar2[0x47] = DAT_00107cf8 + 0x5c;
  *piVar2 = iVar1;
  piVar2[1] = iVar3;
  piVar2[0x5b] = 0;
  piVar2[0x5c] = 0;
  piVar2[0x5d] = 0;
  piVar2[0x5e] = 0;
  piVar2[0x5f] = 0;
  piVar2[0x60] = 0;
  piVar2[0x61] = 0;
  piVar2[0x62] = 0;
  piVar2[99] = 0;
  piVar2[100] = 0;
  piVar2[0x65] = 0;
  piVar2[0x66] = 0;
  piVar2[0x67] = 0;
  piVar2[0x68] = 0;
  piVar2[0x69] = 0;
  return piVar2;
}

