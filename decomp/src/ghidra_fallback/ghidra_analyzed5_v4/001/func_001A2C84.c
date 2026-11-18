#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int func_0058A7D4(void);
extern int func_0058A8F0(int param_1);
extern int func_0065A474(undefined4 *param_1,undefined1 param_2);
extern float DAT_001a2d44;
extern float DAT_001a2d48;
extern undefined4 DAT_001a2d4c;
extern int DAT_001a2d50;

// USA 001A2C84 <- EU 001A2C84 (Ghidra, non-matching)
// GLOBAL DAT_001a2d44 float
// GLOBAL DAT_001a2d48 float
// GLOBAL DAT_001a2d4c undefined4
// GLOBAL DAT_001a2d50 int

void func_001A2C84(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  uint in_fpscr;
  float fVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  
  iVar2 = func_0058A8F0(param_1);
  uVar1 = DAT_001a2d4c;
  if (iVar2 != 0) {
    if (*(short *)(param_1 + 0x30) == 1) {
      fVar8 = DAT_001a2d48;
      fVar7 = DAT_001a2d44;
      puVar3 = (uint *)func_0058A7D4();
      uVar4 = func_00111A64(puVar3);
      fVar5 = (float)VectorUnsignedToFloat
                               ((int)((ulonglong)uVar4 * 0x3c >> 0x20),(byte)(in_fpscr >> 0x15) & 3)
      ;
      iVar6 = VectorFloatToUnsigned(fVar5 + fVar7,3);
      iVar2 = iVar6;
      if (iVar6 == 0) {
        iVar2 = DAT_001a2d50;
      }
      *(int *)(param_1 + 0x970) = iVar6;
      if (iVar6 == 0) {
        *(int *)(param_1 + 0x974) = iVar2;
      }
      else {
        fVar7 = (float)VectorUnsignedToFloat(iVar6,(byte)(in_fpscr >> 0x15) & 3);
        *(float *)(param_1 + 0x974) = fVar8 / fVar7;
      }
      *(undefined4 *)(param_1 + 0x96c) = 0;
    }
    else {
      *(undefined4 *)(param_1 + 0x970) = 0xb4;
      *(undefined4 *)(param_1 + 0x974) = uVar1;
      *(undefined4 *)(param_1 + 0x96c) = 0;
    }
    func_0065A474((undefined4 *)(param_1 + 0x8bc),2);
  }
  return;
}

