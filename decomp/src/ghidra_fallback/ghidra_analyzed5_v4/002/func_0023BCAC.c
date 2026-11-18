#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00110848(int param_1);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern int func_00115D88(float *param_1,float *param_2,float fparam_0);
extern float func_00115DC8(float *param_1);
extern int func_004A1B9C(int *param_1,int param_2,uint *param_3);
extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern int func_005841A8(int param_1,undefined4 param_2,int *param_3);
extern int DAT_0023bfc0;
extern int *DAT_0023bfc4;
extern int *DAT_0023bfc8;
extern int *DAT_0023bfcc;
extern float DAT_0023bfd0;
extern float DAT_0023bfd4;
extern float DAT_0023bfd8;
extern float DAT_0023bfdc;
extern float DAT_0023bfe0;
extern float DAT_0023bfe4;
extern float DAT_0023bfe8;
extern undefined DAT_0023bfec;
extern int *DAT_0023bff0;
extern undefined4 *DAT_0023bff4;
extern int DAT_0023bff8;
extern uint *DAT_0023bffc;
extern undefined4 *DAT_0023c000;
extern undefined4 DAT_0023c004;
extern float DAT_0023c008;
extern int DAT_0023c00c;

// USA 0023BCAC <- EU 0023BCAC (Ghidra, non-matching)
// GLOBAL DAT_0023bfc0 int
// GLOBAL DAT_0023bfc4 int *
// GLOBAL DAT_0023bfc8 int *
// GLOBAL DAT_0023bfcc int *
// GLOBAL DAT_0023bfd0 float
// GLOBAL DAT_0023bfd4 float
// GLOBAL DAT_0023bfd8 float
// GLOBAL DAT_0023bfdc float
// GLOBAL DAT_0023bfe0 float
// GLOBAL DAT_0023bfe4 float
// GLOBAL DAT_0023bfe8 float
// GLOBAL DAT_0023bfec undefined
// GLOBAL DAT_0023bff0 int *
// GLOBAL DAT_0023bff4 undefined4 *
// GLOBAL DAT_0023bff8 int
// GLOBAL DAT_0023bffc uint *
// GLOBAL DAT_0023c000 undefined4 *
// GLOBAL DAT_0023c004 undefined4
// GLOBAL DAT_0023c008 float
// GLOBAL DAT_0023c00c int

undefined4 func_0023BCAC(int param_1,int param_2,int param_3)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int *piVar6;
  uint in_fpscr;
  float fVar7;
  float fVar8;
  float fVar9;
  _Alignas(8) unsigned char albw_frame[0x90];
  #define local_88 (*(int *)(albw_frame + 0x8))
  #define local_84 (*(float *)(albw_frame + 0xc))
  #define local_80 (*(float *)(albw_frame + 0x10))
  #define local_7c (*(float *)(albw_frame + 0x14))
  #define local_78 (*(float *)(albw_frame + 0x18))
  #define local_74 (*(float *)(albw_frame + 0x1c))
  #define local_70 (*(float *)(albw_frame + 0x20))
  #define local_6c (*(float *)(albw_frame + 0x24))
  #define uStack_68 (*(undefined4 *)(albw_frame + 0x28))
  #define fStack_64 (*(float *)(albw_frame + 0x2c))
  #define local_60 (*(float *)(albw_frame + 0x30))
  #define uStack_5c (*(undefined4 *)(albw_frame + 0x34))
  #define fStack_58 (*(float *)(albw_frame + 0x38))
  #define local_54 (*(float *)(albw_frame + 0x3c))
  #define uStack_50 (*(undefined4 *)(albw_frame + 0x40))
  #define fStack_4c (*(float *)(albw_frame + 0x44))
  #define local_48 (*(float *)(albw_frame + 0x48))
  #define uStack_44 (*(undefined4 *)(albw_frame + 0x4c))
  #define fStack_40 (*(float *)(albw_frame + 0x50))
  #define local_38 (*(float *)(albw_frame + 0x58))
  #define local_34 (*(float *)(albw_frame + 0x5c))
  #define local_30 (*(undefined4 *)(albw_frame + 0x60))
  #define local_2c (*(float *)(albw_frame + 0x64))
  #define uStack_28 (*(undefined4 *)(albw_frame + 0x68))
  #define local_24 (*(float *)(albw_frame + 0x6c))
  if (*(char *)(param_1 + DAT_0023bfc0) == '\0') {
    iVar3 = *(int *)(param_1 + 0x440) + -0x23;
    uVar5 = 5;
  }
  else {
    iVar3 = *(int *)(param_1 + 0x440) + -0x1a;
    uVar5 = 3;
  }
  fVar8 = (float)VectorSignedToFloat(iVar3,(byte)(in_fpscr >> 0x15) & 3);
  fVar7 = (float)VectorUnsignedToFloat(uVar5,(byte)(in_fpscr >> 0x15) & 3);
  uVar1 = in_fpscr & 0xfffffff | (uint)(fVar8 < fVar7) << 0x1f | (uint)(fVar8 == fVar7) << 0x1e;
  bVar2 = (byte)(uVar1 >> 0x18);
  if (((bool)(bVar2 >> 6 & 1) || (bool)(bVar2 >> 7) != (NAN(fVar8) || NAN(fVar7))) &&
     (fVar8 = (float)VectorSignedToFloat(iVar3,(byte)(uVar1 >> 0x15) & 3), -fVar7 <= fVar8)) {
    piVar6 = DAT_0023bfc4;
    if (*(char *)(param_1 + DAT_0023bfc0) == '\0') {
      piVar6 = DAT_0023bfc8;
    }
    fVar7 = (*(float *)(param_3 + 4) - DAT_0023bfd4) / DAT_0023bfe0;
    fVar9 = fVar7 * fVar7 - fVar7;
    fVar8 = fVar9 * fVar7;
    fVar7 = fVar7 * fVar7 - fVar8 * DAT_0023bfe0;
    fVar9 = (DAT_0023bfd8 - fVar7 * DAT_0023bfd8) + fVar7 * DAT_0023bfdc +
            (fVar8 - fVar9) * DAT_0023bfd0 + fVar8 * DAT_0023bfd0;
    fVar7 = DAT_0023bfd0;
    fVar8 = DAT_0023bfe0;
    func_004D80A4(&local_38,(*piVar6 * iVar3 + -0x80000000) - *DAT_0023bfcc,DAT_0023bfe4);
    local_34 = fVar7 + fVar9 * DAT_0023bfe8;
    *(float *)(param_1 + 0x3dc) = local_38;
    *(float *)(param_1 + 0x3e0) = local_34;
    *(undefined4 *)(param_1 + 0x3e4) = local_30;
    piVar6 = (int *)(param_1 + 0x424);
    *(undefined4 *)(param_1 + 0x3d8) = *(undefined4 *)(param_2 + 8);
    if (*(int *)(param_1 + 0x344) == 0) {
      *piVar6 = 0;
      *(undefined4 *)(param_1 + 0x428) = 0;
    }
    else {
      iVar3 = *piVar6;
      if ((iVar3 != 0) && (*(int *)(iVar3 + 0x1c) == *(int *)(param_1 + 0x428))) {
        func_00110848(iVar3);
      }
      func_004A1B9C(&local_88,*(int *)(param_1 + 0x344),(uint *)&DAT_0023bfec);
      *piVar6 = local_88;
      *(float *)(param_1 + 0x428) = local_84;
    }
    *(undefined1 *)(param_1 + 0x434) = 1;
    puVar4 = (undefined4 *)
             func_005841A8(*DAT_0023bff0,*DAT_0023bff4,*(int **)(DAT_0023bff8 + *DAT_0023bff0));
    puVar4 = (undefined4 *)*puVar4;
    if (((*DAT_0023bffc & 1) == 0) && (iVar3 = func_00100174((int *)DAT_0023bffc), iVar3 != 0)) {
      *DAT_0023c000 = DAT_0023c004;
    }
    if ((puVar4 == (undefined4 *)0x0) ||
       (iVar3 = (**(code **)*puVar4)(puVar4,DAT_0023c000), iVar3 == 0)) {
      puVar4 = (undefined4 *)0x0;
    }
    if (puVar4 != (undefined4 *)0x0) {
      func_00115C70(&local_2c,(float *)(puVar4 + 0xf4),(float *)(param_1 + 0x3d0));
      local_48 = local_2c;
      uStack_44 = uStack_28;
      fStack_40 = local_24;
      func_00115D70(&local_2c,(float *)(puVar4 + 0xf7),*(float *)(param_1 + 0x3e0));
      local_54 = local_2c;
      uStack_50 = uStack_28;
      fStack_4c = local_24;
      func_00115D70(&local_2c,&local_54,fVar8);
      local_60 = local_2c;
      uStack_5c = uStack_28;
      fStack_58 = local_24;
      func_00115D88(&local_2c,&local_60,DAT_0023c008);
      local_6c = local_2c;
      uStack_68 = uStack_28;
      fStack_64 = local_24;
      func_00115C54(&local_2c,&local_48,&local_6c);
      local_84 = local_2c;
      local_7c = local_24;
      local_80 = fVar7;
      func_00115DC8(&local_84);
      local_78 = *(float *)(param_1 + 0x3dc);
      local_70 = *(float *)(param_1 + 0x3e4);
      local_74 = fVar7;
      func_00115DC8(&local_78);
      if (DAT_0023c00c <= (int)ALBW_AS_U32((local_78 * local_84 + local_74 * local_80 + local_70 * local_7c))) {
        *(undefined4 *)(param_1 + 0x438) = puVar4[0xb3];
      }
    }
    return 1;
  }
  return 0;
}

