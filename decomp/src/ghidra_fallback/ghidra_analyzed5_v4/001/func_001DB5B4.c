#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_0019B04C(uint param_1);
extern int func_002DFF7C(undefined4 *param_1);
extern int func_004C4AF4(int param_1,int *param_2,int param_3);
extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_0053ED3C(int param_1);
extern int func_005841A8(int param_1,undefined4 param_2,int *param_3);
extern int *DAT_001db76c;
extern uint *DAT_001db770;
extern undefined4 DAT_001db774;
extern float DAT_001db778;
extern uint *DAT_001db77c;
extern uint *DAT_001db780;

// USA 001DB5B4 <- EU 001DB5B4 (Ghidra, non-matching)
// GLOBAL DAT_001db76c int *
// GLOBAL DAT_001db770 uint *
// GLOBAL DAT_001db774 undefined4
// GLOBAL DAT_001db778 float
// GLOBAL DAT_001db77c uint *
// GLOBAL DAT_001db780 uint *

undefined4 func_001DB5B4(int param_1,uint param_2)

{
  uint *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  _Alignas(8) unsigned char albw_frame[0x2f0];
  #define local_2e8 (*(int *)(albw_frame + 0x8))
  #define local_2e4 (*(float *)(albw_frame + 0xc))
  #define fStack_2e0 (*(float *)(albw_frame + 0x10))
  #define fStack_2dc (*(float *)(albw_frame + 0x14))
  #define local_2cc (*(undefined4 *)(albw_frame + 0x24))
  #define local_2c8 (*(uint *)(albw_frame + 0x28))
  #define local_2c4 (*(undefined4 *)(albw_frame + 0x2c))
  #define local_2a0 (*(undefined4 *)(albw_frame + 0x50))
  #define local_29c (*(undefined4 *)(albw_frame + 0x54))
  #define local_28 (*(undefined4 *)(albw_frame + 0x2c8))
  #define local_24 (*(float *)(albw_frame + 0x2cc))
  #define local_20 (*(float *)(albw_frame + 0x2d0))
  #define local_1c (*(float *)(albw_frame + 0x2d4))
  puVar1 = DAT_001db770;
  piVar2 = DAT_001db76c;
  iVar3 = *DAT_001db76c;
  if (*(int *)(param_1 + 0x440) == 3) {
    iVar4 = 0;
    iVar3 = func_005841A8(iVar3,*DAT_001db770,*(int **)(iVar3 + 0x3dbc0));
    if (*(int *)(*piVar2 + 0x3dbc8) != iVar3) {
      do {
        iVar4 = iVar4 + 1;
        iVar3 = func_005841A8(*piVar2,*puVar1,(int *)(iVar3 + 4));
      } while (*(int *)(*piVar2 + 0x3dbc8) != iVar3);
      if (2 < iVar4) {
        return 0;
      }
    }
  }
  else {
    iVar3 = func_0052FBA0(iVar3 + 0x3dbbc,*(uint *)(param_1 + 0x62c));
    if (iVar3 != 0) {
      return 0;
    }
  }
  iVar3 = func_0053ED3C(*(int *)(param_1 + 0x600));
  local_24 = *(float *)(iVar3 + 0xc);
  local_20 = *(float *)(iVar3 + 0x1c);
  local_1c = *(float *)(iVar3 + 0x2c);
  fVar7 = local_24 - *(float *)(param_1 + 0x3d0);
  fVar6 = local_1c - *(float *)(param_1 + 0x3d8);
  func_004D80A4(&local_24,param_2,SQRT(fVar7 * fVar7 + fVar6 * fVar6));
  local_20 = ALBW_AS_F32(DAT_001db774);
  func_00115C54(&local_24,&local_24,(float *)(param_1 + 0x3d0));
  local_20 = *(float *)(param_1 + 0x3d4) + DAT_001db778;
  uVar5 = *DAT_001db77c;
  if (*(int *)(param_1 + 0x440) == 1) {
    uVar5 = *DAT_001db780;
  }
  else if (*(int *)(param_1 + 0x440) == 3) {
    uVar5 = *puVar1;
  }
  local_2c8 = 0;
  local_2c4 = 0;
  local_2cc = 0;
  local_2a0 = 0;
  local_29c = 0;
  local_28 = 0;
  func_002DFF7C(&local_2e8);
  local_2e8 = func_0019B04C(uVar5);
  local_2e4 = local_24;
  fStack_2e0 = local_20;
  fStack_2dc = local_1c;
  local_29c = *(undefined4 *)(param_1 + 0x2cc);
  local_2c8 = param_2;
  piVar2 = func_004C4AF4(*piVar2,&local_2e8,0);
  *(int *)(param_1 + 0x62c) = piVar2[0xb3];
  return 1;
}

