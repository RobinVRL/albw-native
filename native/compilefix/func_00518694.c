/* USA 00518694 (EU 0051866C): converted Ghidra text (build/decomp, round-3 stage 2) with one fix.
 * The per-object virtual draw call (vtable +0x10, e.g. 002C3870) lost its 4th argument: the ARM
 * passes r3 = the word it just tested, *piVar16 (EU 00518938 `ldr r3, [r0]`, 00518958 `blx r12`).
 * Without it 002C3870 read *(r3 + 8) + 0x40 from garbage and 005681C0 crashed (boot stop 83).
 * CLASS 1 (lost register arguments in virtual calls). Confidence: high. */
#include "ghidra_types.h"

extern int func_001150CC(undefined4 *param_1,undefined4 *param_2,undefined4 param_3);
extern int func_002C35A4(int param_1);
extern int func_003CC1E4(undefined4 *param_1,uint param_2);
extern int func_003CC230(uint *param_1,undefined4 *param_2,int param_3,uint param_4);
extern int func_00564C14(int *param_1,int *param_2,ushort *param_3,int *param_4);
extern int func_005655D0(int *param_1,int *param_2,ushort *param_3,int *param_4);
extern int *DAT_00518998;
extern uint DAT_0051899c;
extern undefined4 DAT_005189a0;
extern uint DAT_005189a4;
extern uint DAT_005189a8;
extern uint DAT_005189ac;
extern undefined4 DAT_005189b0;

// USA 00518694 <- EU 0051866C (Ghidra, non-matching)
// GLOBAL DAT_00518998 int *
// GLOBAL DAT_0051899c uint
// GLOBAL DAT_005189a0 undefined4
// GLOBAL DAT_005189a4 uint
// GLOBAL DAT_005189a8 uint
// GLOBAL DAT_005189ac uint
// GLOBAL DAT_005189b0 undefined4

undefined4 func_00518694(int *param_1,undefined4 param_2,int *param_3)

{
  undefined2 uVar1;
  short sVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int *piVar9;
  uint *puVar10;
  int iVar11;
  undefined4 *puVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  int *piVar16;
  int iVar17;
  int iVar18;
  int *piVar19;
  ushort *puVar20;
  bool bVar21;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(int *)(albw_frame + 0x8))
  iVar6 = (**(code **)(*param_1 + 0x10))(param_1);
  if (iVar6 == 0) {
    return 0;
  }
  iVar6 = *DAT_00518998;
  piVar7 = *(int **)(iVar6 + 0x24);
  iVar8 = param_1[0x24];
  iVar14 = *(int *)(iVar6 + 0x14);
  piVar19 = *(int **)(*(int *)(iVar8 + 8) + 0x34);
  piVar16 = *(int **)(*piVar19 + 8);
  sVar2 = (short)piVar16[8];
  iVar18 = **(int **)(iVar8 + 0xb0);
  puVar20 = (ushort *)**(undefined4 **)(iVar8 + 0x24);
  if (iVar14 == *piVar16) {
    bVar21 = *(short *)(iVar6 + 0x18) == sVar2;
    if (bVar21) {
      sVar2 = *(short *)(iVar6 + 0x1a);
    }
    if (bVar21 && sVar2 == *(short *)((int)piVar16 + 0x22)) goto LAB_00518880;
  }
  if (iVar14 == *piVar16) {
    if ((*(short *)((int)piVar16 + 0x22) == -1) == (*(short *)(iVar6 + 0x1a) == -1)) {
      piVar9 = piVar16 + 4;
    }
    else {
      piVar9 = piVar16 + 6;
    }
  }
  else {
    piVar9 = piVar16 + 2;
  }
  iVar14 = *piVar9;
  iVar8 = piVar9[1];
  if (iVar14 != 0) {
    puVar10 = func_003CC1E4((undefined4 *)*param_3,(*param_3 - param_3[2] & 0xfffffffcU) + 0x18);
    *param_3 = (int)puVar10;
    puVar10 = func_003CC230(puVar10,&local_28,iVar14,iVar8 << 2);
    *param_3 = (int)puVar10;
    if ((uint *)param_3[3] != (uint *)0x0) {
      *(uint *)param_3[3] = (uint)((int)puVar10 - param_3[2]) >> 3;
    }
    param_3[2] = *param_3;
    param_3[3] = local_28;
    if (param_3[4] == 0) {
      param_3[4] = *param_3 - param_3[1] & 0xfffffffc;
    }
  }
  iVar8 = piVar16[8];
  uVar1 = *(undefined2 *)((int)piVar16 + 0x22);
  *(int *)(iVar6 + 0x14) = *piVar16;
  *(short *)(iVar6 + 0x18) = (short)iVar8;
  *(undefined2 *)(iVar6 + 0x1a) = uVar1;
  uVar13 = DAT_0051899c;
  puVar10 = (uint *)*param_3;
  puVar12 = *(undefined4 **)(iVar6 + 0x20);
  *puVar10 = *(byte *)(iVar18 + 0x12) | 0x80000000;
  uVar3 = DAT_005189a0;
  puVar10[1] = uVar13;
  func_001150CC(puVar10 + 2,puVar12,uVar3);
  *param_3 = (int)(puVar10 + 0x10);
  uVar5 = DAT_005189ac;
  uVar4 = DAT_005189a8;
  puVar10[0x10] = *(byte *)(iVar18 + 0x22) | 0x80000000;
  uVar13 = DAT_005189a4;
  puVar10[0x11] = uVar5;
  puVar10[0x12] = uVar4;
  puVar10[0x13] = uVar13;
  puVar10[0x14] = uVar13;
  puVar10[0x15] = 0;
  *param_3 = (int)(puVar10 + 0x16);
  puVar10[0x16] = *(byte *)(iVar18 + 0x2a) | 0x80000000;
  puVar10[0x17] = uVar5;
  puVar10[0x18] = uVar4;
  puVar10[0x19] = uVar13;
  puVar10[0x1a] = uVar13;
  puVar10[0x1b] = 0;
  *param_3 = (int)(puVar10 + 0x1c);
  puVar10[0x1c] = *(byte *)(iVar18 + 0x32) | 0x80000000;
  puVar10[0x1d] = uVar5;
  puVar10[0x1e] = uVar13;
  puVar10[0x1f] = uVar13;
  puVar10[0x20] = uVar4;
  puVar10[0x21] = 0;
  *param_3 = (int)(puVar10 + 0x22);
LAB_00518880:
  uVar3 = DAT_005189b0;
  puVar12 = (undefined4 *)*param_3;
  *puVar12 = 0;
  puVar12[1] = uVar3;
  *param_3 = (int)(puVar12 + 2);
  if ((*puVar20 & 0x100) == 0) {
    func_00564C14(piVar19,param_3,puVar20,piVar7);
  }
  else {
    func_005655D0(piVar19,param_3,puVar20,piVar7);
  }
  iVar8 = param_1[0x23];
  uVar13 = (uint)*(char *)((int)param_1 + 0x96);
  if (*(char *)(iVar8 + 0x150) != '\0') {
    iVar14 = iVar8 + 0x118;
    if (uVar13 < 2) {
      iVar14 = iVar14 + uVar13 * 0x10;
    }
    iVar15 = *(int *)(iVar14 + 0xc);
    iVar11 = iVar8 + 0x118;
    if (uVar13 < 2) {
      iVar11 = iVar11 + uVar13 * 0x10;
    }
    iVar17 = *(int *)(iVar11 + 0xc);
    for (piVar7 = (int *)(*(int *)(iVar11 + 4) - iVar17); piVar7 != (int *)(iVar14 - iVar15);
        piVar7 = (int *)(*(int *)((int)piVar7 + iVar17 + 4) - iVar17)) {
      iVar11 = func_002C35A4((int)piVar7);
      if (iVar11 != 0) {
        piVar16 = (int *)(iVar8 + 0x10);
        if (*(byte *)(piVar7 + 6) < 8) {
          piVar16 = piVar16 + *(byte *)(piVar7 + 6);
        }
        if (*piVar16 != 0) {
          (**(code **)(*piVar7 + 0x10))(piVar7,param_3,iVar18,*piVar16);
        }
      }
    }
  }
  *(undefined4 *)(iVar6 + 0x1c) = 0;
  *(undefined1 *)(iVar6 + 0x2c) = 0;
  *(undefined1 *)(iVar6 + 0x2d) = 0xff;
  *(undefined2 *)(iVar6 + 0x2e) = 0xffff;
  *(undefined4 *)(iVar6 + 0x28) = 0;
  return 1;
}

