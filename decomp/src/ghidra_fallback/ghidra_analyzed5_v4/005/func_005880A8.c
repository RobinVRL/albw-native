// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_0010A464(undefined4 *param_1);
extern int func_0025B6A8(int param_1,int param_2);
extern int func_0025B810(int param_1,int param_2,float fparam_0);
extern int func_0025B874(undefined4 *param_1);
extern int func_0025BDA4(int *param_1,int *param_2);
extern float DAT_00588120;
extern float DAT_00588124;
extern float DAT_00588128;

// USA 005880A8 <- EU 00588080 (Ghidra, non-matching)
// GLOBAL DAT_00588120 float
// GLOBAL DAT_00588124 float
// GLOBAL DAT_00588128 float

undefined4 func_005880A8(int param_1,int *param_2,undefined4 *param_3,float fparam_0)

{
  int *piVar1;
  undefined4 uVar2;
  float fVar3;
  float fparam_0_00;
  _Alignas(8) unsigned char albw_frame[0x80];
  #define auStack_78 ((undefined4 *)(albw_frame + 0x8))
  func_0010A464(auStack_78);
  if (param_3 == (undefined4 *)0x0) {
    param_3 = auStack_78;
  }
  piVar1 = func_0025BDA4(*(int **)(param_1 + 0x40),param_2);
  if (piVar1 == (int *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
    if (param_3 != (undefined4 *)0x0) {
      func_0025B6A8((int)param_3,(int)piVar1);
    }
    fVar3 = fparam_0 * DAT_00588120;
    fparam_0_00 = DAT_00588124;
    if ((DAT_00588124 <= fVar3) && (fparam_0_00 = fVar3, DAT_00588128 < fVar3)) {
      fparam_0_00 = DAT_00588128;
    }
    func_0025B810((int)param_3,0,fparam_0_00);
  }
  func_0025B874(auStack_78);
  return uVar2;
}

