#include "ghidra_types.h"

extern int DAT_003d3390;
extern int DAT_003d3394;
extern int DAT_003d3398;
extern int DAT_003d339c;

// USA 003D32CC <- EU 003D32A8 (Ghidra, non-matching)
// GLOBAL DAT_003d3390 int
// GLOBAL DAT_003d3394 int
// GLOBAL DAT_003d3398 int
// GLOBAL DAT_003d339c int

int func_003D32CC(int param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  uVar1 = param_1 - 2000;
  if (param_2 < 3) {
    iVar4 = param_2 + 9;
    uVar1 = param_1 - 0x7d1;
  }
  else {
    iVar4 = param_2 + -3;
  }
  iVar2 = 1;
  if (-1 < (int)uVar1) goto LAB_003d3314;
  iVar3 = (int)((ulonglong)((longlong)DAT_003d3390 * (longlong)(int)uVar1) >> 0x20);
  if (uVar1 + ((iVar3 >> 7) - (iVar3 >> 0x1f)) * -400 != 0) {
    iVar2 = 0;
    if (uVar1 + ((iVar3 >> 5) - (iVar3 >> 0x1f)) * -100 == 0) goto LAB_003d3314;
    if ((uVar1 & 3) != 0) {
      iVar2 = 0;
      goto LAB_003d3314;
    }
  }
  iVar2 = 1;
LAB_003d3314:
  iVar3 = (int)((ulonglong)((longlong)DAT_003d3390 * (longlong)(int)uVar1) >> 0x20);
  iVar5 = (iVar3 >> 5) - (iVar3 >> 0x1f);
  iVar6 = (int)((ulonglong)((longlong)DAT_003d3398 * (longlong)(iVar4 * 0x99 + 2)) >> 0x20);
  iVar3 = iVar5 * DAT_003d3394;
  iVar4 = (uVar1 + iVar5 * -100) * DAT_003d339c;
  return ((int)(iVar3 + ((uint)(iVar3 >> 0x1f) >> 0x1e)) >> 2) +
         ((int)(iVar4 + ((uint)(iVar4 >> 0x1f) >> 0x1e)) >> 2) + ((iVar6 >> 1) - (iVar6 >> 0x1f)) +
         param_3 + iVar2 + 0x3a;
}

