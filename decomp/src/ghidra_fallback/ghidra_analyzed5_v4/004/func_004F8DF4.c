#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern int func_004F8EA8(int *param_1,uint param_2,float *param_3);
extern int func_00520FC0(void);
extern float DAT_004f8e78;
extern undefined4 DAT_004f8e7c;

// USA 004F8DF4 <- EU 004F8DCC (Ghidra, non-matching)
// GLOBAL DAT_004f8e78 float
// GLOBAL DAT_004f8e7c undefined4

bool func_004F8DF4(int *param_1,uint param_2)

{
  bool bVar1;
  float *pfVar2;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(float *)(albw_frame + 0x0))
  #define uStack_2c (*(undefined4 *)(albw_frame + 0x4))
  #define uStack_28 (*(undefined4 *)(albw_frame + 0x8))
  #define fStack_24 (*(float *)(albw_frame + 0xc))
  #define local_20 (*(undefined4 *)(albw_frame + 0x10))
  #define local_18 (*(float *)(albw_frame + 0x18))
  #define uStack_14 (*(undefined4 *)(albw_frame + 0x1c))
  #define uStack_10 (*(undefined4 *)(albw_frame + 0x20))
  if (param_2 == 3) {
    pfVar2 = (float *)func_00520FC0();
    bVar1 = func_004F8EA8(param_1,3,pfVar2);
    return bVar1;
  }
  if (*(int *)param_1[0x10f] != 0) {
    bVar1 = func_004F8EA8(param_1,param_2,(float *)((int *)param_1[0x10f] + 5));
    return bVar1;
  }
  func_004D80A4(&fStack_24,param_1[0xfa],DAT_004f8e78);
  local_20 = DAT_004f8e7c;
  func_00115C54(&local_18,(float *)(param_1 + 0xf4),&fStack_24);
  local_30 = local_18;
  uStack_2c = uStack_14;
  uStack_28 = uStack_10;
  bVar1 = func_004F8EA8(param_1,param_2,&local_30);
  return bVar1;
}

