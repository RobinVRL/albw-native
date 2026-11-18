#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern float func_00115DC8(float *param_1);
extern int func_00386CA8(uint param_1);
extern int func_004356B4(int *param_1);
extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern float DAT_003860d4;
extern float DAT_003860d8;
extern float DAT_003860dc;
extern float DAT_003860e0;
extern int DAT_003860e4;
extern int *DAT_003860e8;
extern float DAT_003860ec;
extern float DAT_003860f0;
extern float DAT_003860f4;

// USA 00385EE0 <- EU 00385EBC (Ghidra, non-matching)
// GLOBAL DAT_003860d4 float
// GLOBAL DAT_003860d8 float
// GLOBAL DAT_003860dc float
// GLOBAL DAT_003860e0 float
// GLOBAL DAT_003860e4 int
// GLOBAL DAT_003860e8 int *
// GLOBAL DAT_003860ec float
// GLOBAL DAT_003860f0 float
// GLOBAL DAT_003860f4 float

int func_00385EE0(uint param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define local_68 (*(float *)(albw_frame + 0x8))
  #define local_64 (*(float *)(albw_frame + 0xc))
  #define fStack_60 (*(float *)(albw_frame + 0x10))
  #define local_5c (*(float *)(albw_frame + 0x14))
  #define local_58 (*(float *)(albw_frame + 0x18))
  #define fStack_54 (*(float *)(albw_frame + 0x1c))
  #define local_50 (*(float *)(albw_frame + 0x20))
  #define local_4c (*(undefined4 *)(albw_frame + 0x24))
  #define local_48 (*(undefined4 *)(albw_frame + 0x28))
  #define local_44 (*(float *)(albw_frame + 0x2c))
  #define fStack_40 (*(float *)(albw_frame + 0x30))
  #define uStack_3c (*(undefined4 *)(albw_frame + 0x34))
  #define local_34 (*(float *)(albw_frame + 0x3c))
  #define local_30 (*(undefined4 *)(albw_frame + 0x40))
  #define local_2c (*(undefined4 *)(albw_frame + 0x44))
  #define local_28 (*(float *)(albw_frame + 0x48))
  #define fStack_24 (*(float *)(albw_frame + 0x4c))
  #define local_20 (*(float *)(albw_frame + 0x50))
  iVar4 = *(int *)(*(int *)(*(int *)(*(int *)(param_1 + 4) + 0x8d4) + 0x24) + 0x14) +
          *(int *)(*(int *)(param_1 + 4) + 0x8f4) * 0x30;
  iVar2 = *(int *)(*(int *)(*(int *)(param_1 + 0x3c) + 0x24) + 0x14) +
          *(int *)(param_1 + 0x130) * 0x30;
  local_50 = *(float *)(iVar4 + 0xc);
  local_4c = *(undefined4 *)(iVar4 + 0x1c);
  local_48 = *(undefined4 *)(iVar4 + 0x2c);
  local_34 = *(float *)(iVar2 + 0xc);
  local_30 = *(undefined4 *)(iVar2 + 0x1c);
  local_2c = *(undefined4 *)(iVar2 + 0x2c);
  func_00115C70(&local_5c,&local_34,&local_50);
  local_44 = local_5c;
  fStack_40 = local_58;
  uStack_3c = ALBW_AS_U32(fStack_54);
  func_00115DC8(&local_44);
  if (*(char *)(*(int *)(*(int *)(param_1 + 4) + 0x8bc) + 9) == '\0') {
    func_00115D70(&local_28,&local_44,DAT_003860f4);
    local_5c = local_28;
    local_58 = fStack_24;
    fStack_54 = local_20;
    func_00115C54(&local_28,&local_50,&local_5c);
  }
  else {
    func_00115D70(&local_28,&local_44,DAT_003860d4);
    local_5c = local_28;
    local_58 = fStack_24;
    fStack_54 = local_20;
    func_00115C54(&local_28,&local_50,&local_5c);
  }
  iVar2 = DAT_003860e4;
  fVar9 = DAT_003860d8;
  fVar10 = *(float *)(*(int *)(param_1 + 4) + 0x3d4);
  *(float *)(param_1 + 0x4c) = local_28;
  fVar8 = DAT_003860dc;
  *(float *)(param_1 + 0x50) = fVar10 + fVar9;
  *(float *)(param_1 + 0x54) = local_20;
  fVar8 = *(float *)(iVar2 + *(char *)(param_1 + 0x3a) * 0x20 + 4) * *(float *)(param_1 + 0x148) *
          fVar8;
  fVar9 = fVar8 * DAT_003860e0;
  *(float *)(param_1 + 0xa0) = fVar8;
  *(float *)(param_1 + 0xa4) = fVar9;
  *(float *)(param_1 + 0xa8) = fVar8;
  func_004356B4((int *)(param_1 + 0x48));
  piVar1 = DAT_003860e8;
  iVar3 = (int)*(char *)(param_1 + 0x3a);
  iVar2 = iVar3 + 1;
  bVar6 = iVar3 == -1;
  iVar4 = iVar3;
  if (!bVar6) {
    iVar2 = *(int *)(param_1 + 300);
    iVar4 = iVar2;
  }
  bVar7 = iVar4 == 0;
  bVar5 = bVar6 && SCARRY4(iVar3,1);
  if ((bVar6 || bVar7) || iVar2 < 0 != bVar5) {
    iVar4 = 0;
  }
  if ((!bVar6 && !bVar7) && iVar2 < 0 == bVar5) {
    iVar4 = 1;
    func_004D80A4(&local_68,**(uint **)(*DAT_003860e8 + 0x24),DAT_003860ec);
    local_64 = DAT_003860f0;
    fVar9 = DAT_003860f0;
    func_00115C70(&local_58,*(float **)(*piVar1 + 0x1c),(float *)(*(int *)(param_1 + 4) + 0x3d0));
    if (local_58 * local_68 + fStack_54 * local_64 + local_50 * fStack_60 < fVar9) {
      iVar4 = func_00386CA8(param_1);
    }
  }
  return iVar4;
}

