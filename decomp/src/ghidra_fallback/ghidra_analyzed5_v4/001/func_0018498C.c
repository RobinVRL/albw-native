#include "ghidra_types.h"

extern int func_001846B0(int param_1,undefined4 *param_2,undefined4 param_3,uint param_4,float fparam_0);
extern int func_00184B1C(int param_1,float *param_2);
extern float DAT_00184a78;
extern uint DAT_00184a7c;
extern uint DAT_00184a80;

// USA 0018498C <- EU 0018498C (Ghidra, non-matching)
// GLOBAL DAT_00184a78 float
// GLOBAL DAT_00184a7c uint
// GLOBAL DAT_00184a80 uint

void func_0018498C(float *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  float *pfVar1;
  uint uVar2;
  bool bVar3;
  float *pfVar4;
  int iVar5;
  uint uVar6;
  float *pfVar7;
  undefined2 uVar8;
  float fVar9;
  float fVar10;
  ulonglong uVar11;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 (*(float *)(albw_frame + 0x8))
  #define local_34 (*(float *)(albw_frame + 0xc))
  #define local_30 (*(float *)(albw_frame + 0x10))
  uVar8 = 0;
  param_1[0x20d] = DAT_00184a78;
  uVar2 = DAT_00184a7c;
  pfVar4 = (float *)(int)*(short *)(param_1 + 0x27d);
  if ((0 < (int)pfVar4) && (uVar6 = (int)pfVar4 - 1, -1 < (int)uVar6)) {
    uVar11 = (ulonglong)DAT_00184a80;
    pfVar7 = param_1 + 0x283;
    fVar9 = ALBW_AS_F32((DAT_00184a7c | DAT_00184a7c << 0x1d));
    do {
      pfVar1 = pfVar7;
      if (uVar6 < 0x1e) {
        pfVar4 = pfVar7 + uVar6 * 2;
        pfVar1 = pfVar7 + uVar6 * 2;
      }
      local_38 = *pfVar1;
      if (uVar6 >= 0x1e) {
        pfVar4 = pfVar7;
      }
      local_34 = param_1[0xf5];
      local_30 = pfVar4[1];
      fVar10 = local_34 - param_1[0xf5];
      pfVar4 = param_1;
      if (((int)ALBW_AS_U32(fVar10) <= (int)uVar2) && ((uint)ALBW_AS_U32(fVar10) <= (uint)ALBW_AS_U32(fVar9))) {
        bVar3 = func_001846B0((int)param_1,&local_38,ALBW_AS_U32(fVar10),param_4,ALBW_AS_F32(uVar11));
        pfVar4 = (float *)(uint)bVar3;
        if (pfVar4 == (float *)0x0) {
          iVar5 = func_00184B1C((int)param_1,&local_38);
          pfVar4 = (float *)0x0;
          if (iVar5 != 0) {
            uVar8 = (undefined2)uVar6;
            break;
          }
        }
      }
      uVar6 = uVar6 - 1;
    } while (-1 < (int)uVar6);
  }
  *(undefined2 *)((int)param_1 + 0x9f6) = uVar8;
  return;
}

