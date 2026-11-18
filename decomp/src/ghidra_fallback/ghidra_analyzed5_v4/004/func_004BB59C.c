#include "ghidra_types.h"

extern int func_0016898C(int param_1,uint *param_2);
extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_00169A80(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern float DAT_004bb654;
extern undefined4 DAT_004bb658;
extern undefined4 DAT_004bb65c;

// USA 004BB59C <- EU 004BB574 (Ghidra, non-matching)
// GLOBAL DAT_004bb654 float
// GLOBAL DAT_004bb658 undefined4
// GLOBAL DAT_004bb65c undefined4

undefined4 func_004BB59C(int param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  uint uVar2;
  uint extraout_r1;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define local_70 ((uint *)(albw_frame + 0x0))
  #define local_68 (*(undefined4 * *)(albw_frame + 0x8))
  #define local_64 (*(undefined4 *)(albw_frame + 0xc))
  #define local_60 (*(float *)(albw_frame + 0x10))
  #define local_5c (*(undefined4 *)(albw_frame + 0x14))
  #define local_58 (*(undefined4 *)(albw_frame + 0x18))
  #define local_54 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_50 (*(uint *)(albw_frame + 0x20))
  #define local_1c (*(undefined4 *)(albw_frame + 0x54))
  #define local_18 (*(undefined1 *)(albw_frame + 0x58))
  iVar1 = *(int *)(*(int *)(param_1 + 0x440) + 0x14);
  uVar2 = (uint)*(byte *)(iVar1 + 0x1c);
  if (uVar2 == 0) {
    if (*(float *)(iVar1 + 0x10) < DAT_004bb654) {
      if (DAT_004bb654 < *(float *)(iVar1 + 8)) goto LAB_004bb634;
    }
    else if (*(float *)(iVar1 + 8) != *(float *)(iVar1 + 0x14)) goto LAB_004bb634;
    local_68 = &local_64;
    local_70[1] = 3;
    param_3 = 1;
    local_1c = 10;
    local_18 = 0;
    local_70[0] = 1;
    local_64 = 0;
    local_60 = DAT_004bb654;
    local_5c = DAT_004bb658;
    local_58 = DAT_004bb65c;
    local_50 = (uint)param_4 | 0xff;
    local_54 = DAT_004bb658;
    func_0016898C(*(int *)(param_1 + 0x440),local_70);
    *(undefined1 *)(param_1 + 0x44d) = 0;
    uVar2 = extraout_r1;
  }
LAB_004bb634:
  func_00169A80(*(int **)(param_1 + 0x440),uVar2,param_3,param_4);
  return func_00168E9C(*(int **)(param_1 + 0x440),*(int *)(param_1 + 0x43c),(int *)0x0);
}

