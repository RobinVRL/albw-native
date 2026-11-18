#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern float func_00115DC8(float *param_1);
extern int func_004F6DA0(int param_1);
extern int func_004F707C(int param_1,float *param_2,float *param_3,uint param_4,uint param_5);
extern int func_00520FC0(void);
extern int func_0058A8F0(int param_1);
extern int func_0065D630(undefined4 *param_1,undefined1 param_2);
extern undefined4 DAT_0020b24c;
extern float DAT_0020b250;
extern float DAT_0020b254;
extern float DAT_0020b258;
extern undefined4 DAT_0020b25c;

// USA 0020B140 <- EU 0020B140 (Ghidra, non-matching)
// GLOBAL DAT_0020b24c undefined4
// GLOBAL DAT_0020b250 float
// GLOBAL DAT_0020b254 float
// GLOBAL DAT_0020b258 float
// GLOBAL DAT_0020b25c undefined4

undefined4 func_0020B140(int param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float *pfVar4;
  uint uVar5;
  uint in_fpscr;
  float fVar6;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_34 (*(float *)(albw_frame + 0xc))
  #define local_30 (*(undefined4 *)(albw_frame + 0x10))
  #define local_2c (*(undefined4 *)(albw_frame + 0x14))
  #define local_28 (*(float *)(albw_frame + 0x18))
  #define uStack_24 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_20 (*(float *)(albw_frame + 0x20))
  #define local_1c ((float *)(albw_frame + 0x24))
  #define uStack_14 (*(undefined4 *)(albw_frame + 0x2c))
  iVar3 = func_0058A8F0(param_1);
  if (iVar3 != 0) {
    return func_0065D630((undefined4 *)(param_1 + 0x8bc),0x27);
  }
  uVar5 = *(uint *)(param_1 + 0x8bc);
  if (uVar5 < 0x19) {
    if (0x14 < uVar5) {
      uVar5 = 0x14;
    }
    pfVar4 = (float *)func_00520FC0();
    func_00115C70(local_1c,pfVar4,(float *)(param_1 + 0x3d0));
    local_34 = local_1c[0];
    local_2c = uStack_14;
    local_30 = DAT_0020b24c;
    func_00115DC8(&local_34);
    fVar2 = DAT_0020b254;
    fVar1 = DAT_0020b250;
    iVar3 = *(int *)(*(int *)(param_1 + 0x8f0) + 0x2c);
    fVar6 = (float)VectorUnsignedToFloat(uVar5,(byte)(in_fpscr >> 0x15) & 3);
    *(float *)(iVar3 + 0x24) = local_34;
    *(undefined4 *)(iVar3 + 0x28) = local_30;
    *(undefined4 *)(iVar3 + 0x2c) = local_2c;
    local_28 = (*(float *)(param_1 + 0x4c4) + fVar6 * fVar1 * (fVar2 - *(float *)(param_1 + 0x4c4)))
               * DAT_0020b258;
    uStack_24 = DAT_0020b25c;
    local_20 = local_28;
    return func_004F707C(*(int *)(param_1 + 0x8f0),(float *)(param_1 + 0x3d0),&local_28,0,0);
  }
  return func_004F6DA0(*(int *)(param_1 + 0x8f0));
}

