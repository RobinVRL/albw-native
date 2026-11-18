#include "ghidra_types.h"

extern int func_00115DAC(float *param_1,float *param_2,float *param_3,float fparam_0);
extern int func_00512F80(int param_1);
extern int func_0052FCA4(int param_1,undefined4 *param_2,int *param_3);
extern float DAT_0034cc00;
extern float DAT_0034cc04;
extern undefined4 *DAT_0034cc08;
extern undefined4 DAT_0034cc0c;
extern int *DAT_0034cc10;
extern int DAT_0034cc14;

// USA 0034CAF0 <- EU 0034CACC (Ghidra, non-matching)
// GLOBAL DAT_0034cc00 float
// GLOBAL DAT_0034cc04 float
// GLOBAL DAT_0034cc08 undefined4 *
// GLOBAL DAT_0034cc0c undefined4
// GLOBAL DAT_0034cc10 int *
// GLOBAL DAT_0034cc14 int

void func_0034CAF0(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_40 (*(float *)(albw_frame + 0x0))
  #define uStack_3c (*(undefined4 *)(albw_frame + 0x4))
  #define local_38 (*(float *)(albw_frame + 0x8))
  #define local_34 (*(float *)(albw_frame + 0xc))
  #define uStack_30 (*(undefined4 *)(albw_frame + 0x10))
  #define local_2c (*(float *)(albw_frame + 0x14))
  #define local_28 (*(float *)(albw_frame + 0x18))
  #define uStack_24 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_20 (*(undefined4 *)(albw_frame + 0x20))
  #define local_18 (*(undefined4 *)(albw_frame + 0x28))
  #define local_14 (*(undefined4 *)(albw_frame + 0x2c))
  local_40 = *(float *)(param_1 + 0x3d0);
  uStack_3c = *(undefined4 *)(param_1 + 0x3d4);
  local_38 = *(float *)(param_1 + 0x3d8);
  local_34 = *(float *)(param_1 + 0x3d0);
  uStack_30 = *(undefined4 *)(param_1 + 0x3d4);
  local_2c = *(float *)(param_1 + 0x3d8);
  iVar2 = *(int *)(param_1 + 0x430);
  if (iVar2 != 0) {
    local_20 = *(undefined4 *)(iVar2 + 0x60);
    local_28 = *(float *)(iVar2 + 0x58);
    uStack_24 = *(undefined4 *)(iVar2 + 0x5c);
    func_00115DAC(&local_40,&local_28,&local_40,DAT_0034cc00);
    func_00115DAC(&local_34,&local_28,&local_34,DAT_0034cc04);
    piVar1 = DAT_0034cc10;
    local_14 = *DAT_0034cc08;
    piVar3 = *(int **)(DAT_0034cc14 + *DAT_0034cc10);
    piVar4 = *(int **)(*DAT_0034cc10 + 0x3dbc8);
    local_18 = DAT_0034cc0c;
    while ((piVar3 != piVar4 &&
           (piVar3 = func_0052FCA4(*piVar1 + 0x3dbbc,&local_18,piVar3), piVar3 != piVar4))) {
      iVar2 = *piVar3;
      if (((iVar2 != 0) &&
          (((local_40 <= *(float *)(iVar2 + 0x3d0) && (*(float *)(iVar2 + 0x3d0) <= local_34)) &&
           (local_38 <= *(float *)(iVar2 + 0x3d8))))) && (*(float *)(iVar2 + 0x3d8) <= local_2c)) {
        func_00512F80(iVar2);
      }
      piVar3 = piVar3 + 1;
    }
  }
  return;
}

