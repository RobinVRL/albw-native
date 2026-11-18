#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern uint DAT_001ea95c;
extern float DAT_001ea960;
extern int DAT_001ea964;
extern float DAT_001ea968;

// USA 001EA738 <- EU 001EA738 (Ghidra, non-matching)
// GLOBAL DAT_001ea95c uint
// GLOBAL DAT_001ea960 float
// GLOBAL DAT_001ea964 int
// GLOBAL DAT_001ea968 float

int func_001EA738(undefined4 param_1,int *param_2,int param_3,float *param_4,float fparam_0)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar10;
  longlong lVar9;
  float fVar11;
  float fVar12;
  ulonglong uVar13;
  _Alignas(8) unsigned char albw_frame[0x80];
  #define local_80 (*(float *)(albw_frame + 0x0))
  #define fStack_7c (*(float *)(albw_frame + 0x4))
  #define fStack_78 (*(float *)(albw_frame + 0x8))
  #define local_68 (*(float * *)(albw_frame + 0x18))
  #define local_64 (*(float *)(albw_frame + 0x1c))
  #define fStack_60 (*(float *)(albw_frame + 0x20))
  #define fStack_5c (*(float *)(albw_frame + 0x24))
  #define local_48 (*(float *)(albw_frame + 0x38))
  #define local_44 (*(float *)(albw_frame + 0x3c))
  #define local_40 (*(float *)(albw_frame + 0x40))
  iVar1 = DAT_001ea964;
  lVar9 = (ulonglong)(uint)ALBW_AS_U32(fparam_0) << 0x20;
  iVar4 = param_3 - *(int *)(param_3 + 0xc);
  iVar3 = *(int *)(param_3 + 0xc);
  iVar2 = *(int *)(param_3 + 4) - iVar3;
  if (iVar2 != iVar4) {
    uVar13 = (ulonglong)DAT_001ea95c;
    fVar11 = DAT_001ea960;
    fVar12 = DAT_001ea968;
    do {
      fVar7 = *(float *)(iVar2 + 0x30);
      fVar6 = *(float *)(iVar2 + 0x34);
      fVar5 = *(float *)(iVar2 + 0x38);
      fVar10 = ALBW_AS_F32(((ulonglong)lVar9 >> 0x20));
      fVar8 = param_4[3] * fVar7 + param_4[4] * fVar6 + param_4[5] * fVar5;
      if ((fVar8 <= fVar11) && (iVar1 <= (int)ALBW_AS_U32(-fVar8))) {
        fVar8 = param_4[3] * fVar7 + param_4[4] * fVar6 + param_4[5] * fVar5;
        if ((fVar8 < ALBW_AS_F32(uVar13)) || (fVar12 < fVar8)) {
          fVar8 = ((fVar7 * *(float *)(iVar2 + 0x24) + fVar6 * *(float *)(iVar2 + 0x28) +
                   fVar5 * *(float *)(iVar2 + 0x2c)) -
                  (fVar7 * *param_4 + fVar6 * param_4[1] + fVar5 * param_4[2])) / fVar8;
          lVar9 = CONCAT44(fVar10,fVar8);
          if (((int)ALBW_AS_U32((fVar8 - fVar10)) <= iVar1) && (fVar11 <= fVar8)) {
            local_68 = param_4;
            func_00115D70(&local_48,param_4 + 3,fVar8);
            local_64 = local_48;
            fStack_60 = local_44;
            fStack_5c = local_40;
            func_00115C54(&local_48,local_68,&local_64);
            local_80 = local_48;
            fStack_7c = local_44;
            fStack_78 = local_40;
            func_00115C70(&local_48,&local_80,(float *)(iVar2 + 0x24));
            if (((int)ALBW_AS_U32((local_48 * *(float *)(iVar2 + 0x3c) + local_44 * *(float *)(iVar2 + 0x40) +
                      local_40 * *(float *)(iVar2 + 0x44))) <= iVar1) &&
               ((int)ALBW_AS_U32((local_48 * *(float *)(iVar2 + 0x48) + local_44 * *(float *)(iVar2 + 0x4c) +
                     local_40 * *(float *)(iVar2 + 0x50))) <= iVar1)) {
              if ((local_48 * *(float *)(iVar2 + 0x54) + local_44 * *(float *)(iVar2 + 0x58) +
                   local_40 * *(float *)(iVar2 + 0x5c) <= *(float *)(iVar2 + 0x68) + fVar12) &&
                 ((int)lVar9 != -0x800001)) {
                *param_2 = (int)lVar9;
                return iVar2;
              }
            }
          }
        }
      }
      iVar2 = *(int *)(iVar2 + iVar3 + 4) - iVar3;
    } while (iVar2 != iVar4);
  }
  return 0;
}

