#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00164B08(int param_1,int param_2);
extern int func_004FB4E0(int param_1,float fparam_0);
extern int func_00588F08(int param_1);
extern int func_00658748(undefined4 *param_1,undefined1 param_2);
extern int func_0068C690(float *param_1);
extern undefined4 *DAT_00164ce4;
extern int *DAT_00164ce8;
extern float DAT_00164cec;
extern float DAT_00164cf0;
extern float DAT_00164cf4;

// USA 00164C14 <- EU 00164C18 (Ghidra, non-matching)
// GLOBAL DAT_00164ce4 undefined4 *
// GLOBAL DAT_00164ce8 int *
// GLOBAL DAT_00164cec float
// GLOBAL DAT_00164cf0 float
// GLOBAL DAT_00164cf4 float

void func_00164C14(int param_1)

{
  float *pfVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define afStack_20 ((float *)(albw_frame + 0x0))
  if (*(uint *)(param_1 + 0x904) < *(uint *)(param_1 + 0x908)) {
    *(uint *)(param_1 + 0x904) = *(uint *)(param_1 + 0x904) + 1;
  }
  else {
    uVar3 = DAT_00164ce4[1];
    uVar4 = DAT_00164ce4[2];
    *(undefined4 *)(param_1 + 0x464) = *DAT_00164ce4;
    *(undefined4 *)(param_1 + 0x468) = uVar3;
    *(undefined4 *)(param_1 + 0x46c) = uVar4;
    pfVar1 = (float *)func_00588F08(*DAT_00164ce8);
    func_00115C70(afStack_20,(float *)(param_1 + 0x3d0),pfVar1);
    iVar2 = func_0068C690(afStack_20);
    *(int *)(param_1 + 0x8ec) = iVar2;
    func_00164B08(param_1,0);
    func_004FB4E0(param_1,DAT_00164cec);
    fVar5 = *(float *)(param_1 + 0x3d4) +
            (*(float *)(param_1 + 0x8e4) - *(float *)(param_1 + 0x3d4)) * DAT_00164cf0;
    fVar6 = *(float *)(param_1 + 0x8e4) - DAT_00164cf4;
    *(float *)(param_1 + 0x3d4) = fVar5;
    if (fVar6 <= fVar5) {
      func_00658748((undefined4 *)(param_1 + 0x8bc),2);
    }
  }
  return;
}

