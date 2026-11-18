#include "ghidra_types.h"

extern uint DAT_00562400;
extern uint DAT_00562404;

// USA 00562280 <- EU 00562258 (Ghidra, non-matching)
// GLOBAL DAT_00562400 uint
// GLOBAL DAT_00562404 uint

undefined4 * func_00562280(int *param_1,undefined4 *param_2,int param_3)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  char *pcVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  
  uVar7 = DAT_00562400;
  puVar3 = param_2;
  if (param_3 != 0) {
    *param_2 = 1;
    param_2[1] = uVar7;
    puVar3 = param_2 + 4;
    param_2[2] = 1;
    param_2[3] = uVar7 & 0xfffffffe;
  }
  uVar7 = DAT_00562404;
  pcVar6 = (char *)*param_1;
  uVar8 = DAT_00562404 | (int)DAT_00562404 >> 8;
  if (pcVar6[0x18] != '\0') {
    *puVar3 = 0xf;
    puVar3[1] = uVar7;
    puVar3[2] = 0xf;
    puVar3[3] = uVar8;
    puVar3[4] = 0;
    puVar3[5] = uVar8 + 1;
    puVar3[6] = 0;
    puVar3[7] = uVar8 + 2;
    return puVar3 + 8;
  }
  if (pcVar6[0x50] == '\0') {
LAB_00562364:
    uVar4 = 0;
  }
  else {
    if (pcVar6[0x50] == '\x0f') {
      if (*pcVar6 == '\0') {
LAB_00562334:
        if (((pcVar6[0x10] == '\0') || (cVar1 = pcVar6[0x11], cVar1 == '\0' || cVar1 == '\x03')) ||
           (cVar1 == '\x04' || cVar1 == '\x05')) goto LAB_00562364;
      }
      else {
        cVar1 = pcVar6[5];
        bVar9 = cVar1 == '\0';
        if (bVar9) {
          cVar1 = pcVar6[6];
        }
        if (((bVar9 && cVar1 == '\0') && (cVar1 = pcVar6[3], cVar1 != '\x04' && cVar1 != '\x05')) &&
           (cVar1 != '\b' && cVar1 != '\t')) {
          bVar9 = cVar1 != '\x0e';
          if (bVar9) {
            cVar1 = pcVar6[4];
          }
          if (((bVar9 && cVar1 != '\x04') && (cVar1 != '\x05' && cVar1 != '\b')) &&
             (cVar1 != '\t' && cVar1 != '\x0e')) goto LAB_00562334;
        }
      }
    }
    uVar4 = 0xf;
  }
  *puVar3 = uVar4;
  puVar3[1] = uVar7;
  uVar4 = 0;
  if (*(char *)(*param_1 + 0x50) != '\0') {
    uVar4 = 0xf;
  }
  puVar3[2] = uVar4;
  uVar5 = 0;
  puVar3[3] = uVar8;
  iVar2 = *param_1;
  uVar7 = 0;
  if (*(char *)(iVar2 + 0x54) != '\0') {
    if (*(char *)(iVar2 + 0x55) == '\0') {
      if (*(char *)(iVar2 + 0x50) != '\0') {
        uVar5 = 2;
      }
    }
    else {
      uVar5 = 2;
      uVar7 = uVar5;
    }
  }
  if (*(char *)(iVar2 + 0x38) != '\0') {
    if (*(char *)(iVar2 + 0x39) == '\0') {
      if (*(char *)(iVar2 + 0x50) != '\0') {
        uVar5 = uVar5 | 1;
      }
    }
    else {
      uVar5 = uVar5 | 1;
      uVar7 = uVar7 | 1;
    }
  }
  puVar3[4] = uVar5;
  puVar3[5] = uVar8 + 1;
  puVar3[7] = uVar8 + 2;
  puVar3[6] = uVar7;
  return puVar3 + 8;
}

