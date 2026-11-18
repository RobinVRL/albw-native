#include "ghidra_types.h"

extern int DAT_0042e964;
extern undefined4 DAT_0042e968;
extern char *DAT_0042e96c;

// USA 0042E8C8 <- EU 0042E8A8 (Ghidra, non-matching)
// GLOBAL DAT_0042e964 int
// GLOBAL DAT_0042e968 undefined4
// GLOBAL DAT_0042e96c char *

int func_0042E8C8(int param_1,undefined4 *param_2,undefined4 param_3)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  uint uVar6;
  ushort *puVar7;
  
  uVar3 = DAT_0042e968;
  iVar2 = DAT_0042e964;
  *(undefined1 *)(DAT_0042e964 + 0x6d) = 0;
  *(undefined1 *)(iVar2 + 0x6c) = 0;
  *(undefined1 *)(iVar2 + 0x6f) = 0;
  *(undefined4 *)(iVar2 + 0x60) = uVar3;
  *(undefined4 *)(iVar2 + 0x68) = param_3;
  pcVar4 = DAT_0042e96c;
  puVar7 = (ushort *)(*(int *)(param_1 + 0x48c) + 2);
  uVar1 = *puVar7;
  do {
    if (uVar1 == 0) {
      return (int)*(char *)(iVar2 + 0x6d);
    }
    iVar5 = *(int *)(*(int *)(param_1 + 0x5c) + 8) + (uint)*puVar7 * 0x10;
    *(int *)(param_1 + 0x70) = iVar5;
    uVar6 = (uint)*(ushort *)(iVar5 + 0xe);
    if ((*(uint *)(iVar2 + 0x68) & 1 << (uVar6 & 0x1f)) != 0) {
      uVar6 = (uVar6 & 0xb000) >> 0xc;
      if (*pcVar4 == '\0') {
        if (uVar6 != 8) goto LAB_0042e93c;
      }
      else if (uVar6 != 9) {
LAB_0042e93c:
        (**(code **)*param_2)(param_2,param_1);
      }
    }
    puVar7 = puVar7 + 1;
    uVar1 = *puVar7;
  } while( true );
}

