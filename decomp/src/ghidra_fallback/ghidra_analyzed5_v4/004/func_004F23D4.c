#include "ghidra_types.h"

extern int func_004CEA18(int param_1,int param_2,uint param_3);
extern int func_00584C14(int param_1,int *param_2);
extern int func_00588BE4(int param_1);
extern int func_00589F28(int param_1,float fparam_0);
extern int func_0058A880(int param_1);
extern int func_0058A8F0(int param_1);
extern int func_0066ACA4(undefined4 *param_1,undefined1 param_2);
extern int *DAT_004f247c;
extern undefined4 DAT_004f2480;
extern int DAT_004f2484;
extern float DAT_004f2488;

// USA 004F23D4 <- EU 004F23AC (Ghidra, non-matching)
// GLOBAL DAT_004f247c int *
// GLOBAL DAT_004f2480 undefined4
// GLOBAL DAT_004f2484 int
// GLOBAL DAT_004f2488 float

undefined4 func_004F23D4(int param_1)

{
  int iVar1;
  uint uVar2;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define local_14 (*(undefined4 *)(albw_frame + 0xc))
  iVar1 = func_00588BE4(param_1);
  if ((iVar1 == *DAT_004f247c) && (iVar1 = func_0058A880(param_1), iVar1 != 0)) {
    local_14 = DAT_004f2480;
    local_18 = DAT_004f2484;
    uVar2 = func_00584C14(*(int *)(param_1 + 0x40c),&local_18);
    func_004CEA18(*(int *)(param_1 + 0x40c),0,uVar2);
  }
  iVar1 = func_0058A8F0(param_1);
  if (iVar1 != 0) {
    if ((*(short *)(param_1 + 0x2e) == 2) ||
       (iVar1 = func_00589F28(param_1,DAT_004f2488), iVar1 == 0)) {
      if (0 < *(int *)(param_1 + 0x8d4)) {
        return func_0066ACA4((undefined4 *)(param_1 + 0x8d4),2);
      }
    }
    else {
      func_0066ACA4((undefined4 *)(param_1 + 0x8d4),0);
    }
  }
  return 0;
}

