#include "ghidra_types.h"

extern uint DAT_001e5a48;
extern undefined4 *DAT_001e5a4c;

// USA 001E5884 <- EU 001E5884 (Ghidra, non-matching)
// GLOBAL DAT_001e5a48 uint
// GLOBAL DAT_001e5a4c undefined4 *

void func_001E5884(uint *param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(undefined4 * *)(albw_frame + 0x0))
  #define local_1c (*(uint *)(albw_frame + 0x4))
  puVar2 = (undefined4 *)param_1[1];
  if (param_1[2] < *param_1) {
    puVar2 = puVar2 + param_1[2];
  }
  *puVar2 = param_2;
  piVar3 = (int *)param_1[2];
  piVar6 = (int *)*param_1;
  piVar4 = piVar3;
  if (piVar3 < piVar6) {
    piVar4 = (int *)(param_1[1] + (int)piVar3 * 4);
  }
  if (piVar6 <= piVar3) {
    piVar4 = (int *)param_1[1];
  }
  iVar7 = 1;
  iVar5 = (int)((param_1[1] + (int)piVar6 * 4) - (int)piVar4) >> 2;
  if (1 < iVar5 + 1) {
    do {
      if (*piVar4 == 0) break;
      iVar7 = iVar7 + 1;
      piVar4 = piVar4 + 1;
      param_1[2] = param_1[2] + 1;
    } while (iVar7 < iVar5 + 1);
  }
  uVar1 = DAT_001e5a48;
  if (piVar4 < (int *)param_1[3]) {
    piVar4 = (int *)param_1[3];
  }
  param_1[3] = (uint)piVar4;
  if (param_1[4] == uVar1) {
    param_1[4] = 1;
    *(undefined1 *)(param_1 + 5) = 1;
  }
  else {
    param_1[4] = param_1[4] + 1;
  }
  if ((char)param_1[5] != '\0') {
    local_1c = param_1[4];
    local_20 = DAT_001e5a4c;
    piVar3 = (int *)param_1[1];
    piVar6 = (int *)param_1[3];
    piVar4 = piVar6;
    if (piVar3 <= piVar6) {
      piVar4 = piVar3;
    }
    if (piVar3 < piVar6) {
      do {
        if (((*piVar4 != 0) && (*(char *)(*piVar4 + 0x2d7) == '\0')) &&
           (iVar5 = (*(code *)*local_20)(&local_20), iVar5 != 0)) break;
        piVar4 = piVar4 + 1;
      } while ((int *)param_1[3] != piVar4);
    }
    if (piVar4 != (int *)param_1[3]) {
      while( true ) {
        local_1c = param_1[4] + 1;
        param_1[4] = local_1c;
        if (local_1c == uVar1) break;
        piVar3 = (int *)param_1[3];
        piVar6 = (int *)param_1[1];
        piVar4 = piVar3;
        if ((piVar6 <= piVar3) && (piVar4 = piVar6, piVar3 != piVar6)) {
          do {
            if ((*piVar4 != 0) &&
               ((*(char *)(*piVar4 + 0x2d7) == '\0' &&
                (iVar5 = (*(code *)*local_20)(&local_20), iVar5 != 0)))) break;
            piVar4 = piVar4 + 1;
          } while ((int *)param_1[3] != piVar4);
        }
        if (piVar4 == (int *)param_1[3]) {
          return;
        }
      }
      param_1[4] = 1;
    }
  }
  return;
}

