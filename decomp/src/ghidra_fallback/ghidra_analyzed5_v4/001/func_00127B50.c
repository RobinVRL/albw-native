#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern float func_00115DC8(float *param_1);
extern int func_004D838C(float *param_1,float *param_2,float fparam_0,float fparam_1,float fparam_2);
extern int func_0051D2F4(int *param_1,int param_2,int param_3,int param_4,float fparam_0);
extern int func_006568D8(undefined4 *param_1,undefined1 param_2);
extern int func_0068C690(float *param_1);
extern undefined4 DAT_00127bf8;
extern int *DAT_00127bfc;
extern int DAT_00127c00;
extern float DAT_00127c04;
extern float DAT_00127c08;
extern float DAT_00127c0c;
extern float DAT_00127c10;

// USA 00127B50 <- EU 00127B50 (Ghidra, non-matching)
// GLOBAL DAT_00127bf8 undefined4
// GLOBAL DAT_00127bfc int *
// GLOBAL DAT_00127c00 int
// GLOBAL DAT_00127c04 float
// GLOBAL DAT_00127c08 float
// GLOBAL DAT_00127c0c float
// GLOBAL DAT_00127c10 float

void func_00127B50(int param_1)

{
  int iVar1;
  undefined1 uVar2;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define fStack_18 (*(float *)(albw_frame + 0x8))
  #define local_14 (*(undefined4 *)(albw_frame + 0xc))
  func_00115C70(&fStack_18,(float *)(param_1 + 0x8f8),(float *)(param_1 + 0x3d0));
  local_14 = DAT_00127bf8;
  func_00115DC8(&fStack_18);
  iVar1 = func_0068C690(&fStack_18);
  func_0051D2F4((int *)(param_1 + 1000),iVar1,DAT_00127c00,*DAT_00127bfc,DAT_00127c04);
  iVar1 = func_004D838C((float *)(param_1 + 0x3d0),(float *)(param_1 + 0x8f8),DAT_00127c10,
                        DAT_00127c0c,DAT_00127c08);
  if (iVar1 != 0) {
    *(uint *)(param_1 + 0x59c) = *(uint *)(param_1 + 0x59c) | 0x10;
    if (*(char *)(param_1 + 0x90c) == '\0') {
      uVar2 = 5;
    }
    else {
      uVar2 = 7;
    }
    func_006568D8((undefined4 *)(param_1 + 0x8bc),uVar2);
  }
  return;
}

