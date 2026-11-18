#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00520FC0(void);
extern int func_0068C690(float *param_1);

// USA 0024540C <- EU 0024540C (Ghidra, non-matching)

int func_0024540C(int param_1)

{
  int iVar1;
  float *pfVar2;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(float *)(albw_frame + 0x0))
  #define fStack_2c (*(float *)(albw_frame + 0x4))
  #define local_28 (*(float *)(albw_frame + 0x8))
  #define local_24 (*(float *)(albw_frame + 0xc))
  #define uStack_20 (*(undefined4 *)(albw_frame + 0x10))
  #define uStack_1c (*(undefined4 *)(albw_frame + 0x14))
  #define local_18 (*(float *)(albw_frame + 0x18))
  #define uStack_14 (*(undefined4 *)(albw_frame + 0x1c))
  #define uStack_10 (*(undefined4 *)(albw_frame + 0x20))
  if (*(char *)(param_1 + 0x9d9) == '\x02') {
    pfVar2 = (float *)func_00520FC0();
    local_30 = *pfVar2;
    fStack_2c = pfVar2[1];
    local_28 = pfVar2[2];
    func_00115C70(&local_18,&local_30,(float *)(param_1 + 0x3d0));
    local_24 = local_18;
    uStack_20 = uStack_14;
    uStack_1c = uStack_10;
    iVar1 = func_0068C690(&local_24);
  }
  else {
    iVar1 = *(int *)(param_1 + 0x24);
  }
  return iVar1;
}

