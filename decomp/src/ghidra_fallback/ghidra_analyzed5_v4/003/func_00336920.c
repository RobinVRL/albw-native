#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_004CF3AC(int param_1,undefined1 param_2,uint param_3);
extern undefined4 func_004CF864(int param_1,uint param_2,uint param_3,float fparam_0);
extern int func_0051E92C(int param_1);
extern int *DAT_00336a30;
extern int *DAT_00336a34;
extern float DAT_00336a38;

// USA 00336920 <- EU 003368FC (Ghidra, non-matching)
// GLOBAL DAT_00336a30 int *
// GLOBAL DAT_00336a34 int *
// GLOBAL DAT_00336a38 float

void func_00336920(int param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  float *pfVar7;
  float fparam_0;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_48 (*(float *)(albw_frame + 0x8))
  #define uStack_44 (*(undefined4 *)(albw_frame + 0xc))
  #define uStack_40 (*(undefined4 *)(albw_frame + 0x10))
  #define local_3c (*(float *)(albw_frame + 0x14))
  #define local_38 (*(float *)(albw_frame + 0x18))
  #define fStack_34 (*(float *)(albw_frame + 0x1c))
  pfVar7 = *(float **)(*DAT_00336a30 + 0x1c);
  iVar1 = func_0051E92C(*DAT_00336a34);
  fVar8 = *(float *)(iVar1 + 8);
  fVar9 = *(float *)(iVar1 + 0x18);
  fVar10 = *(float *)(iVar1 + 0x28);
  uVar5 = 0;
  *(uint *)(*(int *)(param_1 + 0x440) + 0x164) = *(uint *)(*(int *)(param_1 + 0x440) + 0x164) | 1;
  iVar6 = *(int *)(*(int *)(param_1 + 0x440) + 0x24);
  iVar1 = *(int *)(*(int *)(param_1 + 0x440) + 0x5c);
  fVar11 = DAT_00336a38;
  if (0 < iVar1) {
    do {
      iVar4 = *(int *)(param_1 + 0x440);
      if (uVar5 < *(uint *)(iVar4 + 0x5c)) {
        iVar2 = *(int *)(*(int *)(iVar4 + 100) + uVar5 * 4);
      }
      else {
        iVar2 = 0;
      }
      if ((uint)**(ushort **)(iVar2 + 0x90) == *(uint *)(param_1 + 0x488)) {
        bVar3 = true;
        fVar12 = fVar11;
      }
      else {
        iVar4 = *(int *)(iVar6 + 0x14) +
                (uint)*(ushort *)(*(int *)(*(ushort **)(iVar2 + 0x90) + 8) + 4) * 0x30;
        local_48 = *(float *)(iVar4 + 0xc);
        uStack_44 = *(undefined4 *)(iVar4 + 0x1c);
        uStack_40 = *(undefined4 *)(iVar4 + 0x2c);
        func_00115C70(&local_3c,&local_48,pfVar7);
        fparam_0 = fVar8 * local_3c + fVar9 * local_38 + fVar10 * fStack_34;
        fVar12 = fVar11;
        func_004CF864(*(int *)(param_1 + 0x440),(uint)(fVar11 < fparam_0),uVar5,fparam_0);
        iVar4 = *(int *)(param_1 + 0x440);
        bVar3 = fparam_0 <= fVar11;
      }
      func_004CF3AC(iVar4,bVar3,uVar5);
      uVar5 = uVar5 + 1;
      fVar11 = fVar12;
    } while ((int)uVar5 < iVar1);
  }
  return;
}

