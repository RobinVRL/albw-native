#include "ghidra_types.h"

extern longlong func_001104E4(int param_1,int param_2);
extern ulonglong func_00110710(uint param_1,uint param_2);

// USA 003F41F8 <- EU 003F41D8 (Ghidra, non-matching)

void func_003F41F8(float *param_1,float *param_2,uint *param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint in_fpscr;
  float fVar5;
  float fVar6;
  longlong lVar7;
  undefined8 uVar8;
  
  uVar4 = (uint)*(short *)(param_4 + 8);
  uVar3 = (uint)*(short *)(param_4 + 10);
  uVar1 = *param_3;
  uVar2 = uVar4;
  if (uVar4 == 0) {
    uVar1 = uVar1 * uVar3;
    uVar2 = param_3[1];
  }
  lVar7 = func_001104E4(uVar1,uVar2);
  uVar1 = (uint)lVar7;
  if ((*(char *)(param_4 + 2) == '\0') || (uVar1 < uVar3)) {
    if ((uVar4 != 0) && ((*(char *)(param_4 + 2) == '\0' && (*(char *)(param_4 + 1) != '\0')))) {
      uVar1 = uVar1 + param_3[0x54];
    }
    uVar8 = func_00110710(uVar1,uVar3);
    uVar8 = func_00110710((uint)*(byte *)((int)((ulonglong)uVar8 >> 0x20) + param_4 + 0xc),
                          (uint)*(byte *)(param_4 + 3));
    fVar5 = (float)VectorSignedToFloat((int)((ulonglong)uVar8 >> 0x20),(byte)(in_fpscr >> 0x15) & 3)
    ;
    fVar6 = (float)VectorSignedToFloat((int)uVar8,(byte)(in_fpscr >> 0x15) & 3);
    *param_1 = *(float *)(param_4 + 0x30) * fVar5;
    *param_2 = *(float *)(param_4 + 0x34) * fVar6;
  }
  return;
}

