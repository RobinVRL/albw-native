#include "ghidra_types.h"

extern int func_0014E2A0(int param_1,undefined4 param_2,undefined4 param_3,uint param_4,undefined4 param_5 ,int param_6);
extern undefined4 func_0065F560(undefined4 *param_1,undefined1 param_2,float fparam_0);
extern int DAT_00247430;

// USA 002473B0 <- EU 002473B0 (Ghidra, non-matching)
// GLOBAL DAT_00247430 int

void func_002473B0(int param_1)

{
  int iVar1;
  uint in_fpscr;
  float fVar2;
  float fparam_0;
  
  func_0014E2A0(param_1,*(undefined4 *)(param_1 + 0x444),param_1 + 0x494,0x1000,0,0);
  iVar1 = DAT_00247430;
  fVar2 = (float)VectorSignedToFloat(*(undefined4 *)(param_1 + 0x410),(byte)(in_fpscr >> 0x15) & 3);
  fparam_0 = *(float *)(param_1 + 0x45c) * fVar2 * fVar2 + *(float *)(param_1 + 0x460) * fVar2 +
             *(float *)(param_1 + 0x464);
  *(float *)(param_1 + 0x454) = fparam_0;
  if (iVar1 <= (int)ALBW_AS_U32(fVar2)) {
    func_0065F560((undefined4 *)(param_1 + 0x410),2,fparam_0);
  }
  return;
}

