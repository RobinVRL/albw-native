#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_004904CC(float fparam_0,float fparam_1);
extern int func_00520FC0(void);
extern float func_00521298(int param_1);
extern float func_005287F4(int param_1,float *param_2,uint *param_3,uint *param_4);
extern int func_0058E2B8(int *param_1);
extern int DAT_005286f0;
extern int DAT_005286f4;
extern int *DAT_005286f8;
extern uint *DAT_005286fc;
extern float DAT_00528700;
extern float DAT_00528704;
extern uint *DAT_00528708;

// USA 005285A4 <- EU 0052857C (Ghidra, non-matching)
// GLOBAL DAT_005286f0 int
// GLOBAL DAT_005286f4 int
// GLOBAL DAT_005286f8 int *
// GLOBAL DAT_005286fc uint *
// GLOBAL DAT_00528700 float
// GLOBAL DAT_00528704 float
// GLOBAL DAT_00528708 uint *

undefined4 func_005285A4(int param_1)

{
  int iVar1;
  float *pfVar2;
  uint in_fpscr;
  float fVar3;
  float fVar4;
  uint uVar5;
  float fVar6;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(float *)(albw_frame + 0x8))
  #define local_24 (*(uint *)(albw_frame + 0xc))
  #define local_20 (*(int *)(albw_frame + 0x10))
  #define local_1c (*(uint *)(albw_frame + 0x14))
  #define local_18 (*(float *)(albw_frame + 0x18))
  #define local_14 (*(float *)(albw_frame + 0x1c))
  #define local_10 (*(float *)(albw_frame + 0x20))
  fVar3 = func_00521298(param_1);
  if (DAT_005286f0 <= (int)ALBW_AS_U32(fVar3)) {
    return 0;
  }
  if (*(short *)(param_1 + 0x30) != 0) {
    if (((*(uint *)(DAT_005286f4 + 0xc) & 1) == 0) &&
       (iVar1 = func_00100174(DAT_005286f8), iVar1 != 0)) {
      fVar4 = (float)VectorSignedToFloat(DAT_005286fc[2],(byte)(in_fpscr >> 0x15) & 3);
      fVar4 = fVar4 * DAT_00528700;
      uVar5 = (uint)fVar4;
      fVar6 = (float)VectorSignedToFloat(uVar5,(byte)(in_fpscr >> 0x15) & 3);
      fVar3 = fVar6;
      if (fVar6 != fVar4) {
        fVar3 = DAT_00528704;
      }
      if (fVar4 <= fVar3 && (fVar6 != fVar4 && DAT_00528704 != fVar4)) {
        uVar5 = uVar5 - 1;
      }
      *DAT_005286fc = uVar5;
    }
    pfVar2 = (float *)func_00520FC0();
    func_00115C70(&local_18,pfVar2,(float *)(param_1 + 0x3d0));
    iVar1 = func_004904CC(local_14,SQRT(local_18 * local_18 + local_10 * local_10));
    local_24 = -iVar1;
    func_00115C70(&local_18,pfVar2,(float *)(param_1 + 0x3d0));
    local_1c = func_004904CC(local_18,local_10);
    local_20 = *(int *)(param_1 + 1000) - local_1c;
    uVar5 = func_0058E2B8(&local_20);
    if (*DAT_005286fc <= uVar5) {
      return 0;
    }
    uVar5 = func_0058E2B8((int *)&local_24);
    if (*DAT_00528708 <= uVar5) {
      return 0;
    }
    fVar3 = func_005287F4(param_1,&local_28,&local_1c,&local_24);
    if (fVar3 <= local_28) {
      return 0;
    }
  }
  return 1;
}

