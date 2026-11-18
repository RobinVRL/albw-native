#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_0014835C(int param_1,uint param_2);
extern int func_0019B04C(uint param_1);
extern int func_002DFF7C(undefined4 *param_1);
extern int func_004C4AF4(int param_1,int *param_2,int param_3);
extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern int func_0051E5F8(int param_1,float *param_2,undefined4 param_3,float fparam_0,float fparam_1);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_00581D60(int param_1);
extern uint *DAT_00148890;
extern int *DAT_00148894;
extern float DAT_00148898;
extern float DAT_0014889c;
extern float DAT_001488a0;
extern int *DAT_001488a4;
extern int *DAT_001488a8;
extern uint *DAT_001488ac;
extern undefined4 *DAT_001488b0;
extern undefined4 DAT_001488b4;

// USA 00148724 <- EU 00148724 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 int
// GLOBAL DAT_00148890 uint *
// GLOBAL DAT_00148894 int *
// GLOBAL DAT_00148898 float
// GLOBAL DAT_0014889c float
// GLOBAL DAT_001488a0 float
// GLOBAL DAT_001488a4 int *
// GLOBAL DAT_001488a8 int *
// GLOBAL DAT_001488ac uint *
// GLOBAL DAT_001488b0 undefined4 *
// GLOBAL DAT_001488b4 undefined4

int func_00148724(undefined4 param_1,undefined4 *param_2,uint param_3,uint param_4,int param_5)

{
  int *piVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  float fparam_0;
  float fVar6;
  _Alignas(8) unsigned char albw_frame[0x320];
  #define local_318 (*(int *)(albw_frame + 0x8))
  #define local_314 (*(undefined4 *)(albw_frame + 0xc))
  #define uStack_310 (*(undefined4 *)(albw_frame + 0x10))
  #define uStack_30c (*(undefined4 *)(albw_frame + 0x14))
  #define local_2fc (*(undefined4 *)(albw_frame + 0x24))
  #define local_2f8 (*(uint *)(albw_frame + 0x28))
  #define local_2f4 (*(undefined4 *)(albw_frame + 0x2c))
  #define local_2d4 (*(float *)(albw_frame + 0x4c))
  #define local_2d0 (*(undefined4 *)(albw_frame + 0x50))
  #define local_2cc (*(undefined4 *)(albw_frame + 0x54))
  #define local_2c8 (*(undefined2 *)(albw_frame + 0x58))
  #define local_58 (*(undefined4 *)(albw_frame + 0x2c8))
  #define fStack_54 (*(float *)(albw_frame + 0x2cc))
  #define local_50 (*(float *)(albw_frame + 0x2d0))
  #define afStack_48 ((float *)(albw_frame + 0x2d8))
  local_2f8 = 0;
  local_2f4 = 0;
  local_2fc = 0;
  local_2d0 = 0;
  local_2cc = 0;
  local_58 = 0;
  func_002DFF7C(&local_318);
  local_318 = func_0019B04C(*DAT_00148890);
  local_314 = *param_2;
  uStack_310 = param_2[1];
  uStack_30c = param_2[2];
  local_2f8 = param_3;
  uVar2 = func_00581D60(*DAT_00148894);
  local_2d4 = DAT_00148898;
  if (param_5 == 0) {
    local_2d4 = DAT_0014889c;
  }
  local_2c8 = (undefined2)uVar2;
  fparam_0 = DAT_00148898;
  fVar6 = DAT_0014889c;
  local_2cc = param_1;
  func_004D80A4(&fStack_54,param_3,DAT_00148898);
  local_50 = fVar6;
  func_0051E5F8(*DAT_001488a4,afStack_48,&fStack_54,fparam_0,DAT_001488a0);
  piVar1 = DAT_001488a8;
  piVar3 = func_004C4AF4(*DAT_001488a8,&local_318,0);
  if (param_4 != 0) {
    puVar4 = (undefined4 *)func_0052FBA0(*piVar1 + 0x3dbbc,param_4);
    if (((*DAT_001488ac & 1) == 0) && (iVar5 = func_00100174((int *)DAT_001488ac), iVar5 != 0)) {
      *DAT_001488b0 = DAT_001488b4;
    }
    if ((puVar4 == (undefined4 *)0x0) || (iVar5 = (**(code **)*puVar4)(puVar4), iVar5 == 0)) {
      puVar4 = (undefined4 *)0x0;
    }
    if (puVar4 != (undefined4 *)0x0) {
      func_0014835C((int)puVar4,piVar3[0xb3]);
    }
  }
  return piVar3[0xb3];
}

