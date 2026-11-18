#include "ghidra_types.h"

extern int func_0014FD6C(int param_1,float *param_2,undefined4 param_3);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_00588BE4(int param_1);
extern int *DAT_004c335c;
extern int *DAT_004c3360;
extern int *DAT_004c3364;
extern int *DAT_004c3368;
extern int *DAT_004c336c;
extern float DAT_004c3370;
extern undefined4 DAT_004c3374;

// GLOBAL DAT_004c335c int *
// GLOBAL DAT_004c3360 int *
// GLOBAL DAT_004c3364 int *
// GLOBAL DAT_004c3368 int *
// GLOBAL DAT_004c336c int *
// GLOBAL DAT_004c3370 float
// GLOBAL DAT_004c3374 undefined4
// USA 004C32BC <- EU 004C3298 (Ghidra, function missing from the decomp table)

undefined4 func_004C32BC(int param_1,int param_2)

{
  int iVar1;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define fStack_18 (*(float *)(albw_frame + 0x8))
  #define uStack_14 (*(undefined4 *)(albw_frame + 0xc))
  #define fStack_10 (*(float *)(albw_frame + 0x10))
  if (((*(uint *)(param_2 + 0x28) != 0) &&
      (iVar1 = func_0052FBA0(*DAT_004c335c + 0x3dbbc,*(uint *)(param_2 + 0x28)), iVar1 != 0)) &&
     ((iVar1 = func_00588BE4(iVar1), iVar1 == *DAT_004c3360 ||
      ((iVar1 == *DAT_004c3364 || (iVar1 == *DAT_004c3368)))))) {
    (**(code **)(*(int *)(param_1 + 800) + 0x30))(param_1 + 800);
    *(undefined1 *)(param_1 + 0x568) = 1;
    iVar1 = func_00588BE4(param_1);
    if (iVar1 == *DAT_004c336c) {
      fStack_18 = DAT_004c3370;
      uStack_14 = DAT_004c3374;
      fStack_10 = DAT_004c3370;
      func_0014FD6C(param_1,&fStack_18,*(undefined4 *)(param_1 + 1000));
    }
  }
  return 1;
}

