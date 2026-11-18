#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int func_00188BE4(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4, float fparam_0);
extern int func_0019B04C(uint param_1);
extern int func_002DFF7C(undefined4 *param_1);
extern int func_004C43E0(int param_1,int *param_2);
extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern int func_00581D60(int param_1);
extern int func_0058A7D4(void);
extern float fRam00154eb4;
extern float fRam00154eb8;
extern undefined4 uRam00154eb0;
extern uint *DAT_00188cbc;
extern int *DAT_00188cc0;
extern int *DAT_00188cc4;

// USA 00154DA8 <- EU 00154DAC (Ghidra, non-matching)
// GLOBAL DAT_00188cbc uint *
// GLOBAL DAT_00188cc0 int *
// GLOBAL DAT_00188cc4 int *
// GLOBAL UNK_00154eb0 undefined4
// GLOBAL UNK_00154eb4 float
// GLOBAL UNK_00154eb8 float

/* WARNING: Removing unreachable block (ram,0x00188ca4) */

undefined4 func_00154DA8(int param_1)

{
  uint *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint in_fpscr;
  float fVar6;
  float fVar7;
  undefined8 in_d8;
  float fVar8;
  undefined8 in_d9;
  _Alignas(8) unsigned char albw_frame[0x2e0];
  #define iStack_2e0 (*(int *)(albw_frame + 0x0))
  #define uStack_2dc (*(undefined4 *)(albw_frame + 0x4))
  #define uStack_2d8 (*(undefined4 *)(albw_frame + 0x8))
  #define uStack_2d4 (*(undefined4 *)(albw_frame + 0xc))
  #define uStack_2c4 (*(undefined4 *)(albw_frame + 0x1c))
  #define uStack_2c0 (*(uint *)(albw_frame + 0x20))
  #define uStack_2bc (*(undefined4 *)(albw_frame + 0x24))
  #define uStack_2b8 (*(undefined2 *)(albw_frame + 0x28))
  #define uStack_2b6 (*(undefined2 *)(albw_frame + 0x2a))
  #define uStack_2b4 (*(undefined2 *)(albw_frame + 0x2c))
  #define fStack_29c (*(float *)(albw_frame + 0x44))
  #define uStack_298 (*(undefined4 *)(albw_frame + 0x48))
  #define uStack_294 (*(undefined4 *)(albw_frame + 0x4c))
  #define uStack_290 (*(undefined2 *)(albw_frame + 0x50))
  #define uStack_20 (*(undefined4 *)(albw_frame + 0x2c0))
  #define uStack_1c (*(undefined4 *)(albw_frame + 0x2c4))
  #define uStack_18 (*(undefined4 *)(albw_frame + 0x2c8))
  #define uStack_14 (*(undefined4 *)(albw_frame + 0x2cc))
  uStack_20 = (undefined4)in_d8;
  uStack_1c = (undefined4)((ulonglong)in_d8 >> 0x20);
  uStack_18 = (undefined4)in_d9;
  uStack_14 = (undefined4)((ulonglong)in_d9 >> 0x20);
  func_004FABDC(param_1,3,0,0);
  uVar4 = uRam00154eb0;
  *(undefined4 *)(param_1 + 0x3dc) = uRam00154eb0;
  *(undefined4 *)(param_1 + 0x3e0) = uVar4;
  *(undefined4 *)(param_1 + 0x3e4) = uVar4;
  puVar1 = (uint *)func_0058A7D4();
  fVar7 = fRam00154eb4;
  uVar2 = func_00111A64(puVar1);
  puVar3 = (undefined4 *)(param_1 + 0x8ec);
  fVar6 = (float)VectorUnsignedToFloat(uVar2,(byte)(in_fpscr >> 0x15) & 3);
  fVar8 = fRam00154eb8;
  func_00188BE4(puVar3,*(undefined4 *)(param_1 + 1000),3,*(undefined4 *)(param_1 + 0x2cc),
                fVar6 * fRam00154eb8 * fVar7 + fVar7);
  puVar1 = (uint *)func_0058A7D4();
  uVar2 = func_00111A64(puVar1);
  fVar6 = (float)VectorUnsignedToFloat(uVar2,(byte)(in_fpscr >> 0x15) & 3);
  fVar6 = fVar6 * fVar8 * fVar7 + fVar7;
  puVar1 = (uint *)func_0058A7D4();
  uVar2 = func_00111A64(puVar1);
  func_00188BE4(puVar3,uVar2,3,*(undefined4 *)(param_1 + 0x2cc),fVar6);
  puVar1 = (uint *)func_0058A7D4();
  uVar2 = func_00111A64(puVar1);
  fVar6 = (float)VectorUnsignedToFloat(uVar2,(byte)(in_fpscr >> 0x15) & 3);
  fVar7 = fVar6 * fVar8 * fVar7 + fVar7;
  puVar1 = (uint *)func_0058A7D4();
  uVar2 = func_00111A64(puVar1);
  uStack_18 = uStack_1c;
  uVar5 = *(undefined4 *)(param_1 + 0x2cc);
  uStack_1c = uStack_20;
  uStack_2c0 = 0;
  uStack_2bc = 0;
  uStack_2c4 = 0;
  uStack_298 = 0;
  uStack_294 = 0;
  uStack_20 = 0;
  func_002DFF7C(&iStack_2e0);
  iStack_2e0 = func_0019B04C(*DAT_00188cbc);
  uVar4 = func_00581D60(*DAT_00188cc0);
  uStack_290 = (undefined2)uVar4;
  uStack_2b8 = 1;
  uStack_2b6 = 2;
  uStack_2b4 = 3;
  uStack_2dc = *puVar3;
  uStack_2d8 = *(undefined4 *)(param_1 + 0x8f0);
  uStack_2d4 = *(undefined4 *)(param_1 + 0x8f4);
  uStack_2c0 = uVar2;
  fStack_29c = fVar7;
  uStack_294 = uVar5;
  return func_004C43E0(*DAT_00188cc4,&iStack_2e0);
}

