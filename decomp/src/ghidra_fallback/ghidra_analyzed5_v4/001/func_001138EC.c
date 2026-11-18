#include "ghidra_types.h"


// USA 001138EC <- EU 001138EC (Ghidra, non-matching)

void func_001138EC(undefined4 *param_1,int param_2,float fparam_0)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  
  if (*(char *)((int)param_1 + param_2 + 0x154) == '\0') {
    return;
  }
  *param_1 = 0;
  if (*(char *)(param_1 + param_2 * 5 + 0x1a8) != '\0') {
    *(undefined1 *)(param_1 + param_2 * 5 + 0x1a8) = 0;
    *(undefined1 *)((int)param_1 + param_2 + 0x154) = 0;
    return;
  }
  uVar5 = 0;
  do {
    if (param_1[uVar5 * 0x1c + 0x58] != 0) {
      uVar4 = 0;
      do {
        if (param_1[uVar5 * 0x1c + uVar4 + 0x68] == param_2) {
          param_1[uVar5 * 0x1c + uVar4 + 0x68] = 0xffffffff;
          *(undefined1 *)((int)param_1 + param_2 + 0x154) = 0;
          piVar3 = param_1 + uVar5 * 0x1c + 0x58;
          if (*piVar3 == 0) {
            return;
          }
          uVar4 = 0;
          while( true ) {
            piVar2 = piVar3 + uVar4;
            piVar1 = piVar2 + 0x10;
            if (*piVar1 == -1) {
              piVar2 = (int *)piVar2[0x11];
            }
            if (*piVar1 != -1 || piVar2 != (int *)0xffffffff) break;
            uVar4 = uVar4 + 2;
            if (0xb < uVar4) {
              *piVar3 = 0;
              param_1[uVar5 * 0x1c + 0x5c] = 0;
              param_1[uVar5 * 0x1c + 0x5d] = 0;
              param_1[uVar5 * 0x1c + 0x5e] = 0;
              param_1[uVar5 * 0x1c + 0x5f] = 0;
              param_1[uVar5 * 0x1c + 0x60] = 0;
              param_1[uVar5 * 0x1c + 0x61] = 0;
              param_1[uVar5 * 0x1c + 0x62] = 0;
              param_1[uVar5 * 0x1c + 99] = 0;
              param_1[uVar5 * 0x1c + 100] = 0;
              param_1[uVar5 * 0x1c + 0x65] = 0;
              param_1[uVar5 * 0x1c + 0x66] = 0;
              param_1[uVar5 * 0x1c + 0x67] = 0;
              return;
            }
          }
          return;
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < 0xc);
    }
    uVar5 = uVar5 + 1;
  } while (uVar5 < 0xc);
  return;
}

