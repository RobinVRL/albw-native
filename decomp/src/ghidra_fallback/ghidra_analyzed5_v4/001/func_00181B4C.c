#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern int func_0048B330(float *param_1,float *param_2,float *param_3,float fparam_0);
extern void func_0048B740(float *param_1,uint param_2,uint param_3,uint param_4);
extern int func_00491C08(float *param_1,float *param_2);
extern int func_0052FBA0(int param_1,uint param_2);
extern int *DAT_00181d44;
extern uint *DAT_00181d48;
extern undefined4 *DAT_00181d4c;
extern undefined4 DAT_00181d50;
extern float DAT_00181d54;
extern float DAT_00181d58;

// USA 00181B4C <- EU 00181B4C (Ghidra, non-matching)
// GLOBAL DAT_00181d44 int *
// GLOBAL DAT_00181d48 uint *
// GLOBAL DAT_00181d4c undefined4 *
// GLOBAL DAT_00181d50 undefined4
// GLOBAL DAT_00181d54 float
// GLOBAL DAT_00181d58 float

void func_00181B4C(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  float *pfVar5;
  float *pfVar6;
  uint in_fpscr;
  float fVar7;
  float fVar8;
  _Alignas(8) unsigned char albw_frame[0x90];
  #define local_84 (*(float *)(albw_frame + 0xc))
  #define uStack_80 (*(undefined4 *)(albw_frame + 0x10))
  #define uStack_7c (*(undefined4 *)(albw_frame + 0x14))
  #define local_78 (*(float *)(albw_frame + 0x18))
  #define uStack_74 (*(undefined4 *)(albw_frame + 0x1c))
  #define uStack_70 (*(undefined4 *)(albw_frame + 0x20))
  #define local_64 (*(float *)(albw_frame + 0x2c))
  #define fStack_60 (*(float *)(albw_frame + 0x30))
  #define local_5c (*(float *)(albw_frame + 0x34))
  #define afStack_50 ((float *)(albw_frame + 0x40))
  #define local_40 (*(float *)(albw_frame + 0x50))
  #define uStack_3c (*(undefined4 *)(albw_frame + 0x54))
  #define uStack_38 (*(undefined4 *)(albw_frame + 0x58))
  #define afStack_30 ((float *)(albw_frame + 0x60))
  if (*(uint *)(param_1 + 0x9a4) < *(uint *)(param_1 + 0x9a8)) {
    *(uint *)(param_1 + 0x9a4) = *(uint *)(param_1 + 0x9a4) + 1;
  }
  if (*(uint *)(param_1 + 0xba0) != 0) {
    puVar1 = (undefined4 *)func_0052FBA0(*DAT_00181d44 + 0x3dbbc,*(uint *)(param_1 + 0xba0));
    if (((*DAT_00181d48 & 1) == 0) && (iVar2 = func_00100174((int *)DAT_00181d48), iVar2 != 0)) {
      *DAT_00181d4c = DAT_00181d50;
    }
    if ((puVar1 == (undefined4 *)0x0) ||
       (iVar2 = (**(code **)*puVar1)(puVar1,DAT_00181d4c), iVar2 == 0)) {
      puVar1 = (undefined4 *)0x0;
    }
    if (puVar1 != (undefined4 *)0x0) {
      pfVar5 = (float *)(param_1 + 0x3d0);
      pfVar6 = (float *)(*(int *)(*(int *)(puVar1[0x103] + 0x24) + 0x14) + puVar1[0x250] * 0x30);
      local_64 = pfVar6[3];
      fStack_60 = pfVar6[7];
      iVar2 = *(int *)(param_1 + 0x9a8) - *(int *)(param_1 + 0x9a4);
      if (iVar2 < 2) {
        iVar2 = 1;
      }
      local_5c = pfVar6[0xb];
      fVar7 = (float)VectorSignedToFloat(iVar2,(byte)(in_fpscr >> 0x15) & 3);
      fVar7 = DAT_00181d54 / fVar7;
      fVar8 = DAT_00181d54;
      func_00115C70(&local_40,&local_64,pfVar5);
      local_78 = local_40;
      uStack_74 = uStack_3c;
      uStack_70 = uStack_38;
      func_00115D70(&local_40,&local_78,fVar7);
      local_84 = local_40;
      uStack_80 = uStack_3c;
      uStack_7c = uStack_38;
      func_00115C54(pfVar5,pfVar5,&local_84);
      func_0048B740(afStack_50,0,*(uint *)(param_1 + 1000),0);
      uVar3 = func_00491C08(afStack_30,pfVar6);
      uVar4 = *(uint *)(param_1 + 0x9a8);
      if (uVar4 != 0) {
        uVar3 = *(uint *)(param_1 + 0x9a4);
      }
      fVar7 = DAT_00181d58;
      if ((uVar4 != 0 && uVar3 != 0) && (fVar7 = fVar8, uVar3 < uVar4)) {
        fVar7 = (float)VectorUnsignedToFloat(uVar3,(byte)(in_fpscr >> 0x15) & 3);
        fVar7 = fVar7 * *(float *)(param_1 + 0x9ac);
      }
      func_0048B330((float *)(param_1 + 0xbc4),afStack_50,afStack_30,fVar7);
      *(float *)(*(int *)(param_1 + 0x7a0) + 0x134) = fVar8 - fVar7;
    }
  }
  if ((*(int *)(param_1 + 0xbe8) == 2) && (0x78 < *(int *)(param_1 + 0x960))) {
    *(undefined4 *)(param_1 + 0xbe8) = 3;
  }
  return;
}

