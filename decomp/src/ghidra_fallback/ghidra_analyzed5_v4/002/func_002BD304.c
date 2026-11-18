#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern float func_00115DC8(float *param_1);
extern int func_002BC6B0(int param_1);
extern int func_002BDDA4(int param_1);
extern int func_00532554(int param_1,uint param_2);
extern int func_00662A14(undefined4 *param_1,undefined1 param_2);
extern int DAT_002bd400;
extern float DAT_002bd404;

// USA 002BD304 <- EU 002BD2E0 (Ghidra, non-matching)
// GLOBAL DAT_002bd400 int
// GLOBAL DAT_002bd404 float

undefined4 func_002BD304(int param_1)

{
  undefined4 *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(float *)(albw_frame + 0x8))
  #define uStack_14 (*(undefined4 *)(albw_frame + 0xc))
  #define uStack_10 (*(undefined4 *)(albw_frame + 0x10))
  puVar1 = func_002BDDA4(param_1);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)func_00532554((int)puVar1,(int)*(short *)(param_1 + 0x2e));
    *(undefined4 *)(param_1 + 0x920) = *puVar1;
    *(undefined4 *)(param_1 + 0x924) = puVar1[1];
    *(undefined4 *)(param_1 + 0x928) = puVar1[2];
  }
  func_002BC6B0(param_1);
  fVar2 = *(float *)(param_1 + 0x3d0) - *(float *)(param_1 + 0x920);
  fVar4 = *(float *)(param_1 + 0x3d4) - *(float *)(param_1 + 0x924);
  fVar3 = *(float *)(param_1 + 0x3d8) - *(float *)(param_1 + 0x928);
  if ((int)ALBW_AS_U32(SQRT(fVar2 * fVar2 + fVar4 * fVar4 + fVar3 * fVar3)) < DAT_002bd400) {
    *(float *)(param_1 + 0x3d0) = *(float *)(param_1 + 0x920);
    *(undefined4 *)(param_1 + 0x3d4) = *(undefined4 *)(param_1 + 0x924);
    *(undefined4 *)(param_1 + 0x3d8) = *(undefined4 *)(param_1 + 0x928);
    func_00662A14((undefined4 *)(param_1 + 0x8bc),2);
  }
  else {
    func_00115C70(&local_18,(float *)(param_1 + 0x920),(float *)(param_1 + 0x3d0));
    *(float *)(param_1 + 0x3dc) = local_18;
    *(undefined4 *)(param_1 + 0x3e0) = uStack_14;
    *(undefined4 *)(param_1 + 0x3e4) = uStack_10;
    func_00115DC8((float *)(param_1 + 0x3dc));
    func_00115D70((float *)(param_1 + 0x3dc),(float *)(param_1 + 0x3dc),DAT_002bd404);
    puVar1 = func_002BDDA4(param_1);
    if (puVar1 != (undefined4 *)0x0) {
      return func_00115C54((float *)(param_1 + 0x3dc),(float *)(param_1 + 0x3dc),(float *)(puVar1 + 0xf7));
    }
  }
  return 0;
}

