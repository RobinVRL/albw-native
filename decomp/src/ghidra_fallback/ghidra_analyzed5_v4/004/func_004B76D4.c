#include "ghidra_types.h"

extern int func_0049ED20(undefined1 *param_1,byte *param_2,byte *param_3,float fparam_0);
extern float DAT_004b7794;
extern int *DAT_004b7798;

// USA 004B76D4 <- EU 004B76AC (Ghidra, non-matching)
// GLOBAL DAT_004b7794 float
// GLOBAL DAT_004b7798 int *

int func_004B76D4(int *param_1)

{
  int iVar1;
  int iVar2;
  uint in_fpscr;
  float fparam_0;
  float fVar3;
  float fVar4;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(uint *)(albw_frame + 0x8))
  #define local_14 (*(int *)(albw_frame + 0xc))
  #define local_10 (*(int *)(albw_frame + 0x10))
  fparam_0 = DAT_004b7794;
  iVar1 = 0;
  if ((char)param_1[4] != '\0') {
    iVar1 = param_1[1];
    param_1[1] = iVar1 + 1;
    fVar4 = (float)VectorSignedToFloat(iVar1 + 1,(byte)(in_fpscr >> 0x15) & 3);
    fVar3 = (float)VectorSignedToFloat(*param_1,(byte)(in_fpscr >> 0x15) & 3);
    if (fparam_0 != fVar3) {
      fparam_0 = (fVar4 - fparam_0) / (fVar3 - fparam_0);
    }
    local_18 = 0xff;
    local_10 = param_1[3];
    local_14 = param_1[2];
    func_0049ED20((undefined1 *)&local_18,(byte *)&local_14,(byte *)&local_10,fparam_0);
    iVar1 = *DAT_004b7798;
    iVar2 = *(int *)(iVar1 + 0x658);
    if (iVar2 != 0) {
      *(undefined1 *)(iVar2 + 0x89) = 1;
      *(uint *)(*(int *)(iVar2 + 4) + 0x2c) =
           local_18 << 0x18 | ((local_18 << 0x10) >> 0x18) << 0x10 | ((local_18 << 8) >> 0x18) << 8
           | local_18 >> 0x18;
      iVar1 = *param_1;
      if (param_1[1] < iVar1) {
        return iVar1;
      }
    }
    *(undefined1 *)(param_1 + 4) = 0;
  }
  return iVar1;
}

