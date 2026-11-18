#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_0051D2F4(int *param_1,int param_2,int param_3,int param_4,float fparam_0);
extern int func_00520FC0(void);
extern int func_0058E2B8(int *param_1);
extern int func_0068C690(float *param_1);
extern float DAT_00245258;
extern int DAT_0024525c;
extern int DAT_00245260;
extern int DAT_00245264;
extern float DAT_00245268;
extern int DAT_0024526c;

// USA 0024516C <- EU 0024516C (Ghidra, non-matching)
// GLOBAL DAT_00245258 float
// GLOBAL DAT_0024525c int
// GLOBAL DAT_00245260 int
// GLOBAL DAT_00245264 int
// GLOBAL DAT_00245268 float
// GLOBAL DAT_0024526c int

undefined4 func_0024516C(int *param_1)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  uint in_fpscr;
  float fVar4;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(float *)(albw_frame + 0x0))
  #define uStack_2c (*(undefined4 *)(albw_frame + 0x4))
  #define uStack_28 (*(undefined4 *)(albw_frame + 0x8))
  #define local_24 (*(float *)(albw_frame + 0xc))
  #define uStack_20 (*(undefined4 *)(albw_frame + 0x10))
  #define uStack_1c (*(undefined4 *)(albw_frame + 0x14))
  pfVar1 = (float *)func_00520FC0();
  func_00115C70(&local_24,pfVar1,(float *)(param_1 + 0xf4));
  local_30 = local_24;
  uStack_2c = uStack_20;
  uStack_28 = uStack_1c;
  iVar2 = func_0068C690(&local_30);
  local_24 = ALBW_AS_F32((param_1[0xfa] - iVar2));
  iVar3 = func_0058E2B8((int *)&local_24);
  fVar4 = (float)VectorUnsignedToFloat(iVar3,(byte)(in_fpscr >> 0x15) & 3);
  fVar4 = fVar4 * DAT_00245258;
  if (*(char *)((int)param_1 + 0x852) == '\x02') {
    func_0051D2F4(param_1 + 0xfa,iVar2,DAT_00245264,DAT_00245260,DAT_00245268);
    if ((int)ALBW_AS_U32(fVar4) < DAT_0024526c) {
      return (**(code **)(*param_1 + 0xac))(param_1,*(undefined1 *)((int)param_1 + 0x853),0xffffffff);
    }
  }
  else if (DAT_0024525c < (int)ALBW_AS_U32(fVar4)) {
    (**(code **)(*param_1 + 0xac))(param_1,(char)param_1[0x215],0xffffffff);
  }
  return 0;
}

