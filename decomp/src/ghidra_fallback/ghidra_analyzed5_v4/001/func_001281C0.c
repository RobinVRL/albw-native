#include "ghidra_types.h"

extern int func_00392E48(undefined4 *param_1,int param_2,undefined4 *param_3,undefined1 param_4);
extern int func_006568D8(undefined4 *param_1,undefined1 param_2);
extern float DAT_001282a0;
extern float DAT_001282a4;
extern float DAT_001282a8;

// USA 001281C0 <- EU 001281C0 (Ghidra, non-matching)
// GLOBAL DAT_001282a0 float
// GLOBAL DAT_001282a4 float
// GLOBAL DAT_001282a8 float

void func_001281C0(int param_1)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  uint in_fpscr;
  float fVar4;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 ((float *)(albw_frame + 0x8))
  fVar4 = DAT_001282a0;
  *(float *)(param_1 + 0x3dc) = DAT_001282a0;
  *(float *)(param_1 + 0x3e0) = fVar4;
  *(float *)(param_1 + 0x3e4) = fVar4;
  if (*(char *)(param_1 + 0x928) == '\0') {
    local_18[0] = fVar4;
    iVar3 = func_00392E48((undefined4 *)(param_1 + 0x3d0),0,local_18,0);
    if (iVar3 == 4) {
      *(float *)(param_1 + 0x904) = local_18[0];
      local_18[0] = *(float *)(param_1 + 0x3d4) - local_18[0];
      uVar1 = in_fpscr & 0xfffffff | (uint)(local_18[0] < fVar4) << 0x1f |
              (uint)(local_18[0] == fVar4) << 0x1e;
      bVar2 = (byte)(uVar1 >> 0x18);
      if ((bool)(bVar2 >> 6 & 1) || (bool)(bVar2 >> 7) != (NAN(local_18[0]) || NAN(fVar4))) {
        local_18[0] = -local_18[0];
      }
      local_18[0] = local_18[0] * DAT_001282a4;
      *(int *)(param_1 + 0x908) = (int)local_18[0];
      iVar3 = (int)local_18[0] + 0x3c;
      *(int *)(param_1 + 0x8e4) = iVar3;
      if (iVar3 == 0) {
        *(float *)(param_1 + 0x8e8) = fVar4;
      }
      else {
        fVar4 = (float)VectorUnsignedToFloat(iVar3,(byte)(uVar1 >> 0x15) & 3);
        *(float *)(param_1 + 0x8e8) = DAT_001282a8 / fVar4;
      }
      *(undefined4 *)(param_1 + 0x8e0) = 0;
      return;
    }
    func_006568D8((undefined4 *)(param_1 + 0x8bc),2);
  }
  else {
    *(undefined4 *)(param_1 + 0x904) = *(undefined4 *)(param_1 + 0xc);
  }
  return;
}

