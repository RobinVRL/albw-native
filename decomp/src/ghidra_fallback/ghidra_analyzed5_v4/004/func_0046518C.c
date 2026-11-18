#include "ghidra_types.h"


// USA 0046518C <- EU 00465164 (Ghidra, non-matching)

undefined4 func_0046518C(uint param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  uint in_r3;
  bool bVar8;
  
  if (*(byte *)(param_1 + 0x128) < 5) {
LAB_004651d4:
    uVar3 = 0;
    do {
      piVar4 = (int *)(param_1 + 0x108);
      if (uVar3 < 4) {
        piVar4 = piVar4 + uVar3;
      }
      if (*piVar4 != 0) {
        puVar5 = (uint *)(param_1 + 0x108);
        if (uVar3 < 4) {
          puVar5 = puVar5 + uVar3;
        }
        uVar6 = *puVar5;
        bVar8 = *(char *)(uVar6 + 0xd) == '\0';
        if (bVar8) {
          uVar6 = (uint)*(byte *)(uVar6 + 0xe);
        }
        if (!bVar8 || uVar6 != 0) {
          puVar5 = (uint *)(param_1 + 0x108);
          if (uVar3 < 4) {
            puVar5 = puVar5 + uVar3;
          }
          uVar6 = *puVar5;
          bVar8 = *(char *)(uVar6 + 0xd) == '\x03';
          if (bVar8) {
            uVar6 = (uint)*(byte *)(uVar6 + 0xe);
          }
          if (!bVar8 || uVar6 != 3) {
            return 0;
          }
          piVar4 = (int *)(param_1 + 0x108);
          if (uVar3 < 4) {
            piVar4 = piVar4 + uVar3;
          }
          *(undefined1 *)(*piVar4 + 0xe) = 0;
          return 0;
        }
      }
      uVar3 = uVar3 + 1;
    } while ((int)uVar3 < 4);
    uVar6 = *(uint *)(param_1 + 0x148);
    uVar3 = 0;
    while( true ) {
      if (uVar3 < uVar6) {
        uVar7 = *(uint *)(*(int *)(param_1 + 0x150) + uVar3 * 4);
      }
      else {
        uVar7 = 0;
      }
      bVar8 = *(char *)(uVar7 + 0xd) == '\0';
      if (bVar8) {
        uVar7 = (uint)*(byte *)(uVar7 + 0xe);
      }
      if (!bVar8 || uVar7 != 0) break;
      uVar3 = uVar3 + 1;
      if (0x20 < (int)uVar3) {
        return 1;
      }
    }
    if (uVar3 < uVar6) {
      uVar7 = *(uint *)(*(int *)(param_1 + 0x150) + uVar3 * 4);
    }
    else {
      uVar7 = 0;
    }
    bVar8 = *(char *)(uVar7 + 0xd) == '\x03';
    if (bVar8) {
      uVar7 = (uint)*(byte *)(uVar7 + 0xe);
    }
    if (bVar8 && uVar7 == 3) {
      if (uVar3 < uVar6) {
        iVar2 = *(int *)(*(int *)(param_1 + 0x150) + uVar3 * 4);
      }
      else {
        iVar2 = 0;
      }
      *(undefined1 *)(iVar2 + 0xe) = 0;
    }
  }
  else {
    iVar2 = *(int *)(param_1 + 0x11c);
    cVar1 = *(char *)(iVar2 + 0xd);
    if (cVar1 == '\0') {
      in_r3 = (uint)*(byte *)(iVar2 + 0xe);
    }
    if (cVar1 == '\0' && in_r3 == 0) {
      iVar2 = *(int *)(param_1 + 0x120);
      cVar1 = *(char *)(iVar2 + 0xd);
      if (cVar1 == '\0') {
        in_r3 = (uint)*(byte *)(iVar2 + 0xe);
      }
      if (cVar1 == '\0' && in_r3 == 0) goto LAB_004651d4;
      if (cVar1 == '\x03') {
        param_1 = (uint)*(byte *)(iVar2 + 0xe);
      }
      if (cVar1 != '\x03' || param_1 != 3) {
        return 0;
      }
    }
    else {
      if (cVar1 == '\x03') {
        param_1 = (uint)*(byte *)(iVar2 + 0xe);
      }
      if (cVar1 != '\x03' || param_1 != 3) {
        return 0;
      }
    }
    *(undefined1 *)(iVar2 + 0xe) = 0;
  }
  return 0;
}

