#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_00169608(uint *param_1,uint param_2,int *param_3,int param_4);
extern int func_0016A02C(int param_1,int param_2,int *param_3,int param_4);
extern int func_0016A2FC(undefined4 *param_1,int param_2,undefined4 param_3,int param_4);
extern undefined8 func_003BBC74(int param_1,int *param_2,undefined4 param_3);
extern int func_0048E128(int param_1,int param_2,int param_3,int param_4);
extern int DAT_003bb8b0;
extern int DAT_003bb8c0;
extern float DAT_003bb8c4;
extern char s_SlitChange_003bb8b4[];
extern char s_SlitChange_bch_003bb8a0[];
extern char s_cf_003bb8a0[];

// USA 003BB774 <- EU 003BB750 (Ghidra, non-matching)
// GLOBAL DAT_003bb8b0 int
// GLOBAL DAT_003bb8c0 int
// GLOBAL DAT_003bb8c4 float
// GLOBAL s_cf_003bb8a0 string
// GLOBAL s_SlitChange_003bb8b4 string

undefined4 func_003BB774(int param_1,undefined4 param_2)

{
  byte bVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint in_fpscr;
  float fVar8;
  float fVar9;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(int *)(albw_frame + 0x8))
  #define local_24 (*(char * *)(albw_frame + 0xc))
  #define local_20 (*(int *)(albw_frame + 0x10))
  #define local_1c (*(undefined4 *)(albw_frame + 0x14))
  iVar5 = DAT_003bb8b0;
  local_24 = s_SlitChange_bch_003bb8a0;
  local_28 = DAT_003bb8b0;
  func_003BBC74(param_1,&local_28,param_2);
  iVar7 = **(int **)(*(int *)(param_1 + 500) + 0x50);
  puVar3 = (undefined4 *)func_0010BAB4(0xa8);
  puVar4 = (undefined4 *)0x0;
  if (puVar3 != (undefined4 *)0x0) {
    local_24 = s_SlitChange_003bb8b4;
    local_28 = iVar5;
    puVar4 = func_0016A2FC(puVar3,4,&local_28,1);
  }
  iVar2 = DAT_003bb8c0;
  uVar6 = 0;
  *(undefined4 **)(param_1 + 0x1f8) = puVar4;
  do {
    local_1c = *(undefined4 *)(iVar2 + uVar6 * 4);
    local_20 = iVar5;
    func_00169608(*(uint **)(param_1 + 0x1f8),uVar6,&local_20,iVar7);
    uVar6 = uVar6 + 1;
  } while ((int)uVar6 < 4);
  func_0016A02C(*(int *)(param_1 + 0x1f8),-1,(int *)0xffffffff,*(int *)(param_1 + 500));
  iVar5 = *(int *)(param_1 + 0x1f8);
  fVar8 = *(float *)(*(int *)**(undefined4 **)(iVar5 + 8) + 8);
  iVar7 = (int)fVar8;
  fVar9 = (float)VectorSignedToFloat(iVar7,(byte)(in_fpscr >> 0x15) & 3);
  uVar6 = in_fpscr & 0xfffffff | (uint)(fVar9 == fVar8) << 0x1e;
  if ((!SUB41(uVar6 >> 0x1e,0)) &&
     (uVar6 = in_fpscr & 0xfffffff | (uint)(DAT_003bb8c4 == fVar8) << 0x1e |
              (uint)(fVar8 <= DAT_003bb8c4) << 0x1d, bVar1 = (byte)(uVar6 >> 0x18),
     !(bool)(bVar1 >> 5 & 1) || (bool)(bVar1 >> 6))) {
    iVar7 = iVar7 + 1;
  }
  puVar4 = *(undefined4 **)(iVar5 + 8);
  if (2 < *(uint *)(iVar5 + 4)) {
    puVar4 = puVar4 + 2;
  }
  fVar8 = *(float *)(*(int *)*puVar4 + 8);
  iVar5 = (int)fVar8;
  fVar9 = (float)VectorSignedToFloat(iVar5,(byte)(uVar6 >> 0x15) & 3);
  if ((fVar9 != fVar8) && (DAT_003bb8c4 <= fVar8)) {
    iVar5 = iVar5 + 1;
  }
  return func_0048E128(param_1,iVar7,2,iVar5 << 1);
}

