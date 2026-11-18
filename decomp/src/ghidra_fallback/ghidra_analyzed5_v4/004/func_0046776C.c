#include "ghidra_types.h"

extern int func_002C00A8(int param_1);
extern int func_004762C4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
extern int func_0066E65C(undefined4 *param_1,undefined1 param_2);

// USA 0046776C <- EU 00467744 (Ghidra, non-matching)

void func_0046776C(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  ushort *puVar4;
  ushort uVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  
  uVar8 = 0;
  do {
    piVar2 = (int *)(param_1 + 0x108);
    if (uVar8 < 4) {
      piVar2 = piVar2 + uVar8;
    }
    if (*piVar2 != 0) {
      cVar1 = *(char *)(param_1 + 0x125);
      iVar9 = (int)*(char *)(param_1 + 0x127) + uVar8;
      if ((cVar1 < 0) && (-1 < iVar9)) {
        iVar9 = iVar9 + 1;
      }
      piVar2 = (int *)(param_1 + 0x108);
      if (uVar8 < 4) {
        piVar2 = piVar2 + uVar8;
      }
      iVar3 = *piVar2;
      *(int *)(iVar3 + 0xb0) = iVar9;
      func_004762C4(iVar3,(int)cVar1,param_3,param_4);
      if (*(char *)(param_1 + 299) == iVar9) {
        piVar2 = (int *)(param_1 + 0x108);
        if (uVar8 < 4) {
          piVar2 = piVar2 + uVar8;
        }
        iVar9 = *piVar2;
        func_0066E65C((undefined4 *)(iVar9 + 0x80),2);
        puVar4 = (ushort *)(*(int *)(iVar9 + 0x14) + 0x16);
        *puVar4 = *puVar4 & 0xffbf;
        func_002C00A8(*(int *)(iVar9 + 0x14));
        puVar4 = (ushort *)(*(int *)(iVar9 + 0x14) + 0x16);
        uVar5 = *puVar4 & 0xfffd;
      }
      else {
        piVar2 = (int *)(param_1 + 0x108);
        if (uVar8 < 4) {
          piVar2 = piVar2 + uVar8;
        }
        iVar9 = *piVar2;
        func_0066E65C((undefined4 *)(iVar9 + 0x80),0);
        if (*(char *)(iVar9 + 0xb5) != '\0') goto LAB_00467840;
        puVar4 = (ushort *)(*(int *)(iVar9 + 0x14) + 0x16);
        *puVar4 = *puVar4 | 0x40;
        func_002C00A8(*(int *)(iVar9 + 0x14));
        puVar4 = (ushort *)(*(int *)(iVar9 + 0x14) + 0x16);
        uVar5 = *puVar4 | 2;
      }
      *puVar4 = uVar5;
    }
LAB_00467840:
    uVar8 = uVar8 + 1;
    if (3 < (int)uVar8) {
      uVar8 = 0;
      do {
        piVar2 = (int *)(param_1 + 0x108);
        if (uVar8 < 4) {
          piVar2 = piVar2 + uVar8;
        }
        if (*piVar2 != 0) {
          if ((int)uVar8 < (int)(uint)*(byte *)(param_1 + 0x128)) {
            piVar2 = (int *)(param_1 + 0x108);
            if (uVar8 < 4) {
              piVar2 = piVar2 + uVar8;
            }
            puVar6 = (uint *)(*piVar2 + 0x18);
            uVar7 = *puVar6 & 0xfffffffb;
          }
          else {
            piVar2 = (int *)(param_1 + 0x108);
            if (uVar8 < 4) {
              piVar2 = piVar2 + uVar8;
            }
            puVar6 = (uint *)(*piVar2 + 0x18);
            uVar7 = *puVar6 | 4;
          }
          *puVar6 = uVar7;
        }
        uVar8 = uVar8 + 1;
      } while ((int)uVar8 < 4);
      if (4 < *(byte *)(param_1 + 0x128)) {
        *(uint *)(*(int *)(param_1 + 0x114) + 0x18) =
             *(uint *)(*(int *)(param_1 + 0x114) + 0x18) | 4;
      }
      return;
    }
  } while( true );
}

