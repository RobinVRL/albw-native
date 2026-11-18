#include "ghidra_types.h"

extern int func_001150CC(undefined4 *param_1,undefined4 *param_2,undefined4 param_3);
extern int func_003CC1E4(undefined4 *param_1,uint param_2);
extern int func_003CC230(uint *param_1,undefined4 *param_2,int param_3,uint param_4);
extern uint DAT_00170544;
extern undefined4 DAT_00170548;
extern uint DAT_0017054c;
extern uint DAT_00170550;
extern uint DAT_00170554;

// USA 00170378 <- EU 00170378 (Ghidra, non-matching)
// GLOBAL DAT_00170544 uint
// GLOBAL DAT_00170548 undefined4
// GLOBAL DAT_0017054c uint
// GLOBAL DAT_00170550 uint
// GLOBAL DAT_00170554 uint

void func_00170378(int param_1,int *param_2,int *param_3,undefined4 *param_4)

{
  undefined2 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  uint *puVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  int in_r12;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(undefined4 * *)(albw_frame + 0x8))
  iVar9 = *(int *)(param_1 + 0x98);
  piVar8 = *(int **)(**(int **)(param_1 + 0x94) + 8);
  bVar11 = *param_3 == *piVar8;
  if (bVar11) {
    in_r12 = (int)(short)param_3[1];
  }
  bVar12 = in_r12 == (short)piVar8[8];
  bVar13 = bVar11 && bVar12;
  if (bVar11 && bVar12) {
    bVar13 = *(short *)((int)param_3 + 6) == *(short *)((int)piVar8 + 0x22);
  }
  if (!bVar13) {
    if (*param_3 == *piVar8) {
      if ((*(short *)((int)piVar8 + 0x22) == -1) == (*(short *)((int)param_3 + 6) == -1)) {
        piVar5 = piVar8 + 4;
      }
      else {
        piVar5 = piVar8 + 6;
      }
    }
    else {
      piVar5 = piVar8 + 2;
    }
    iVar10 = *piVar5;
    iVar6 = piVar5[1];
    local_28 = param_4;
    if (iVar10 != 0) {
      puVar7 = func_003CC1E4((undefined4 *)*param_2,(*param_2 - param_2[2] & 0xfffffffcU) + 0x18);
      *param_2 = (int)puVar7;
      puVar7 = func_003CC230(puVar7,&local_28,iVar10,iVar6 << 2);
      *param_2 = (int)puVar7;
      if ((uint *)param_2[3] != (uint *)0x0) {
        *(uint *)param_2[3] = (uint)((int)puVar7 - param_2[2]) >> 3;
      }
      param_2[2] = *param_2;
      param_2[3] = (int)local_28;
      if (param_2[4] == 0) {
        param_2[4] = *param_2 - param_2[1] & 0xfffffffc;
      }
    }
    iVar6 = piVar8[8];
    uVar1 = *(undefined2 *)((int)piVar8 + 0x22);
    *param_3 = *piVar8;
    *(short *)(param_3 + 1) = (short)iVar6;
    *(undefined2 *)((int)param_3 + 6) = uVar1;
    uVar2 = DAT_00170544;
    puVar7 = (uint *)*param_2;
    *puVar7 = *(byte *)(iVar9 + 0x12) | 0x80000000;
    puVar7[1] = uVar2;
    func_001150CC(puVar7 + 2,param_4,DAT_00170548);
    *param_2 = (int)(puVar7 + 0x10);
    uVar4 = DAT_00170554;
    uVar3 = DAT_00170550;
    puVar7[0x10] = *(byte *)(iVar9 + 0x22) | 0x80000000;
    uVar2 = DAT_0017054c;
    puVar7[0x11] = uVar4;
    puVar7[0x12] = uVar3;
    puVar7[0x13] = uVar2;
    puVar7[0x14] = uVar2;
    puVar7[0x15] = 0;
    *param_2 = (int)(puVar7 + 0x16);
    puVar7[0x16] = *(byte *)(iVar9 + 0x2a) | 0x80000000;
    puVar7[0x17] = uVar4;
    puVar7[0x18] = uVar3;
    puVar7[0x19] = uVar2;
    puVar7[0x1a] = uVar2;
    puVar7[0x1b] = 0;
    *param_2 = (int)(puVar7 + 0x1c);
    puVar7[0x1c] = *(byte *)(iVar9 + 0x32) | 0x80000000;
    puVar7[0x1d] = uVar4;
    puVar7[0x1e] = uVar2;
    puVar7[0x1f] = uVar2;
    puVar7[0x20] = uVar3;
    puVar7[0x21] = 0;
    *param_2 = (int)(puVar7 + 0x22);
  }
  return;
}

