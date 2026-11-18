#include "ghidra_types.h"

extern longlong func_001104E4(int param_1,int param_2);
extern int func_00260700(int param_1);
extern void func_0034C4C0(int param_1,uint param_2,int param_3,float fparam_0);
extern int func_0034C57C(int param_1,int param_2);
extern int func_00660208(undefined4 *param_1,undefined1 param_2);
extern float DAT_00260460;
extern int DAT_00260464;

// USA 00260250 <- EU 00260278 (Ghidra, non-matching)
// GLOBAL DAT_00260460 float
// GLOBAL DAT_00260464 int

undefined4 func_00260250(int *param_1)

{
  int iVar1;
  uint uVar2;
  byte *pbVar3;
  byte *pbVar4;
  int iVar5;
  byte bVar6;
  byte *pbVar7;
  byte *pbVar8;
  undefined4 *puVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  bool bVar13;
  uint in_fpscr;
  float fVar14;
  ulonglong uVar15;
  longlong lVar16;
  
  uVar11 = param_1[3];
  lVar16 = func_001104E4(uVar11,param_1[0x12]);
  iVar1 = DAT_00260464;
  uVar10 = (uint)*(byte *)(param_1 + 0xe);
  iVar12 = param_1[0xd];
  uVar2 = uVar10 & 1 << (param_1[2] & 0xffU);
  if ((int)((ulonglong)lVar16 >> 0x20) != 0) {
    fVar14 = (float)VectorSignedToFloat(uVar11,(byte)(in_fpscr >> 0x15) & 3);
    fVar14 = ALBW_AS_F32(param_1[0x14]) * fVar14;
    if (uVar2 == 0) {
      iVar12 = iVar12 + -1;
      fVar14 = DAT_00260460 - fVar14;
    }
    uVar15 = (ulonglong)(uint)ALBW_AS_U32(fVar14);
    uVar2 = 0;
    if (0 < param_1[1]) {
      do {
        if (((uint)*(byte *)(param_1 + 0xe) & 1 << (uVar2 & 0xff)) != 0) {
          iVar5 = (int)((ulonglong)((longlong)iVar1 * (longlong)iVar12) >> 0x20);
          func_0034C4C0(param_1[0xc],uVar2,iVar12 + ((iVar5 >> 2) - (iVar5 >> 0x1f)) * -10,
                        ALBW_AS_F32(uVar15));
        }
        iVar12 = (int)((ulonglong)((longlong)iVar1 * (longlong)iVar12) >> 0x20);
        uVar2 = uVar2 + 1;
        iVar12 = (iVar12 >> 2) - (iVar12 >> 0x1f);
      } while ((int)uVar2 < param_1[1]);
    }
    if ((((uint)*(byte *)(param_1 + 0xe) & 1 << (param_1[2] & 0xffU)) == 0) &&
       (2 < (uint)param_1[0xf])) {
      puVar9 = (undefined4 *)(param_1[0x10] + 8);
    }
    else {
      puVar9 = (undefined4 *)param_1[0x10];
    }
                    /* WARNING: Could not recover jumptable at 0x0026045c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    return (**(code **)(*param_1 + 0x18))(param_1,*puVar9);
  }
  if (uVar2 == 0) {
    iVar12 = iVar12 + -1;
  }
  else {
    iVar12 = iVar12 + 1;
  }
  param_1[0xd] = iVar12;
  func_0034C57C(param_1[0xc],iVar12);
  pbVar3 = (byte *)(**(code **)(*param_1 + 0xc))(param_1);
  pbVar7 = (byte *)param_1[0xd];
  bVar13 = pbVar7 != pbVar3;
  if (bVar13) {
    uVar10 = param_1[2];
  }
  pbVar8 = pbVar7;
  if ((int)pbVar3 < (int)pbVar7) {
    pbVar8 = (byte *)0x0;
  }
  pbVar4 = pbVar3;
  if (bVar13) {
    pbVar4 = (byte *)(param_1 + 0xe);
  }
  if ((int)pbVar7 < (int)pbVar3) {
    pbVar8 = (byte *)0x1;
  }
  if (bVar13) {
    bVar6 = (byte)(1 << (uVar10 & 0xff));
    if (pbVar8 == (byte *)0x0) {
      bVar6 = *pbVar4 & ~bVar6;
    }
    else {
      bVar6 = bVar6 | *pbVar4;
    }
    *pbVar4 = bVar6;
    func_00260700((int)param_1);
    param_1[3] = 0;
    return 0;
  }
  if (((uint)*(byte *)(param_1 + 0xe) & 1 << (param_1[2] & 0xffU)) == 0) {
    if (3 < (uint)param_1[0xf]) {
      puVar9 = (undefined4 *)(param_1[0x10] + 0xc);
      goto LAB_00260354;
    }
  }
  else if (1 < (uint)param_1[0xf]) {
    puVar9 = (undefined4 *)(param_1[0x10] + 4);
    goto LAB_00260354;
  }
  puVar9 = (undefined4 *)param_1[0x10];
LAB_00260354:
  (**(code **)(*param_1 + 0x14))(param_1,*puVar9);
  return func_00660208(param_1 + 3,1);
}

