#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int func_00120B44(int param_1);
extern int func_0012E708(int param_1,int param_2);
extern int *DAT_0029c38c;
extern int DAT_0029c390;
extern int DAT_0029c394;
extern undefined4 *DAT_0029c398;
extern int *DAT_0029c39c;

// USA 0029C0B8 <- EU 0029C094 (Ghidra, non-matching)
// GLOBAL DAT_0029c38c int *
// GLOBAL DAT_0029c390 int
// GLOBAL DAT_0029c394 int
// GLOBAL DAT_0029c398 undefined4 *
// GLOBAL DAT_0029c39c int *

undefined4 func_0029C0B8(int *param_1)

{
  ushort uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  char *pcVar7;
  undefined4 uVar8;
  int iVar9;
  uint *puVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  undefined4 uVar15;
  bool bVar16;
  uint uVar17;
  _Alignas(8) unsigned char albw_frame[0x80];
  #define local_7c (*(uint *)(albw_frame + 0x4))
  #define aiStack_78 ((int *)(albw_frame + 0x8))
  iVar11 = DAT_0029c394;
  iVar9 = 5;
  iVar2 = *DAT_0029c38c;
  iVar4 = *(int *)(*param_1 + 0x13c) * DAT_0029c390;
  do {
    uVar1 = func_00120B44((uint)*(ushort *)(iVar11 + iVar9 * 0xc + 8));
    iVar12 = iVar9;
    if ((*(uint *)(iVar2 + iVar4 * 4 + 0xa0c + (uint)(uVar1 >> 5) * 4) & 1 << (uVar1 & 0x1f)) != 0)
    break;
    iVar9 = iVar9 + -1;
    iVar12 = 0;
  } while (0 < iVar9);
  iVar2 = 0;
  puVar10 = (uint *)*DAT_0029c398;
  iVar11 = iVar11 + iVar12 * 0xc;
  local_7c = 0;
  if (0 < *(int *)(iVar11 + 4)) {
    do {
      if ((int)local_7c < 0x14) {
        uVar6 = local_7c + 1;
        if (0x13 < (int)local_7c) {
          local_7c = local_7c - 0x14;
        }
        aiStack_78[local_7c] = iVar2;
        local_7c = uVar6;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(iVar11 + 4));
  }
  do {
    uVar6 = func_00111A64(puVar10);
    iVar2 = (int)((ulonglong)local_7c * (ulonglong)uVar6 >> 0x20);
    if (((0 < (int)local_7c) && (-1 < (longlong)((ulonglong)local_7c * (ulonglong)uVar6))) &&
       (iVar2 < (int)local_7c)) {
      iVar4 = iVar2;
      if (iVar2 < (int)(local_7c - 1)) {
        do {
          iVar13 = iVar4 + 1;
          iVar9 = iVar4;
          if (0x13 < iVar4) {
            iVar9 = iVar4 + -0x14;
          }
          if (0x13 < iVar13) {
            iVar13 = iVar4 + -0x13;
          }
          iVar4 = iVar4 + 1;
          aiStack_78[iVar9] = aiStack_78[iVar13];
        } while (iVar4 < (int)(local_7c - 1));
      }
      local_7c = local_7c - 1;
    }
    iVar4 = DAT_0029c394;
    puVar5 = (uint *)(*(int *)(DAT_0029c394 + iVar12 * 0xc) + iVar2 * 0xc);
    uVar14 = *puVar5;
    uVar17 = puVar5[2];
    uVar6 = 0;
    if (0 < param_1[0xd]) {
      do {
        pcVar7 = (char *)param_1[10];
        if (uVar6 < (uint)param_1[0xd]) {
          iVar2 = param_1[0xc] + uVar6;
          if (param_1[0xb] <= iVar2) {
            iVar2 = iVar2 - param_1[0xb];
          }
          pcVar7 = (char *)param_1[10] + iVar2 * 0xc;
        }
        bVar16 = *pcVar7 == (char)*puVar5;
        if (bVar16) {
          pcVar7 = *(char **)(pcVar7 + 4);
        }
        if (bVar16 && pcVar7 == (char *)puVar5[1]) {
          uVar14 = uVar14 | 0xff;
          break;
        }
        uVar6 = uVar6 + 1;
      } while ((int)uVar6 < param_1[0xd]);
    }
    if ((char)uVar14 != -1) {
      iVar11 = *param_1;
      *(char **)(iVar11 + 0xe4) = (char *)puVar5[1];
      *(uint *)(iVar11 + 0xe0) = uVar14;
      *(uint *)(iVar11 + 0xe8) = uVar17;
      goto LAB_0029c2b4;
    }
  } while (local_7c != 0);
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  do {
    uVar14 = *(uint *)(iVar11 + 4);
    uVar6 = func_00111A64(puVar10);
    pcVar7 = (char *)(*(int *)(iVar4 + iVar12 * 0xc) +
                     (int)((ulonglong)uVar14 * (ulonglong)uVar6 >> 0x20) * 0xc);
    if (*(char *)(*param_1 + 0xe0) != *pcVar7) break;
  } while (*(int *)(*param_1 + 0xe4) == *(int *)(pcVar7 + 4));
  iVar11 = *param_1;
  uVar8 = *(undefined4 *)pcVar7;
  uVar15 = *(undefined4 *)(pcVar7 + 4);
  *(undefined4 *)(iVar11 + 0xe8) = *(undefined4 *)(pcVar7 + 8);
  *(undefined4 *)(iVar11 + 0xe0) = uVar8;
  *(undefined4 *)(iVar11 + 0xe4) = uVar15;
LAB_0029c2b4:
  iVar11 = *param_1;
  iVar4 = param_1[0xb];
  iVar2 = param_1[0xd];
  if (iVar2 < iVar4) {
    param_1[0xd] = iVar2 + 1;
    iVar2 = iVar2 + param_1[0xc];
    if (iVar4 <= iVar2) {
      iVar2 = iVar2 - iVar4;
    }
    uVar8 = *(undefined4 *)(iVar11 + 0xe0);
    uVar15 = *(undefined4 *)(iVar11 + 0xe4);
    puVar3 = (undefined4 *)(param_1[10] + iVar2 * 0xc);
    puVar3[2] = *(undefined4 *)(iVar11 + 0xe8);
    *puVar3 = uVar8;
    puVar3[1] = uVar15;
  }
  return func_0012E708(*DAT_0029c39c,1);
}

