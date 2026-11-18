#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_002F8DE4(int *param_1,int param_2,uint param_3,int param_4);
extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern int func_004FAD10(int param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_0054D884(int param_1,uint param_2);
extern int DAT_00674060;
extern float DAT_00674064;
extern float DAT_00674068;
extern float DAT_0067406c;
extern float DAT_00674070;

// USA 00673F8C <- EU 00673F64 (Ghidra, non-matching)
// GLOBAL DAT_00674060 int
// GLOBAL DAT_00674064 float
// GLOBAL DAT_00674068 float
// GLOBAL DAT_0067406c float
// GLOBAL DAT_00674070 float

void func_00673F8C(int *param_1)

{
  int iVar1;
  undefined4 extraout_r1;
  undefined4 uVar2;
  int *piVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(float *)(albw_frame + 0x8))
  #define iStack_14 (*(int *)(albw_frame + 0xc))
  #define iStack_10 (*(int *)(albw_frame + 0x10))
  if ((short)param_1[0xc] == 1) {
    func_004D80A4(&local_18,param_1[0xfa],DAT_00674064);
    func_00115C54(&local_18,&local_18,(float *)(param_1 + 0xf4));
    param_1[0xda] = (int)ALBW_AS_U32(local_18);
    param_1[0xdb] = iStack_14;
    param_1[0xdc] = iStack_10;
    param_1[0xf4] = (int)ALBW_AS_U32(local_18);
    param_1[0xf5] = iStack_14;
    param_1[0xf6] = iStack_10;
    param_1[0x25f] = 0x1e;
    iVar1 = func_0054D884(param_1[0xb4] + 0x18,0);
    func_004D80A4((float *)(param_1 + 0xf7),param_1[0xfa],
                  (*(float *)(iVar1 + 4) * DAT_00674068 + DAT_0067406c) * DAT_00674070);
  }
  else {
    param_1[0x25f] = 0;
    iVar1 = DAT_00674060;
    param_1[0xf7] = DAT_00674060;
    param_1[0xf8] = iVar1;
    param_1[0xf9] = iVar1;
  }
  piVar3 = (int *)0x0;
  uVar2 = 0;
  func_002F8DE4(param_1,2,0,0);
  func_004FAD10((int)param_1,extraout_r1,uVar2,piVar3);
  param_1[0x167] = param_1[0x167] & 0xfffffe4f;
  *(undefined1 *)((int)param_1 + 0x909) = 0;
  *(undefined1 *)((int)param_1 + 0x98e) = 1;
  return;
}

