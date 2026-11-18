#include "ghidra_types.h"

extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_004A1B9C(int *param_1,int param_2,uint *param_3);
extern int func_004A2F38(int param_1,undefined4 *param_2);
extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern undefined4 DAT_004f2e3c;
extern uint *DAT_004f31a4;
extern undefined4 DAT_004f31a8;
extern int DAT_004f31ac;

// USA 004F2E24 <- EU 004F2DFC (Ghidra, non-matching)
// GLOBAL DAT_004f2e3c undefined4
// GLOBAL DAT_004f31a4 uint *
// GLOBAL DAT_004f31a8 undefined4
// GLOBAL DAT_004f31ac int

undefined4 func_004F2E24(int param_1)

{
  undefined4 uVar1;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define iStack_18 (*(int *)(albw_frame + 0x8))
  #define uStack_14 (*(undefined4 *)(albw_frame + 0xc))
  #define iStack_10 (*(int *)(albw_frame + 0x10))
  #define iStack_c (*(int *)(albw_frame + 0x14))
  uVar1 = DAT_004f2e3c;
  *(undefined4 *)(param_1 + 0x3dc) = DAT_004f2e3c;
  *(undefined4 *)(param_1 + 0x3e0) = uVar1;
  *(undefined4 *)(param_1 + 0x3e4) = uVar1;
  *(undefined4 *)(param_1 + 0x914) = uVar1;
  func_004FABDC(param_1,1,0xffffffff,0);
  if (*(int *)(param_1 + 0x344) == 0) {
    iStack_c = 0;
    iStack_10 = 0;
  }
  else {
    func_004A1B9C(&iStack_10,*(int *)(param_1 + 0x344),DAT_004f31a4);
  }
  if ((iStack_10 != 0) && (*(int *)(iStack_10 + 0x1c) == iStack_c)) {
    func_004A2F38(iStack_10,(undefined4 *)(param_1 + 0x3d0));
  }
  uStack_14 = DAT_004f31a8;
  iStack_18 = DAT_004f31ac;
  return func_00150A84((int *)param_1,&iStack_18,0);
}

