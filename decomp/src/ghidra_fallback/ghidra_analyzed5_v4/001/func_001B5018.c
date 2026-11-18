#include "ghidra_types.h"

extern int func_001B546C(int param_1);
extern int func_001B55BC(int param_1,float *param_2,int param_3,float fparam_0);
extern float func_0049EF80(float *param_1,float *param_2,float *param_3);
extern int func_00520FC0(void);
extern int func_005291BC(int param_1,float *param_2,float fparam_0);
extern int func_005292FC(int param_1);
extern int func_0065B29C(undefined4 *param_1,undefined1 param_2);
extern float DAT_001b51e8;
extern int DAT_001b51ec;
extern int DAT_001b51f0;
extern undefined4 DAT_001b51f4;
extern float DAT_001b51f8;
extern float DAT_001b51fc;

// USA 001B5018 <- EU 001B5018 (Ghidra, non-matching)
// GLOBAL DAT_001b51e8 float
// GLOBAL DAT_001b51ec int
// GLOBAL DAT_001b51f0 int
// GLOBAL DAT_001b51f4 undefined4
// GLOBAL DAT_001b51f8 float
// GLOBAL DAT_001b51fc float

undefined4 func_001B5018(int param_1)

{
  undefined4 uVar1;
  float *pfVar2;
  int iVar3;
  undefined4 *puVar4;
  float fVar5;
  float fVar6;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 (*(float *)(albw_frame + 0x8))
  #define uStack_34 (*(undefined4 *)(albw_frame + 0xc))
  #define uStack_30 (*(undefined4 *)(albw_frame + 0x10))
  #define local_2c (*(undefined4 *)(albw_frame + 0x14))
  #define uStack_28 (*(undefined4 *)(albw_frame + 0x18))
  #define local_24 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_20 (*(float *)(albw_frame + 0x20))
  #define local_1c (*(float *)(albw_frame + 0x24))
  #define fStack_18 (*(float *)(albw_frame + 0x28))
  #define local_14 (*(float *)(albw_frame + 0x2c))
  pfVar2 = (float *)func_00520FC0();
  iVar3 = DAT_001b51ec;
  fVar5 = DAT_001b51e8;
  local_1c = *pfVar2;
  fStack_18 = pfVar2[1];
  local_14 = pfVar2[2];
  *(float *)(param_1 + 0x950) = DAT_001b51e8;
  func_001B55BC(param_1,&local_1c,iVar3,fVar5);
  uVar1 = DAT_001b51f4;
  if (*(uint *)(param_1 + 0x934) <= *(uint *)(param_1 + 0x930)) {
    fVar5 = *(float *)(param_1 + 0x3d0) - local_1c;
    fVar6 = *(float *)(param_1 + 0x3d8) - local_14;
    if (DAT_001b51f0 < (int)ALBW_AS_U32((fVar5 * fVar5 + fVar6 * fVar6))) {
      return func_0065B29C((undefined4 *)(param_1 + 0x8bc),0);
    }
    *(undefined4 *)(param_1 + 0x934) = 0xb4;
    *(undefined4 *)(param_1 + 0x938) = uVar1;
    *(undefined4 *)(param_1 + 0x930) = 0;
    goto LAB_001b51d8;
  }
  *(uint *)(param_1 + 0x930) = *(uint *)(param_1 + 0x930) + 1;
  if (*(int *)(param_1 + 0x944) != 0) {
    iVar3 = *(int *)(param_1 + 0x944) + -1;
    *(int *)(param_1 + 0x944) = iVar3;
    if (iVar3 != 0) goto LAB_001b51d8;
    puVar4 = func_005292FC(param_1);
    if (puVar4 != (undefined4 *)0x0) {
      local_38 = *(float *)(param_1 + 0x3d0);
      uStack_34 = *(undefined4 *)(param_1 + 0x3d4);
      uStack_30 = *(undefined4 *)(param_1 + 0x3d8);
      local_2c = puVar4[0xf4];
      uStack_28 = puVar4[0xf5];
      local_24 = puVar4[0xf6];
      pfVar2 = (float *)func_00520FC0();
      fVar5 = func_0049EF80(pfVar2,&local_38,&local_20);
      if (((DAT_001b51f8 < local_20) && ((int)ALBW_AS_U32(local_20) < 0x3f800000)) &&
         (fVar5 < *(float *)(param_1 + 0x94c) * *(float *)(param_1 + 0x94c))) {
        *(undefined4 *)(param_1 + 0x944) = 0x1e;
        goto LAB_001b51d8;
      }
    }
    if (*(int *)(param_1 + 0x944) != 0) goto LAB_001b51d8;
  }
  puVar4 = func_005292FC(param_1);
  if ((puVar4 != (undefined4 *)0x0) &&
     (iVar3 = func_005291BC(param_1,(float *)(puVar4 + 0xf4),DAT_001b51fc), iVar3 != 0)) {
    return func_0065B29C((undefined4 *)(param_1 + 0x8bc),5);
  }
LAB_001b51d8:
  return func_001B546C(param_1);
}

