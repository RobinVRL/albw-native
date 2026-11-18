// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_0054B9D8(void);
extern int func_0055696C(int param_1,int param_2);
extern int func_00556A9C();
extern int *DAT_0030fee8;
extern int DAT_0030feec;

// USA 0030FD44 <- EU 0030FD20 (Ghidra, non-matching)
// GLOBAL DAT_0030fee8 int *
// GLOBAL DAT_0030feec int

undefined4 func_0030FD44(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  piVar1 = DAT_0030fee8;
  iVar3 = *DAT_0030fee8;
  switch(param_4) {
  case 0:
    cVar2 = func_00556A9C(iVar3);
    if (cVar2 != '\0') {
      return 0;
    }
    break;
  case 1:
    if (*(int *)(param_1 + 0xacc) == 10) {
      return 0;
    }
    break;
  case 2:
    uVar5 = 2;
    while( true ) {
      iVar3 = func_0055696C(*piVar1,uVar5);
      if (iVar3 == 2) {
        return 0;
      }
      uVar5 = uVar5 + 1;
      if (0xb < uVar5) break;
      while (uVar5 == 5) {
        uVar5 = 6;
      }
    }
    return 1;
  case 3:
    iVar3 = func_0054B9D8();
    if (iVar3 == 100) {
      return 0;
    }
    break;
  case 4:
    uVar5 = func_0055696C(iVar3,0x2c);
    if (uVar5 < 3) {
      iVar3 = func_0054B9D8();
      iVar6 = 0;
      uVar5 = 2;
      iVar3 = (int)((ulonglong)((longlong)DAT_0030feec * (longlong)iVar3) >> 0x20);
      while( true ) {
        uVar4 = func_0055696C(*piVar1,uVar5);
        if (2 < uVar4) {
          iVar6 = iVar6 + 1;
        }
        uVar5 = uVar5 + 1;
        if (0xb < uVar5) break;
        while (uVar5 == 5) {
          uVar5 = 6;
        }
      }
      if (0 < ((iVar3 >> 2) - (iVar3 >> 0x1f)) - iVar6) {
        return 0;
      }
    }
    break;
  case 5:
    if (*(char *)(param_1 + 0xae1) != '\x01') {
      iVar3 = func_0055696C(iVar3,*(int *)(param_1 + 0xad8));
      if (iVar3 == 2) {
        return 0;
      }
      iVar3 = func_0055696C(*piVar1,*(int *)(param_1 + 0xad8));
      if (iVar3 == 1) {
        return 1;
      }
      iVar3 = func_0055696C(*piVar1,*(int *)(param_1 + 0xad8));
      if (iVar3 == 3) {
        return 2;
      }
    }
    return 3;
  case 6:
    uVar5 = 2;
    while( true ) {
      iVar3 = func_0055696C(*piVar1,uVar5);
      if (iVar3 != 3) {
        return 0;
      }
      uVar5 = uVar5 + 1;
      if (0xb < uVar5) break;
      while (uVar5 == 5) {
        uVar5 = 6;
      }
    }
    return 1;
  }
  return 1;
}

