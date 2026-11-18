#include "ghidra_types.h"

extern int func_0040C58C(int *param_1);
extern void func_0040C5C0(int *param_1,int *param_2,float fparam_0);
extern int func_00410260(int param_1,undefined4 param_2,undefined4 param_3,int *param_4,float fparam_0);
extern int func_0057D86C(int *param_1);

// USA 001DF86C <- EU 001DF86C (Ghidra, non-matching)

void func_001DF86C(int param_1,float fparam_0)

{
  bool bVar1;
  undefined4 extraout_r1;
  undefined4 in_r2;
  int *in_r3;
  float fparam_0_00;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 ((int *)(albw_frame + 0x8))
  *(float *)(param_1 + 0x134) = fparam_0;
  fparam_0_00 = fparam_0;
  bVar1 = func_0057D86C(*(int **)(param_1 + 0x24));
  if (bVar1) {
    func_0040C5C0(local_18,*(int **)(param_1 + 0x24),fparam_0);
    if (local_18[0] != 0) {
      func_00410260(local_18[0],extraout_r1,in_r2,in_r3,fparam_0_00);
    }
    func_0040C58C(local_18);
  }
  return;
}

