#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_0017B378(int param_1,int *param_2,undefined4 param_3,int param_4);
extern int func_0017B688(int param_1);
extern int func_00520FC0(void);
extern int func_0068C690(float *param_1);

// USA 0017D5A4 <- EU 0017D5A4 (Ghidra, non-matching)

void func_0017D5A4(int param_1)

{
  float *pfVar1;
  int *piVar2;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define afStack_20 ((float *)(albw_frame + 0x0))
  #define local_14 ((int *)(albw_frame + 0xc))
  pfVar1 = (float *)func_00520FC0();
  func_00115C70(afStack_20,pfVar1,(float *)(param_1 + 0x3d0));
  piVar2 = (int *)0x0;
  local_14[0] = func_0068C690(afStack_20);
  if (0x1e < *(uint *)(param_1 + 0x850)) {
    piVar2 = local_14;
  }
  func_0017B378(param_1,piVar2,1,0);
  if (*(uint *)(param_1 + 0x850) < *(uint *)(param_1 + 0x854)) {
    *(uint *)(param_1 + 0x850) = *(uint *)(param_1 + 0x850) + 1;
  }
  else {
    func_0017B688(param_1);
  }
  return;
}

