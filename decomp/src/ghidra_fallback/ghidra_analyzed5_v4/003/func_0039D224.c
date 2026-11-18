#include "ghidra_types.h"

extern int func_002917A4(int param_1,float *param_2,undefined4 param_3,float fparam_0);
extern int func_0052FBA0(int param_1,uint param_2);
extern int *DAT_0039d2d0;
extern float DAT_0039d2d4;
extern int *DAT_0039d2d8;
extern undefined4 DAT_0039d2dc;

// USA 0039D224 <- EU 0039D200 (Ghidra, non-matching)
// GLOBAL DAT_0039d2d0 int *
// GLOBAL DAT_0039d2d4 float
// GLOBAL DAT_0039d2d8 int *
// GLOBAL DAT_0039d2dc undefined4

undefined4 func_0039D224(int param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  float fparam_0;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(undefined4 *)(albw_frame + 0x0))
  #define uStack_1c (*(undefined4 *)(albw_frame + 0x4))
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  piVar1 = DAT_0039d2d0;
  if ((*(int *)(param_2 + 0x2c) != 0) && (*(char *)(*(int *)(param_2 + 0x2c) + 1) == '\x05')) {
    if (*(char *)(param_1 + 0x410) == '\0') {
      fparam_0 = DAT_0039d2d4;
      iVar3 = func_0052FBA0(*DAT_0039d2d8 + 0x3dbbc,*(uint *)(param_1 + 0x50));
      if (iVar3 != 0) {
        local_18 = *(undefined4 *)(iVar3 + 0x3d8);
        local_20 = *(undefined4 *)(iVar3 + 0x3d0);
        uStack_1c = *(undefined4 *)(iVar3 + 0x3d4);
        func_002917A4(*piVar1,&local_20,0,fparam_0);
      }
      uVar2 = DAT_0039d2dc;
      *(undefined4 *)(param_1 + 0x4dc) = 10;
      *(undefined4 *)(param_1 + 0x4e0) = uVar2;
      *(undefined4 *)(param_1 + 0x4d8) = 0;
    }
    else {
      func_002917A4(*DAT_0039d2d0,param_2 + 0x10,0,DAT_0039d2d4);
    }
  }
  return 1;
}

