#include "ghidra_types.h"

extern int func_004D7F70(float *param_1,uint param_2);
extern int func_004F4A68();
extern int func_004FB220(int param_1,int param_2,int param_3);
extern float *DAT_0012be94;
extern float DAT_0012be98;
extern float *DAT_0012be9c;
extern float DAT_0012bea0;

// USA 0012BDAC <- EU 0012BDAC (Ghidra, non-matching)
// GLOBAL DAT_0012be94 float *
// GLOBAL DAT_0012be98 float
// GLOBAL DAT_0012be9c float *
// GLOBAL DAT_0012bea0 float

undefined4 func_0012BDAC(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  float fVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(float *)(albw_frame + 0x8))
  #define local_14 (*(float *)(albw_frame + 0xc))
  #define local_10 (*(float *)(albw_frame + 0x10))
  iVar1 = func_004FB220(param_1,*(ushort *)(param_2 + 0x20) & 0x1f,
                        (*(ushort *)(param_2 + 0x20) & 0x7e0) >> 5);
  if (iVar1 != 0) {
    return 0;
  }
  *(undefined1 *)(param_1 + 0x910) = 0;
  fVar3 = *(float *)(param_2 + 4) * *DAT_0012be94 + *(float *)(param_2 + 8) * DAT_0012be94[1] +
          *(float *)(param_2 + 0xc) * DAT_0012be94[2];
  if (fVar3 <= DAT_0012be98) {
    fVar3 = -fVar3;
  }
  if ((int)ALBW_AS_U32(fVar3) < 0x3f000000) {
    local_18 = *DAT_0012be9c;
    local_14 = DAT_0012be9c[1];
    local_10 = DAT_0012be9c[2];
    func_004D7F70(&local_18,*(uint *)(param_1 + 1000));
    if ((uint)ALBW_AS_U32(DAT_0012bea0) <
        (uint)ALBW_AS_U32((*(float *)(param_2 + 4) * local_18 + *(float *)(param_2 + 8) * local_14 +
              *(float *)(param_2 + 0xc) * local_10))) {
      *(undefined1 *)(param_1 + 0x910) = 1;
    }
  }
  uVar2 = func_004F4A68(param_1,param_2);
  return uVar2;
}

