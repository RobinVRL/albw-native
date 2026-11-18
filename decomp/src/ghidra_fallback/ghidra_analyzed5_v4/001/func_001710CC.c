#include "ghidra_types.h"

extern int *DAT_001712a8;
extern int DAT_001712ac;
extern int DAT_001712b0;

// USA 001710CC <- EU 001710CC (Ghidra, non-matching)
// GLOBAL DAT_001712a8 int *
// GLOBAL DAT_001712ac int
// GLOBAL DAT_001712b0 int

undefined4 func_001710CC(int *param_1,int param_2)

{
  ushort uVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  ushort *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  iVar3 = param_1[0x27];
  *(undefined1 *)(param_1 + 0x27) = 0;
  iVar7 = param_1[0x23];
  if ((*(uint *)(iVar7 + 0x164) & 0x2000000) != 0) {
    iVar8 = *DAT_001712a8;
    uVar4 = *(uint *)(iVar7 + 0x13c);
    iVar9 = iVar8 + (int)(short)(ushort)*(byte *)(DAT_001712b0 + iVar8) * (int)(short)DAT_001712ac *
                    4;
    if (*(char *)(iVar9 + 0x8c) == '\0') {
      iVar9 = iVar8 + (1 - (uint)*(byte *)(DAT_001712b0 + iVar8)) * DAT_001712ac * 4;
    }
    if (uVar4 < *(uint *)(iVar9 + 0x90)) {
      iVar8 = *(int *)(iVar9 + 0x98) + uVar4 * 0x70;
    }
    else {
      iVar8 = *(int *)(iVar9 + 0x98);
    }
    if (*(char *)(iVar8 + 0x6c) != '\0') {
      if (uVar4 < *(uint *)(iVar9 + 0x90)) {
        iVar8 = *(int *)(iVar9 + 0x98) + uVar4 * 0x70;
      }
      else {
        iVar8 = *(int *)(iVar9 + 0x98);
      }
      pcVar5 = *(char **)(iVar8 + 0x18);
      if ((uint)param_1[0x28] < *(uint *)(iVar8 + 0x10)) {
        pcVar5 = pcVar5 + param_1[0x28];
      }
      if (*pcVar5 != '\0') {
        bVar2 = false;
        goto LAB_00171198;
      }
    }
  }
  bVar2 = true;
LAB_00171198:
  puVar6 = (ushort *)(**(int **)(iVar7 + 0x20) + (uint)*(ushort *)param_1[0x24] * 0x154);
  if ((bVar2) &&
     (uVar1 = ((ushort *)param_1[0x24])[2],
     ((uint)*(byte *)(*(int *)(iVar7 + 0x28) + (uint)(uVar1 >> 3)) & 1 << (uVar1 & 7)) != 0)) {
    *(undefined1 *)(param_1 + 0x27) = 1;
    uVar1 = puVar6[0x10];
    if ((int)(char)param_1[0x21] != (int)(short)uVar1) {
      *(char *)(param_1 + 0x21) = (char)uVar1;
      param_1[0x1f] =
           (int)(short)uVar1 & 0x1fU | (uint)*(byte *)((int)param_1 + 0x85) << 5 |
           (uint)*(byte *)((int)param_1 + 0x86) << 0xd |
           (uint)*(byte *)((int)param_1 + 0x87) << 0x13 |
           (uint)((char)param_1[0x22] != '\0') << 0x1b |
           (*(byte *)((int)param_1 + 0x89) & 3) << 0x1c;
      param_1[0x1e] = param_1[0x20];
    }
  }
  if ((*puVar6 & 0x80) != 0) {
    iVar7 = *(int *)(puVar6 + 0xe);
    *(uint *)(puVar6 + 0xe) = iVar7 + 1U;
    if (1 < iVar7 + 1U) {
      puVar6[0xe] = 0;
      puVar6[0xf] = 0;
    }
    *puVar6 = *puVar6 & 0xff7f;
  }
  if (((param_2 != 0) || (((char)iVar3 == '\0' && ((char)param_1[0x27] != '\0')))) &&
     ((*puVar6 & 1) != 0)) {
    *puVar6 = *puVar6 | 0x100;
  }
                    /* WARNING: Could not recover jumptable at 0x001712a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  return (**(code **)(*param_1 + 0x14))(param_1);
}

