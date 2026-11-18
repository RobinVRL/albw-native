#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern float func_0051CF68(float *param_1,float fparam_0,float fparam_1,float fparam_2);
extern int func_00520FC0(void);
extern int func_0052F654(int param_1);
extern int func_0058A8F0(int param_1);
extern int func_0065E9FC(undefined4 *param_1,undefined1 param_2);
extern int func_0068C690(float *param_1);

// USA 0022E3B4 <- EU 0022E3B4 (Ghidra, non-matching)

void func_0022E3B4(int param_1)

{
  int iVar1;
  float *pfVar2;
  float fVar3;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(float *)(albw_frame + 0x8))
  #define uStack_24 (*(undefined4 *)(albw_frame + 0xc))
  #define uStack_20 (*(undefined4 *)(albw_frame + 0x10))
  #define local_1c (*(float *)(albw_frame + 0x14))
  #define uStack_18 (*(undefined4 *)(albw_frame + 0x18))
  #define uStack_14 (*(undefined4 *)(albw_frame + 0x1c))
  pfVar2 = *(float **)(param_1 + 0xa68);
  fVar3 = func_0051CF68(pfVar2 + 3,*pfVar2,pfVar2[1],pfVar2[2]);
  pfVar2[4] = fVar3;
  iVar1 = func_0052F654(*(int *)(param_1 + 0xa68));
  *(int *)(param_1 + 1000) = iVar1;
  if ((*(int *)(*(int *)(param_1 + 0xa68) + 0xc) == 0x3f800000) &&
     (iVar1 = func_0058A8F0(param_1), iVar1 != 0)) {
    if (*(char *)(param_1 + 0xa6d) == '\0') {
      pfVar2 = (float *)(param_1 + 0xa70);
    }
    else {
      pfVar2 = (float *)func_00520FC0();
    }
    func_00115C70(&local_1c,pfVar2,(float *)(param_1 + 0x3d0));
    local_28 = local_1c;
    uStack_24 = uStack_18;
    uStack_20 = uStack_14;
    func_0068C690(&local_28);
    func_0065E9FC((undefined4 *)(param_1 + 0xa7c),4);
  }
  return;
}

