#include "ghidra_types.h"

extern ulonglong func_00110710(uint param_1,uint param_2);
extern int func_001684B8(byte *param_1,uint *param_2);
extern int func_002BFF00(int *param_1,int param_2,int param_3,float *param_4);
extern int func_002C00A8(int param_1);
extern int func_002C0174(int param_1,uint *param_2);
extern int func_002C020C(int param_1,uint *param_2);
extern int func_005438EC(uint *param_1);
extern int *DAT_00166ad8;
extern float *DAT_00166adc;
extern float DAT_00166ae0;
extern float DAT_00166ae4;

// USA 00166720 <- EU 00166724 (Ghidra, non-matching)
// GLOBAL DAT_00166ad8 int *
// GLOBAL DAT_00166adc float *
// GLOBAL DAT_00166ae0 float
// GLOBAL DAT_00166ae4 float

undefined4 func_00166720(int param_1)

{
  short sVar1;
  short sVar2;
  int *piVar3;
  float fVar4;
  uint uVar5;
  float *pfVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  ushort uVar10;
  int *piVar11;
  int iVar12;
  uint uVar13;
  uint *puVar14;
  int *piVar15;
  int iVar16;
  int iVar17;
  byte *pbVar18;
  byte bVar19;
  bool bVar20;
  undefined8 uVar21;
  
  fVar4 = DAT_00166ae4;
  piVar3 = DAT_00166ad8;
  bVar20 = *(char *)(param_1 + 0xa4) == '\0';
  uVar5 = 0;
  if (!bVar20) {
    uVar5 = *(uint *)(param_1 + 0x18);
  }
  if (bVar20 || uVar5 == 0) {
    return 0;
  }
  if (uVar5 - 1 < uVar5) {
    piVar11 = *(int **)(*(int *)(param_1 + 0x20) + (uVar5 - 1) * 4);
  }
  else {
    piVar11 = (int *)0x0;
  }
  if ((piVar11[6] & 0x80U) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0016694c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    return (**(code **)(*piVar11 + 0x48))(piVar11);
  }
  if (uVar5 - 1 < uVar5) {
    iVar12 = *(int *)(*(int *)(param_1 + 0x20) + (uVar5 - 1) * 4);
  }
  else {
    iVar12 = 0;
  }
  if ((*(uint *)(*DAT_00166ad8 + (uint)*(byte *)(iVar12 + 0x70) * 400 + 0x2c) & 1) != 0) {
    if (uVar5 - 1 < uVar5) {
      iVar12 = *(int *)(*(int *)(param_1 + 0x20) + (uVar5 - 1) * 4);
    }
    else {
      iVar12 = 0;
    }
    iVar12 = *DAT_00166ad8 + (uint)*(byte *)(iVar12 + 0x70) * 400;
    pfVar6 = DAT_00166adc;
    if ((*(uint *)(iVar12 + 0x2c) & 1) != 0) {
      pfVar6 = (float *)(iVar12 + 0x130);
    }
    *(float *)(param_1 + 0x10) = *pfVar6 - DAT_00166ae0;
    *(float *)(param_1 + 0x14) = fVar4 - pfVar6[1];
  }
  pbVar18 = (byte *)piVar11[0x1b];
  if (*(char *)(param_1 + 0xa5) != '\0') {
    iVar7 = piVar11[0x19];
    iVar16 = piVar11[0x19];
    for (iVar12 = piVar11[0x17] - iVar16; iVar12 != (int)piVar11 + (0x58 - iVar7);
        iVar12 = *(int *)(iVar12 + iVar16 + 4) - iVar16) {
      func_002C00A8(iVar12);
    }
    if (pbVar18 != (byte *)0x0) {
      *(undefined2 *)(pbVar18 + 8) = *(undefined2 *)(pbVar18 + 4);
      *(undefined2 *)(pbVar18 + 10) = *(undefined2 *)(pbVar18 + 6);
    }
  }
  *(undefined1 *)(param_1 + 0xa5) = 0;
  uVar5 = *(uint *)(param_1 + 0x18);
  bVar19 = 0xff;
  if (uVar5 - 1 < uVar5) {
    iVar12 = *(int *)(*(int *)(param_1 + 0x20) + (uVar5 - 1) * 4);
  }
  else {
    iVar12 = 0;
  }
  if (*(int *)(*piVar3 + (uint)*(byte *)(iVar12 + 0x70) * 400 + 0x150) != 0) {
    if (uVar5 - 1 < uVar5) {
      iVar12 = *(int *)(*(int *)(param_1 + 0x20) + (uVar5 - 1) * 4);
    }
    else {
      iVar12 = 0;
    }
    iVar16 = *(int *)(iVar12 + 100);
    iVar17 = *(int *)(iVar12 + 100);
    for (iVar7 = *(int *)(iVar12 + 0x5c) - iVar17; iVar7 != (iVar12 + 0x58) - iVar16;
        iVar7 = *(int *)(iVar7 + iVar17 + 4) - iVar17) {
      uVar5 = *(uint *)(param_1 + 0x18) - 1;
      if (uVar5 < *(uint *)(param_1 + 0x18)) {
        iVar8 = *(int *)(*(int *)(param_1 + 0x20) + uVar5 * 4);
      }
      else {
        iVar8 = 0;
      }
      iVar8 = func_002C020C(iVar7,(uint *)(*piVar3 + (uint)*(byte *)(iVar8 + 0x70) * 400 + 0x20));
      if (iVar8 != 0) {
        bVar19 = *(byte *)(iVar7 + 0x14);
        *(ushort *)(iVar7 + 0x16) = *(ushort *)(iVar7 + 0x16) | 2;
        goto LAB_00166afc;
      }
    }
  }
  uVar5 = *(uint *)(param_1 + 0x18) - 1;
  if (uVar5 < *(uint *)(param_1 + 0x18)) {
    iVar12 = *(int *)(*(int *)(param_1 + 0x20) + uVar5 * 4);
  }
  else {
    iVar12 = 0;
  }
  iVar7 = *(int *)(iVar12 + 100);
  iVar16 = *(int *)(iVar12 + 100);
  for (piVar15 = (int *)(*(int *)(iVar12 + 0x5c) - iVar16);
      piVar15 != (int *)((iVar12 + 0x58) - iVar7);
      piVar15 = (int *)(*(int *)((int)piVar15 + iVar16 + 4) - iVar16)) {
    uVar5 = *(uint *)(param_1 + 0x18) - 1;
    if (uVar5 < *(uint *)(param_1 + 0x18)) {
      iVar17 = *(int *)(*(int *)(param_1 + 0x20) + uVar5 * 4);
    }
    else {
      iVar17 = 0;
    }
    iVar17 = func_002C0174((int)piVar15,
                           (uint *)(*piVar3 + (uint)*(byte *)(iVar17 + 0x70) * 400 + 0x20));
    if (iVar17 != 0) goto LAB_00166ad0;
  }
  uVar5 = *(uint *)(param_1 + 0x18);
  if (uVar5 - 1 < uVar5) {
    iVar12 = *(int *)(*(int *)(param_1 + 0x20) + (uVar5 - 1) * 4);
  }
  else {
    iVar12 = 0;
  }
  if ((*(uint *)(iVar12 + 0x68) & 4) != 0) {
    if (uVar5 - 1 < uVar5) {
      iVar7 = *(int *)(*(int *)(param_1 + 0x20) + (uVar5 - 1) * 4);
    }
    else {
      iVar7 = 0;
    }
    uVar13 = *(uint *)(*piVar3 + (uint)*(byte *)(iVar7 + 0x70) * 400 + 0x2c);
    if (uVar5 - 1 < uVar5) {
      iVar7 = *(int *)(*(int *)(param_1 + 0x20) + (uVar5 - 1) * 4);
    }
    else {
      iVar7 = 0;
    }
    uVar5 = *(uint *)(*piVar3 + (uint)*(byte *)(iVar7 + 0x70) * 400 + 0x2c);
    iVar7 = *(int *)(iVar12 + 100);
    iVar16 = *(int *)(iVar12 + 100);
    for (piVar15 = (int *)(*(int *)(iVar12 + 0x5c) - iVar16);
        piVar15 != (int *)((iVar12 + 0x58) - iVar7);
        piVar15 = (int *)(*(int *)((int)piVar15 + iVar16 + 4) - iVar16)) {
      uVar9 = func_002BFF00(piVar15,(uint)((uVar13 & 1) != 0),(uint)((uVar5 & 2) != 0),
                            (float *)(param_1 + 0x10));
      if (uVar9 != 0) goto LAB_00166ad0;
    }
  }
LAB_00166afc:
  if (pbVar18 != (byte *)0x0) {
    if ((char)bVar19 < '\0') {
      uVar5 = *(uint *)(param_1 + 0x18) - 1;
      if (uVar5 < *(uint *)(param_1 + 0x18)) {
        iVar12 = *(int *)(*(int *)(param_1 + 0x20) + uVar5 * 4);
      }
      else {
        iVar12 = 0;
      }
      func_001684B8(pbVar18,(uint *)(*piVar3 + (uint)*(byte *)(iVar12 + 0x70) * 400 + 0x20));
    }
    else {
      uVar21 = func_00110710((uint)bVar19,(uint)*pbVar18);
      *(short *)(pbVar18 + 8) = (short)((ulonglong)uVar21 >> 0x20);
      uVar21 = func_00110710((uint)bVar19,(uint)*pbVar18);
      *(short *)(pbVar18 + 10) = (short)uVar21;
    }
    sVar1 = *(short *)(pbVar18 + 10);
    bVar19 = *pbVar18;
    sVar2 = *(short *)(pbVar18 + 8);
    iVar12 = piVar11[0x19];
    iVar7 = piVar11[0x19];
    for (puVar14 = (uint *)(piVar11[0x17] - iVar7);
        puVar14 != (uint *)((int)piVar11 + (0x58 - iVar12));
        puVar14 = (uint *)(*(int *)((int)puVar14 + iVar7 + 4) - iVar7)) {
      if (((int)(char)puVar14[5] == ((int)sVar1 * (int)(short)(ushort)bVar19 + (int)sVar2 & 0xffffU)
          ) && (iVar16 = func_005438EC(puVar14), iVar16 != 0)) {
        uVar10 = *(ushort *)((int)puVar14 + 0x16) | 2;
      }
      else {
        uVar10 = *(ushort *)((int)puVar14 + 0x16) & 0xfffd;
      }
      *(ushort *)((int)puVar14 + 0x16) = uVar10;
    }
  }
  return 0;
LAB_00166ad0:
  bVar19 = *(byte *)(piVar15 + 5);
  goto LAB_00166afc;
}

