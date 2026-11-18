// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern int func_004FB4E0(int param_1,float fparam_0);
extern int func_0051CE74(float *param_1);
extern int func_00520FC0(void);
extern int func_00556E64(int param_1);
extern int func_0058A7D4(void);
extern int func_0058E2B8(int *param_1);
extern int func_0065E254(undefined4 *param_1,undefined1 param_2);
extern float fRam0021e338;
extern float fRam0021e33c;
extern undefined4 uRam0021e340;
extern int *DAT_0021e328;
extern int DAT_0021e32c;
extern undefined4 DAT_0021e330;
extern float DAT_0021e334;

// USA 0021E104 <- EU 0021E104 (Ghidra, non-matching)
// GLOBAL DAT_0021e328 int *
// GLOBAL DAT_0021e32c int
// GLOBAL DAT_0021e330 undefined4
// GLOBAL DAT_0021e334 float
// GLOBAL UNK_0021e338 float
// GLOBAL UNK_0021e33c float
// GLOBAL UNK_0021e340 uint

undefined4 func_0021E104(int param_1)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  undefined1 uVar4;
  float *pfVar5;
  uint *puVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_40 (*(float *)(albw_frame + 0x0))
  #define uStack_3c (*(undefined4 *)(albw_frame + 0x4))
  #define uStack_38 (*(undefined4 *)(albw_frame + 0x8))
  #define local_34 (*(float *)(albw_frame + 0xc))
  #define uStack_30 (*(undefined4 *)(albw_frame + 0x10))
  #define uStack_2c (*(undefined4 *)(albw_frame + 0x14))
  uint uVar6;
  
  if (*(uint *)(param_1 + 0x8e4) < *(uint *)(param_1 + 0x8e8)) {
    *(uint *)(param_1 + 0x8e4) = *(uint *)(param_1 + 0x8e4) + 1;
  }
  if (*(uint *)(param_1 + 0x8e8) <= *(uint *)(param_1 + 0x8e4)) {
    pfVar5 = (float *)func_00520FC0();
    piVar1 = DAT_0021e328;
    fVar10 = *pfVar5 - *(float *)(param_1 + 0x3d0);
    fVar9 = pfVar5[2] - *(float *)(param_1 + 0x3d8);
    fVar9 = fVar10 * fVar10 + fVar9 * fVar9;
    bVar3 = func_00556E64(*DAT_0021e328);
    iVar2 = DAT_0021e32c;
    if ((bVar3) || (DAT_0021e32c < (int)ALBW_AS_U32(fVar9))) {
      puVar7 = (uint *)func_0058A7D4();
      uVar6 = func_00111A64(puVar7);
      uVar4 = (undefined1)((ulonglong)uVar6 * 4 >> 0x20);
    }
    else {
      pfVar5 = (float *)func_00520FC0();
      func_00115C70(&local_34,pfVar5,(float *)(param_1 + 0x3d0));
      local_40 = local_34;
      uStack_3c = uStack_30;
      uStack_38 = uStack_2c;
      uVar6 = func_0051CE74(&local_40);
      uVar4 = (undefined1)uVar6;
    }
    *(undefined1 *)(param_1 + 0x8e0) = uVar4;
    uVar8 = DAT_0021e330;
    *(undefined4 *)(param_1 + 0x8e8) = 100;
    *(undefined4 *)(param_1 + 0x8ec) = uVar8;
    *(undefined4 *)(param_1 + 0x8e4) = 0;
    fVar9 = DAT_0021e334;
    *(uint *)(param_1 + 0xa10) = (uint)*(byte *)(param_1 + 0x8e0) << 0x1e;
    *(undefined4 *)(param_1 + 0xa0c) = *(undefined4 *)(param_1 + 1000);
    pfVar5 = (float *)func_00520FC0();
    fVar10 = *pfVar5 - *(float *)(param_1 + 0x3d0);
    fVar11 = pfVar5[2] - *(float *)(param_1 + 0x3d8);
    fVar10 = fVar10 * fVar10 + fVar11 * fVar11;
    bVar3 = func_00556E64(*piVar1);
    if ((bVar3) || (iVar2 < (int)ALBW_AS_U32(fVar10))) {
      *(undefined1 *)(param_1 + 0xa2c) = 0;
      uVar8 = 1;
      *(undefined4 *)(param_1 + 0xa24) = 1;
    }
    else {
      uVar8 = 2;
      *(undefined1 *)(param_1 + 0xa2c) = 1;
      *(undefined4 *)(param_1 + 0xa24) = 2;
    }
    func_004FABDC(param_1,uVar8,0xffffffff,0);
    func_004FB4E0(param_1,fVar9);
    if (*(char *)(param_1 + 0xa2c) == '\0') {
      func_004D80A4((float *)(param_1 + 0x3dc),*(uint *)(param_1 + 0xa10),fRam0021e33c);
    }
    else {
      func_004D80A4((float *)(param_1 + 0x3dc),*(uint *)(param_1 + 0xa10),fRam0021e338);
    }
    local_40 = ALBW_AS_F32((*(int *)(param_1 + 0xa10) - *(int *)(param_1 + 0xa0c)));
    uVar6 = func_0058E2B8((int *)&local_40);
    if (uVar6 <= uRam0021e340) {
      return func_0065E254((undefined4 *)(param_1 + 0x8bc),2);
    }
    func_0065E254((undefined4 *)(param_1 + 0x8bc),5);
  }
  return 0;
}

