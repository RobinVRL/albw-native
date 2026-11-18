#include "ghidra_types.h"

extern int func_0010AC24(undefined4 param_1,undefined4 param_2);
extern int func_003C7BAC(int param_1);
extern int func_003C7C84(uint param_1,uint param_2,undefined1 param_3);
extern int *DAT_0025c618;
extern int DAT_0025c61c;
extern int DAT_0025c620;

// USA 0025C4BC <- EU 0025C4E4 (Ghidra, non-matching)
// GLOBAL DAT_0025c618 int *
// GLOBAL DAT_0025c61c int
// GLOBAL DAT_0025c620 int

uint func_0025C4BC(int param_1)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  undefined4 uVar4;
  
  piVar2 = DAT_0025c618;
  uVar3 = func_003C7BAC(*DAT_0025c618);
  if ((int)uVar3 < 0) {
    uVar1 = (uVar3 & 0x3fc00) >> 10;
    if ((((uVar1 == 0x11) && (0x153 < (uVar3 & 0x3ff))) && ((uVar3 & 0x3ff) < 0x168)) ||
       ((((uVar1 == 0x11 && (0x167 < (uVar3 & 0x3ff))) && ((int)(uVar3 & 0x3ff) <= DAT_0025c61c)) ||
        (((uVar1 == 0x11 && (DAT_0025c620 <= (int)(uVar3 & 0x3ff))) && ((uVar3 & 0x3ff) < 400))))))
    {
      uVar3 = func_003C7C84(4,1,1);
      if (-1 < (int)uVar3) {
        uVar3 = func_003C7BAC(*piVar2);
        uVar3 = uVar3 & 0x80000000;
        if ((int)uVar3 < 0) {
          return uVar3;
        }
        goto LAB_0025c610;
      }
    }
    else {
      if (((uVar1 == 0x11) && (0xe5 < (uVar3 & 0x3ff))) && ((uVar3 & 0x3ff) < 0x154)) {
        uVar4 = 0x25c5c0;
      }
      else {
        uVar4 = 0x25c5e0;
      }
      if ((int)uVar3 < 0) {
        func_0010AC24(uVar3,uVar4);
      }
    }
    if ((int)uVar3 < 0) {
      uVar4 = func_0010AC24(uVar3,0x25c5f0);
      return uVar4;
    }
  }
  else {
LAB_0025c610:
    *(undefined4 *)(param_1 + 0xb0) = 3;
  }
  return uVar3;
}

