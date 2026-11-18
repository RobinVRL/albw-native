#include "ghidra_types.h"

extern int func_0010B3EC(undefined4 *param_1,int param_2,int param_3);

// USA 00368838 <- EU 00368814 (Ghidra, non-matching)

void func_00368838(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 (*(int *)(albw_frame + 0x8))
  #define local_34 (*(int *)(albw_frame + 0xc))
  #define local_30 (*(undefined4 * *)(albw_frame + 0x10))
  #define auStack_2c ((undefined1 *)(albw_frame + 0x14))
  #define iStack_1c (*(int *)(albw_frame + 0x24))
  #define uStack_18 (*(undefined4 *)(albw_frame + 0x28))
  #define uStack_14 (*(undefined4 *)(albw_frame + 0x2c))
  #define uStack_10 (*(undefined4 *)(albw_frame + 0x30))
  local_38 = 0;
  local_34 = 0;
  local_30 = (undefined4 *)0x0;
  iStack_1c = param_1;
  uStack_18 = param_2;
  uStack_14 = param_3;
  uStack_10 = param_4;
  func_0010B3EC(&local_38,3,(int)auStack_2c);
  if (local_38 < local_34) {
    local_30[local_38] = &uStack_18;
    local_38 = local_38 + 1;
  }
  if (local_38 < local_34) {
    local_30[local_38] = &uStack_14;
    local_38 = local_38 + 1;
  }
  if (local_38 < local_34) {
    local_30[local_38] = &uStack_10;
  }
  iVar2 = *(int *)(param_1 + 0xc4);
  piVar6 = *(int **)(param_1 + 0xcc);
  piVar3 = *(int **)(param_1 + 0xe4);
  piVar8 = piVar3 + *(int *)(param_1 + 0xdc);
  piVar1 = piVar6;
  for (; piVar3 != piVar8; piVar3 = piVar3 + 1) {
    *(byte *)(*piVar3 + 0x44) = *(byte *)*local_30 | *(byte *)(*piVar3 + 0x44) & 0xfe;
    piVar7 = piVar1;
    if ((*(char *)*local_30 == '\x01') && (piVar1 != piVar6 + iVar2)) {
      piVar7 = piVar1 + 1;
      iVar5 = *piVar1;
      iVar4 = *piVar3;
      uVar9 = *(undefined4 *)(iVar5 + 0x20);
      uVar10 = *(undefined4 *)(iVar5 + 0x24);
      *(undefined4 *)(iVar4 + 0x1c) = *(undefined4 *)(iVar5 + 0x1c);
      *(undefined4 *)(iVar4 + 0x20) = uVar9;
      *(undefined4 *)(iVar4 + 0x24) = uVar10;
      *(byte *)(iVar4 + 0x44) = *(byte *)(iVar4 + 0x44) & 0xef | 0x10;
    }
    local_30 = local_30 + 1;
    piVar1 = piVar7;
  }
  return;
}

