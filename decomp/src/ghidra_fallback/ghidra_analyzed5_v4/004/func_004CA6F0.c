#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00392E48(undefined4 *param_1,int param_2,undefined4 *param_3,undefined1 param_4);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_00588BE4(int param_1);
extern int *DAT_004ca924;
extern uint *DAT_004ca928;
extern undefined4 *DAT_004ca92c;
extern undefined4 DAT_004ca930;
extern undefined4 *DAT_004ca934;
extern undefined4 *DAT_004ca938;
extern undefined4 *DAT_004ca93c;
extern undefined4 *DAT_004ca940;
extern undefined4 *DAT_004ca944;
extern undefined4 *DAT_004ca948;
extern uint *DAT_004ca94c;
extern undefined4 *DAT_004ca950;
extern undefined4 DAT_004ca954;
extern float DAT_004ca958;

// USA 004CA6F0 <- EU 004CA6C8 (Ghidra, non-matching)
// GLOBAL DAT_004ca924 int *
// GLOBAL DAT_004ca928 uint *
// GLOBAL DAT_004ca92c undefined4 *
// GLOBAL DAT_004ca930 undefined4
// GLOBAL DAT_004ca934 undefined4 *
// GLOBAL DAT_004ca938 undefined4 *
// GLOBAL DAT_004ca93c undefined4 *
// GLOBAL DAT_004ca940 undefined4 *
// GLOBAL DAT_004ca944 undefined4 *
// GLOBAL DAT_004ca948 undefined4 *
// GLOBAL DAT_004ca94c uint *
// GLOBAL DAT_004ca950 undefined4 *
// GLOBAL DAT_004ca954 undefined4
// GLOBAL DAT_004ca958 float

undefined4 func_004CA6F0(int param_1,uint param_2,float fparam_0)

{
  uint uVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint in_fpscr;
  float fVar8;
  float fVar9;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_3c ((float *)(albw_frame + 0x4))
  #define local_34 (*(undefined4 *)(albw_frame + 0xc))
  #define local_30 (*(float *)(albw_frame + 0x10))
  #define uStack_2c (*(undefined4 *)(albw_frame + 0x14))
  piVar2 = DAT_004ca924;
  uVar7 = 1;
  puVar3 = (undefined4 *)func_0052FBA0(*DAT_004ca924 + 0x3dbbc,param_2);
  if (((*DAT_004ca928 & 1) == 0) && (iVar4 = func_00100174((int *)DAT_004ca928), iVar4 != 0)) {
    *DAT_004ca92c = DAT_004ca930;
  }
  if ((puVar3 == (undefined4 *)0x0) ||
     (iVar4 = (**(code **)*puVar3)(puVar3,DAT_004ca92c), iVar4 == 0)) {
    puVar3 = (undefined4 *)0x0;
  }
  if (puVar3 != (undefined4 *)0x0) {
    puVar5 = (undefined4 *)func_0052FBA0(*piVar2 + 0x3dbbc,param_2);
    if (puVar5 != (undefined4 *)0x0) {
      uVar6 = func_00588BE4((int)puVar5);
      fVar8 = (float)VectorSignedToFloat(uVar6,(byte)(in_fpscr >> 0x15) & 3);
      fVar9 = (float)VectorSignedToFloat(*DAT_004ca934,(byte)(in_fpscr >> 0x15) & 3);
      in_fpscr = in_fpscr & 0xfffffff;
      uVar1 = in_fpscr | (uint)(fVar8 == fVar9) << 0x1e;
      if (SUB41(uVar1 >> 0x1e,0)) {
        return 0;
      }
      fVar9 = (float)VectorSignedToFloat(*DAT_004ca938,(byte)(uVar1 >> 0x15) & 3);
      uVar1 = in_fpscr | (uint)(fVar8 == fVar9) << 0x1e;
      if (SUB41(uVar1 >> 0x1e,0)) {
        return 0;
      }
      fVar9 = (float)VectorSignedToFloat(*DAT_004ca93c,(byte)(uVar1 >> 0x15) & 3);
      uVar1 = in_fpscr | (uint)(fVar8 == fVar9) << 0x1e;
      if (SUB41(uVar1 >> 0x1e,0)) {
        return 0;
      }
      fVar9 = (float)VectorSignedToFloat(*DAT_004ca940,(byte)(uVar1 >> 0x15) & 3);
      uVar1 = in_fpscr | (uint)(fVar8 == fVar9) << 0x1e;
      if (SUB41(uVar1 >> 0x1e,0)) {
        return 0;
      }
      fVar9 = (float)VectorSignedToFloat(*DAT_004ca944,(byte)(uVar1 >> 0x15) & 3);
      in_fpscr = in_fpscr | (uint)(fVar8 == fVar9) << 0x1e;
      if (SUB41(in_fpscr >> 0x1e,0)) {
        return 0;
      }
      fVar9 = (float)VectorSignedToFloat(*DAT_004ca948,(byte)(in_fpscr >> 0x15) & 3);
      if (fVar8 == fVar9) {
        return 0;
      }
    }
    if (((*DAT_004ca94c & 1) == 0) && (iVar4 = func_00100174((int *)DAT_004ca94c), iVar4 != 0)) {
      *DAT_004ca950 = DAT_004ca954;
    }
    if ((puVar5 == (undefined4 *)0x0) ||
       (iVar4 = (**(code **)*puVar5)(puVar5,DAT_004ca950), iVar4 == 0)) {
      puVar5 = (undefined4 *)0x0;
    }
    fVar8 = ALBW_AS_F32(puVar3[0xf5]) + fparam_0;
    if (puVar5 != (undefined4 *)0x0) {
      fVar8 = ALBW_AS_F32(puVar5[0x131]) + fVar8;
    }
    local_34 = *(undefined4 *)(param_1 + 0x3d0);
    uStack_2c = *(undefined4 *)(param_1 + 0x3d8);
    local_30 = *(float *)(param_1 + 0x3d4) + *(float *)(param_1 + 0x4c4);
    if (fVar8 <= local_30) {
      local_3c[0] = DAT_004ca958;
      iVar4 = func_00392E48(&local_34,0,local_3c,0);
      if ((iVar4 != 4) || (local_3c[0] <= fVar8)) {
        uVar7 = 0;
      }
    }
  }
  return uVar7;
}

