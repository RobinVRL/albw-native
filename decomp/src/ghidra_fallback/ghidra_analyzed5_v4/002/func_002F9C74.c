#include "ghidra_types.h"

extern int func_001119F4(undefined4 *param_1,undefined4 *param_2);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00188BE4(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4, float fparam_0);
extern int func_004CF478(int param_1,int param_2);
extern float func_0051D034(uint *param_1,float fparam_0);
extern int func_00520FC0(void);
extern int func_0058A7D4(void);
extern int func_0058A8F0(int param_1);
extern int func_0058E2B8(int *param_1);
extern int func_00664230(undefined4 *param_1,undefined1 param_2);
extern int func_0068C690(float *param_1);
extern float DAT_002f9e74;
extern float DAT_002f9e78;
extern uint DAT_002f9e7c;
extern float DAT_002f9e80;
extern float DAT_002f9e84;
extern float DAT_002f9e88;
extern undefined4 DAT_002f9e8c;

// USA 002F9C74 <- EU 002F9C50 (Ghidra, non-matching)
// GLOBAL DAT_002f9e74 float
// GLOBAL DAT_002f9e78 float
// GLOBAL DAT_002f9e7c uint
// GLOBAL DAT_002f9e80 float
// GLOBAL DAT_002f9e84 float
// GLOBAL DAT_002f9e88 float
// GLOBAL DAT_002f9e8c undefined4

undefined4 func_002F9C74(int param_1)

{
  undefined4 uVar1;
  float *pfVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  int iVar10;
  float fVar11;
  _Alignas(8) unsigned char albw_frame[0x90];
  #define local_88 (*(float *)(albw_frame + 0x8))
  #define local_84 (*(float *)(albw_frame + 0xc))
  #define local_80 (*(undefined4 *)(albw_frame + 0x10))
  #define local_7c (*(int *)(albw_frame + 0x14))
  #define auStack_78 ((undefined4 *)(albw_frame + 0x18))
  #define local_6c (*(float *)(albw_frame + 0x24))
  #define local_5c (*(float *)(albw_frame + 0x34))
  #define local_4c (*(undefined4 *)(albw_frame + 0x44))
  #define local_48 (*(float *)(albw_frame + 0x48))
  #define uStack_44 (*(undefined4 *)(albw_frame + 0x4c))
  #define local_40 (*(float *)(albw_frame + 0x50))
  #define local_3c (*(int *)(albw_frame + 0x54))
  #define local_38 (*(int *)(albw_frame + 0x58))
  #define local_34 (*(float *)(albw_frame + 0x5c))
  #define uStack_30 (*(undefined4 *)(albw_frame + 0x60))
  #define fStack_2c (*(float *)(albw_frame + 0x64))
  iVar8 = *(int *)(param_1 + 0x8bc);
  if (iVar8 != 0xe) goto LAB_002f9de0;
  func_001119F4(auStack_78,
                (undefined4 *)
                (*(int *)(*(int *)(*(int *)(param_1 + 0x40c) + 0x24) + 0x14) +
                *(int *)(param_1 + 0xa08) * 0x30));
  local_88 = local_6c;
  local_84 = local_5c + DAT_002f9e74;
  local_80 = local_4c;
  pfVar2 = (float *)func_00520FC0();
  func_00115C70(&local_34,pfVar2,&local_88);
  local_48 = local_34;
  uStack_44 = uStack_30;
  local_40 = fStack_2c;
  iVar3 = func_0068C690(&local_48);
  puVar4 = (uint *)func_0058A7D4();
  fVar9 = func_0051D034(puVar4,DAT_002f9e78);
  iVar10 = VectorFloatToUnsigned(fVar9,3);
  local_7c = iVar3 - *(int *)(param_1 + 1000);
  uVar5 = func_0058E2B8(&local_7c);
  if (uVar5 < DAT_002f9e7c) {
LAB_002f9d68:
    iVar10 = *(int *)(param_1 + 1000) - iVar10;
  }
  else {
    iVar7 = *(int *)(param_1 + 1000);
    local_3c = iVar3 - (iVar7 - iVar10);
    uVar5 = func_0058E2B8(&local_3c);
    local_38 = iVar3 - (iVar7 + iVar10);
    uVar6 = func_0058E2B8(&local_38);
    if (uVar5 < uVar6) goto LAB_002f9d68;
    iVar10 = iVar10 + *(int *)(param_1 + 1000);
  }
  fVar11 = SQRT(local_48 * local_48 + local_40 * local_40);
  puVar4 = (uint *)func_0058A7D4();
  fVar9 = func_0051D034(puVar4,DAT_002f9e80);
  fVar11 = fVar11 + (fVar9 - DAT_002f9e84);
  iVar3 = func_00520FC0();
  if (0x3f800000 < (int)ALBW_AS_U32((*(float *)(param_1 + 0x3d4) - *(float *)(iVar3 + 4)))) {
    fVar11 = fVar11 * DAT_002f9e88;
  }
  func_00188BE4(&local_88,iVar10,3,*(undefined4 *)(param_1 + 0x2cc),fVar11);
LAB_002f9de0:
  uVar1 = DAT_002f9e8c;
  if (0x19 < iVar8 - 0xeU) {
    if (0x27 < iVar8) {
      *(undefined4 *)(param_1 + 0xa24) = 5;
      *(undefined4 *)(param_1 + 0xa28) = uVar1;
      *(undefined4 *)(param_1 + 0xa20) = 0;
      func_004CF478(*(int *)(*(int *)(param_1 + 0xa0c) + 0x18),1);
      iVar8 = func_0058A8F0(param_1);
      if (iVar8 != 0) {
        func_00664230((undefined4 *)(param_1 + 0x8bc),2);
      }
    }
    return 0;
  }
  return func_004CF478(*(int *)(*(int *)(param_1 + 0xa0c) + 0x18),0);
}

