#include "ghidra_types.h"

extern int func_00455CC0(int param_1,float fparam_0,float fparam_1,float fparam_2,float fparam_3);
extern int func_004563D0(int param_1,float *param_2);
extern float DAT_00456324;
extern float DAT_00456328;

// USA 004562C8 <- EU 004562A0 (Ghidra, non-matching)
// GLOBAL DAT_00456324 float
// GLOBAL DAT_00456328 float

undefined4 func_004562C8(int param_1,float fparam_0,float fparam_1,float fparam_2,float fparam_3)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(float *)(albw_frame + 0x0))
  #define local_c (*(float *)(albw_frame + 0x4))
  cVar1 = *(char *)(param_1 + 0xd);
  bVar3 = cVar1 == '\0';
  if (bVar3) {
    cVar1 = *(char *)(param_1 + 0xe);
  }
  bVar4 = cVar1 != '\0';
  if (!bVar3 || bVar4) {
    cVar1 = *(char *)(param_1 + 0x6c);
  }
  if ((!bVar3 || bVar4) && cVar1 != '\0') {
    iVar2 = *(int *)(param_1 + 0xb4);
    fparam_3 = *(float *)(iVar2 + 0x38);
    local_10 = *(float *)(iVar2 + 0x1c) + DAT_00456324 +
               (*(float *)(param_1 + 0x90) - DAT_00456324) * *(float *)(iVar2 + 0x34);
    fparam_0 = *(float *)(param_1 + 0x94) - DAT_00456328;
    fparam_1 = *(float *)(iVar2 + 0x20) + DAT_00456328 + fparam_0 * fparam_3;
    fparam_2 = DAT_00456328;
    local_c = fparam_1;
    func_004563D0(param_1,&local_10);
  }
  return func_00455CC0(param_1,fparam_0,fparam_1,fparam_2,fparam_3);
}

