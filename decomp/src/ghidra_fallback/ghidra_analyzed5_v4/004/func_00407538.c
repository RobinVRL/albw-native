#include "ghidra_types.h"


// USA 00407538 <- EU 00407518 (Ghidra, non-matching)

void func_00407538(undefined4 *param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define local_60 ((int *)(albw_frame + 0x0))
  #define local_3c (*(uint *)(albw_frame + 0x24))
  #define local_38 (*(uint *)(albw_frame + 0x28))
  #define local_34 (*(int *)(albw_frame + 0x2c))
  #define local_30 (*(undefined4 * *)(albw_frame + 0x30))
  #define local_2c (*(int * *)(albw_frame + 0x34))
  #define local_28 (*(undefined4 * *)(albw_frame + 0x38))
  uVar7 = 0;
  iVar6 = param_3[1];
  local_38 = 0;
  if (*(ushort *)(iVar6 + 0xe) != 0) {
    do {
      local_34 = *(int *)(*(int *)(iVar6 + 0x10) + iVar6 + uVar7 * 4) + iVar6;
      if (*(char *)(local_34 + 0x1d) == '\0') {
        iVar2 = 0;
        while (*(char *)(local_34 + iVar2) == *(char *)((int)param_2 + iVar2 + 0x80)) {
          if ((*(char *)(local_34 + iVar2) == '\0') || (iVar2 = iVar2 + 1, 0x1b < iVar2)) {
            if (local_34 != 0) {
              local_38 = 1;
            }
            goto LAB_004075b4;
          }
        }
      }
      uVar7 = uVar7 + 1 & 0xffff;
    } while (uVar7 < *(ushort *)(iVar6 + 0xe));
  }
  local_34 = 0;
LAB_004075b4:
  local_30 = param_1;
  local_2c = param_2;
  local_28 = param_3;
  local_3c = (**(code **)(*param_2 + 0x24))(param_2);
  uVar7 = 0;
  if (local_3c != 0) {
    do {
      iVar2 = (**(code **)(*local_2c + 0x28))(local_2c,uVar7);
      uVar8 = 0;
      if (*(ushort *)(iVar6 + 0xe) != 0) {
        do {
          iVar1 = *(int *)(*(int *)(iVar6 + 0x10) + iVar6 + uVar8 * 4) + iVar6;
          if (*(char *)(iVar1 + 0x1d) == '\x01') {
            iVar3 = 0;
            while (*(char *)(iVar1 + iVar3) == *(char *)(iVar2 + 0x81 + iVar3)) {
              if ((*(char *)(iVar1 + iVar3) == '\0') || (iVar3 = iVar3 + 1, 0x1b < iVar3))
              goto LAB_00407680;
            }
          }
          uVar8 = uVar8 + 1 & 0xffff;
        } while (uVar8 < *(ushort *)(iVar6 + 0xe));
      }
      iVar1 = 0;
LAB_00407680:
      local_60[uVar7] = iVar1;
      if (iVar1 != 0) {
        local_38 = local_38 + 1 & 0xffff;
      }
      uVar7 = uVar7 + 1 & 0xff;
    } while (uVar7 < local_3c);
  }
  if (local_38 != 0) {
    uVar4 = local_28[1];
    uVar5 = local_28[2];
    uVar9 = local_28[3];
    *local_30 = *local_28;
    local_30[1] = uVar4;
    local_30[2] = uVar5;
    local_30[3] = uVar9;
    local_30[4] = local_34;
    *(char *)((int)local_30 + 0x3a) = (char)local_3c;
    if (local_3c != 0) {
      uVar7 = local_3c & 1;
      if (uVar7 == 1) {
        local_30[5] = local_60[0];
      }
      uVar8 = (uint)(uVar7 == 1);
      for (; (int)uVar7 < (int)local_3c; uVar7 = uVar7 + 2) {
        local_30[uVar8 + 5] = local_60[uVar8];
        local_30[uVar8 + 6] = local_60[uVar8 + 1];
        uVar8 = uVar8 + 2;
      }
    }
    *(short *)(local_30 + 0xe) = (short)local_38;
  }
  return;
}

