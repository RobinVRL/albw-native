#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern float DAT_0042d1ec;
extern float DAT_0042d1f0;
extern float DAT_0042d1f4;

// USA 0042D064 <- EU 0042D044 (Ghidra, non-matching)
// GLOBAL DAT_0042d1ec float
// GLOBAL DAT_0042d1f0 float
// GLOBAL DAT_0042d1f4 float

undefined4 func_0042D064(int param_1,int param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_4c (*(float *)(albw_frame + 0x4))
  #define uStack_48 (*(undefined4 *)(albw_frame + 0x8))
  #define uStack_44 (*(undefined4 *)(albw_frame + 0xc))
  #define local_40 (*(float *)(albw_frame + 0x10))
  #define uStack_3c (*(undefined4 *)(albw_frame + 0x14))
  #define uStack_38 (*(undefined4 *)(albw_frame + 0x18))
  #define local_34 (*(float *)(albw_frame + 0x1c))
  #define local_30 (*(float *)(albw_frame + 0x20))
  #define local_2c (*(float *)(albw_frame + 0x24))
  #define local_28 (*(float *)(albw_frame + 0x28))
  #define uStack_24 (*(undefined4 *)(albw_frame + 0x2c))
  #define uStack_20 (*(undefined4 *)(albw_frame + 0x30))
  func_00115C70(&local_34,(float *)(param_1 + 4),(float *)(param_2 + 4));
  fVar2 = DAT_0042d1f0;
  fVar4 = DAT_0042d1ec;
  fVar5 = SQRT(local_34 * local_34 + local_2c * local_2c);
  fVar3 = *(float *)(param_1 + 100) + *(float *)(param_2 + 100);
  if (fVar5 < fVar3) {
    fVar1 = local_30;
    if (local_30 <= DAT_0042d1ec) {
      fVar1 = -local_30;
    }
    if (fVar1 < *(float *)(param_1 + 0x68) + *(float *)(param_2 + 0x68)) {
      if (param_3 != 0) {
        *(float *)(param_3 + 0x1c) = fVar3 - fVar5;
        if (fVar5 <= fVar4) {
          *(float *)(param_3 + 4) = fVar4;
          *(float *)(param_3 + 8) = fVar4;
          *(float *)(param_3 + 0xc) = fVar2;
        }
        else {
          local_30 = fVar4;
          func_00115D70(&local_4c,&local_34,fVar2 / fVar5);
          *(float *)(param_3 + 4) = local_4c;
          *(undefined4 *)(param_3 + 8) = uStack_48;
          *(undefined4 *)(param_3 + 0xc) = uStack_44;
        }
        fVar4 = *(float *)(param_1 + 8);
        fVar6 = *(float *)(param_2 + 8);
        fVar2 = fVar4 - *(float *)(param_1 + 0x68);
        fVar5 = fVar4 + *(float *)(param_1 + 0x68);
        fVar3 = fVar6 - *(float *)(param_2 + 0x68);
        fVar1 = fVar6 + *(float *)(param_2 + 0x68);
        if (fVar3 <= fVar2) {
          if (fVar1 < fVar5) {
            fVar4 = fVar2 + (fVar1 - fVar2) * DAT_0042d1f4;
          }
        }
        else {
          fVar4 = fVar6;
          if (fVar5 < fVar1) {
            fVar4 = fVar3 + (fVar5 - fVar3) * DAT_0042d1f4;
          }
        }
        *(undefined4 *)(param_3 + 0x10) = *(undefined4 *)(param_2 + 4);
        *(undefined4 *)(param_3 + 0x14) = *(undefined4 *)(param_2 + 8);
        *(undefined4 *)(param_3 + 0x18) = *(undefined4 *)(param_2 + 0xc);
        func_00115D70(&local_28,(float *)(param_3 + 4),*(float *)(param_2 + 100));
        local_40 = local_28;
        uStack_3c = uStack_24;
        uStack_38 = uStack_20;
        func_00115C54((float *)(param_3 + 0x10),(float *)(param_3 + 0x10),&local_40);
        *(float *)(param_3 + 0x14) = fVar4;
      }
      return 1;
    }
  }
  return 0;
}

