#include "ghidra_types.h"

extern int func_0010BEB4(int param_1,int *param_2);
extern int func_001B6C04(int param_1);
extern int func_00260214(int *param_1);
extern int func_00584B94(int param_1,int param_2);
extern int *DAT_00369dd4;
extern int DAT_00369dd8;
extern int *DAT_00369ddc;
extern int DAT_00369de0;
extern int DAT_00369de4;

// USA 00369B60 <- EU 00369B3C (Ghidra, non-matching)
// GLOBAL DAT_00369dd4 int *
// GLOBAL DAT_00369dd8 int
// GLOBAL DAT_00369ddc int *
// GLOBAL DAT_00369de0 int
// GLOBAL DAT_00369de4 int

void func_00369B60(int *param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  code *pcVar6;
  int *piVar7;
  int iVar8;
  code *pcVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  undefined4 *puVar13;
  int iVar14;
  undefined4 *puVar15;
  int iVar16;
  uint uVar17;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(int *)(albw_frame + 0x0))
  #define local_2c (*(int *)(albw_frame + 0x4))
  (**(code **)(*param_1 + 0x4c))(param_1,1);
  func_001B6C04((int)param_1);
  piVar3 = DAT_00369ddc;
  iVar5 = DAT_00369dd8;
  iVar16 = *DAT_00369dd4;
  iVar14 = 0;
  piVar12 = (int *)(param_1[0x11] + param_1[0xf] * 4 + -4);
  iVar11 = 0;
  do {
    bVar1 = func_00584B94(*piVar3,(uint)*(ushort *)(iVar5 + iVar11 * 2));
    if (bVar1) {
LAB_00369be8:
      iVar2 = *(int *)(*piVar12 + 0x54);
      if (iVar2 != 0) {
        *(byte *)(iVar2 + 0x44) = *(byte *)(iVar2 + 0x44) & 0xfe | 1;
      }
      piVar7 = param_1 + iVar14 * 3 + 0x15;
      iVar2 = *(int *)(*piVar12 + 0x54);
      if (iVar2 != 0) {
        iVar8 = *piVar7;
        iVar10 = piVar7[1];
        *(int *)(iVar2 + 0x24) = piVar7[2];
        *(int *)(iVar2 + 0x1c) = iVar8;
        *(int *)(iVar2 + 0x20) = iVar10;
        *(byte *)(iVar2 + 0x44) = *(byte *)(iVar2 + 0x44) & 0xef | 0x10;
      }
      iVar14 = iVar14 + 1;
    }
    else {
      pcVar6 = (code *)(DAT_00369de0 + iVar11 * 8);
      pcVar9 = pcVar6 + 4;
      bVar1 = (*(uint *)pcVar9 & 1) == 0;
      if (bVar1) {
        pcVar6 = *(code **)pcVar6;
      }
      if (!bVar1) {
        pcVar6 = *(code **)(*(int *)(iVar16 + ((int)*(uint *)pcVar9 >> 1)) + *(int *)pcVar6);
      }
      iVar2 = (*pcVar6)();
      if (0 < iVar2) goto LAB_00369be8;
      iVar2 = *(int *)(*piVar12 + 0x54);
      if (iVar2 != 0) {
        *(byte *)(iVar2 + 0x44) = *(byte *)(iVar2 + 0x44) & 0xfe;
      }
    }
    iVar2 = DAT_00369de4;
    iVar11 = iVar11 + 1;
    piVar12 = piVar12 + -1;
    if (2 < iVar11) {
      puVar13 = (undefined4 *)param_1[0x11];
      puVar15 = puVar13 + param_1[0xf];
      for (; puVar13 != puVar15; puVar13 = puVar13 + 1) {
        piVar3 = (int *)*puVar13;
        uVar4 = func_00260214(piVar3);
        iVar5 = (int)(char)piVar3[4];
        if (iVar5 != -1) {
          iVar11 = piVar3[0xb];
          pcVar9 = *(code **)(iVar11 + iVar5 * 8);
          if ((pcVar9 != (code *)0x0) ||
             ((uVar17 = *(uint *)(iVar11 + iVar5 * 8 + 4), (uVar17 & 1) != 0 && (uVar17 != 0)))) {
            uVar17 = *(uint *)(iVar11 + iVar5 * 8 + 4);
            if ((uVar17 & 1) != 0) {
              pcVar9 = *(code **)(pcVar9 + *(int *)(piVar3[8] + ((int)uVar17 >> 1)));
            }
            (*pcVar9)((int)(piVar3[8]) + ((int)uVar17 >> 1));
          }
        }
        iVar5 = piVar3[4];
        *(byte *)(piVar3 + 4) = (byte)uVar4 ^ 1;
        piVar3[3] = 0;
        *(char *)((int)piVar3 + 0x11) = (char)iVar5;
        if (piVar3[7] != 0) {
          if ((uint)(int)(char)piVar3[4] < (uint)piVar3[5]) {
            piVar12 = (int *)(piVar3[6] + (char)piVar3[4] * 0x24);
          }
          else {
            piVar12 = (int *)piVar3[6];
          }
          (**(code **)(*piVar12 + 8))(piVar12);
          local_2c = piVar12[1];
          local_30 = iVar2;
          func_0010BEB4(piVar3[7],&local_30);
        }
        iVar11 = (int)(char)piVar3[4];
        iVar5 = piVar3[9];
        pcVar9 = *(code **)(iVar5 + iVar11 * 8);
        if ((pcVar9 != (code *)0x0) ||
           ((uVar17 = *(uint *)(iVar5 + iVar11 * 8 + 4), (uVar17 & 1) != 0 && (uVar17 != 0)))) {
          uVar17 = *(uint *)(iVar5 + iVar11 * 8 + 4);
          if ((uVar17 & 1) != 0) {
            pcVar9 = *(code **)(pcVar9 + *(int *)(piVar3[8] + ((int)uVar17 >> 1)));
          }
          (*pcVar9)((int)(piVar3[8]) + ((int)uVar17 >> 1));
        }
      }
      return;
    }
  } while( true );
}

