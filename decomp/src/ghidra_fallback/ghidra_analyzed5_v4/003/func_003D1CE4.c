#include "ghidra_types.h"

extern int DAT_003d1d2c;
extern int DAT_003d1d30;

// USA 003D1CE4 <- EU 003D1CC0 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 uint
// PARAM param_6 Stack[0x4]:4 uint
// PARAM param_7 Stack[0x8]:4 uint
// GLOBAL DAT_003d1d2c int
// GLOBAL DAT_003d1d30 int

int func_003D1CE4(int param_1,int param_2,undefined4 param_3,undefined1 param_4,uint param_5,
                 uint param_6,uint param_7)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = DAT_003d1d2c;
  iVar2 = DAT_003d1d2c;
  if (param_2 != 0) {
    *(int *)(param_1 + 0x10) = param_2;
    iVar2 = 0;
  }
  if (-1 < iVar2) {
    *(undefined4 *)(param_1 + 0x18) = param_3;
    if (param_5 < 4) {
      iVar3 = 0;
    }
    *(undefined1 *)(param_1 + 0x34) = param_4;
    if (param_5 < 4) {
      *(char *)(param_1 + 0x35) = (char)param_5;
    }
    iVar2 = iVar3;
    if (-1 < iVar3) {
      *(char *)(param_1 + 0x6c) = (char)param_6;
      uVar1 = param_7;
      if (1 < param_7) {
        uVar1 = param_6;
      }
      *(char *)(param_1 + 0x6d) = (char)param_7;
      iVar2 = DAT_003d1d30;
      if (uVar1 < 2) {
        iVar2 = 0;
      }
    }
  }
  return iVar2;
}

