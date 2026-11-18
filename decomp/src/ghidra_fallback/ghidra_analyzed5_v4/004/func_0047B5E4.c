#include "ghidra_types.h"

extern int func_0010B3EC(undefined4 *param_1,int param_2,int param_3);
extern int func_0045FFD4(int param_1,int *param_2,int param_3);
extern int *DAT_0047b850;

// USA 0047B5E4 <- EU 0047B5BC (Ghidra, non-matching)
// GLOBAL DAT_0047b850 int *

void func_0047B5E4(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  bool bVar11;
  _Alignas(8) unsigned char albw_frame[0xd0];
  #define local_c8 (*(int *)(albw_frame + 0x8))
  #define local_c4 (*(int *)(albw_frame + 0xc))
  #define local_c0 (*(int *)(albw_frame + 0x10))
  #define local_bc (*(int * *)(albw_frame + 0x14))
  #define local_b8 (*(int * *)(albw_frame + 0x18))
  #define local_b4 ((int *)(albw_frame + 0x1c))
  #define uStack_68 (*(undefined4 *)(albw_frame + 0x68))
  #define auStack_64 ((undefined1 *)(albw_frame + 0x6c))
  local_bc = local_b4;
  iVar8 = 0;
  iVar10 = 0x13;
  local_c8 = 0;
  local_c4 = 0;
  local_c0 = 0;
  do {
    iVar10 = iVar10 + -1;
    local_bc[iVar8] = (int)(local_bc + iVar8 + 1);
    iVar8 = iVar8 + 1;
  } while (iVar10 != 0);
  uStack_68 = 0;
  local_b8 = local_bc;
  func_0010B3EC(&local_c8,0x14,(int)auStack_64);
  iVar10 = 1;
  iVar8 = 1;
  uVar1 = (5 - (uint)*(byte *)(*(int *)(param_1 + 0x208) + 0x78)) * 0x1000000 >> 0x16;
  uVar3 = 0;
  if (uVar1 != 0) {
    do {
      piVar5 = local_bc;
      piVar4 = (int *)(param_1 + 0x168);
      if (uVar3 < 0x14) {
        piVar4 = piVar4 + uVar3;
      }
      if (*(char *)(*piVar4 + 0xe1) != '\0') {
        piVar4 = (int *)(param_1 + 0x168);
        if (uVar3 < 0x14) {
          piVar4 = piVar4 + uVar3;
        }
        if (local_c8 < local_c4) {
          if (local_bc != (int *)0x0) {
            piVar9 = (int *)*local_bc;
            *local_bc = (int)*(char *)(*piVar4 + 0xe0);
            local_bc = piVar9;
          }
          if (local_c8 < local_c4) {
            *(int **)(local_c0 + local_c8 * 4) = piVar5;
            local_c8 = local_c8 + 1;
          }
        }
        piVar5 = (int *)(param_1 + 0x168);
        if (uVar3 < 0x14) {
          piVar5 = piVar5 + uVar3;
        }
        if (*(char *)(*piVar5 + 0xe0) == *(char *)(*(int *)(param_1 + 500) + 0xe4)) {
          iVar8 = 0;
        }
        piVar5 = (int *)(param_1 + 0x168);
        if (uVar3 < 0x14) {
          piVar5 = piVar5 + uVar3;
        }
        if (*(char *)(*piVar5 + 0xe0) == *(char *)(*(int *)(param_1 + 0x1f8) + 0xe4)) {
          iVar10 = 0;
        }
      }
      uVar3 = uVar3 + 1;
    } while ((int)uVar3 < (int)uVar1);
    if (iVar8 == 0) goto LAB_0047b77c;
  }
  piVar5 = local_bc;
  iVar6 = (int)*(char *)(*(int *)(param_1 + 500) + 0xe4);
  bVar11 = SCARRY4(iVar6,1);
  iVar2 = iVar6 + 1;
  iVar7 = *(int *)(param_1 + 500);
  if (iVar6 != -1) {
    bVar11 = SBORROW4(local_c4,local_c8);
    iVar2 = local_c4 - local_c8;
    iVar7 = local_c8;
    iVar8 = local_c4;
  }
  if ((iVar6 != -1 && iVar8 != iVar7) && iVar2 < 0 == bVar11) {
    if (local_bc != (int *)0x0) {
      piVar4 = (int *)*local_bc;
      *local_bc = iVar6;
      local_bc = piVar4;
    }
    if (local_c8 < local_c4) {
      *(int **)(local_c0 + local_c8 * 4) = piVar5;
      local_c8 = local_c8 + 1;
    }
  }
LAB_0047b77c:
  piVar5 = local_bc;
  if (iVar10 != 0) {
    iVar7 = (int)*(char *)(*(int *)(param_1 + 0x1f8) + 0xe4);
    bVar11 = SCARRY4(iVar7,1);
    iVar8 = iVar7 + 1;
    iVar2 = *(int *)(param_1 + 0x1f8);
    if (iVar7 != -1) {
      bVar11 = SBORROW4(local_c4,local_c8);
      iVar8 = local_c4 - local_c8;
      iVar2 = local_c8;
      iVar10 = local_c4;
    }
    if ((iVar7 != -1 && iVar10 != iVar2) && iVar8 < 0 == bVar11) {
      if (local_bc != (int *)0x0) {
        piVar4 = (int *)*local_bc;
        *local_bc = iVar7;
        local_bc = piVar4;
      }
      if (local_c8 < local_c4) {
        *(int **)(local_c0 + local_c8 * 4) = piVar5;
        local_c8 = local_c8 + 1;
      }
    }
  }
  if (*(int *)(*DAT_0047b850 + 0xe8) != 0) {
    func_0045FFD4(*(int *)(*DAT_0047b850 + 0xe8),&local_c8,
                  (uint)(2 < (byte)(5U - *(char *)(*(int *)(param_1 + 0x208) + 0x78))));
  }
  iVar8 = 0;
  if (0 < local_c8) {
    do {
      piVar5 = *(int **)(local_c0 + iVar8 * 4);
      iVar8 = iVar8 + 1;
      *piVar5 = (int)local_bc;
      local_bc = piVar5;
    } while (iVar8 < local_c8);
  }
  *(undefined1 *)(param_1 + 0x310) = 1;
  return;
}

