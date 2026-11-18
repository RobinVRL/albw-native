#include "ghidra_types.h"

extern longlong func_001104E4(int param_1,int param_2);
extern ulonglong func_00110710(uint param_1,uint param_2);

// USA 003EE3A0 <- EU 003EE380 (Ghidra, non-matching)

void func_003EE3A0(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint in_fpscr;
  float fVar6;
  float fVar7;
  float fVar8;
  longlong lVar9;
  undefined8 uVar10;
  
  uVar1 = param_1[0x4e];
  uVar5 = (uint)*(short *)(uVar1 + 0x340);
  uVar2 = *param_1;
  uVar4 = (uint)*(short *)(param_1[0x4e] + 0x342);
  uVar3 = uVar5;
  if (uVar5 == 0) {
    uVar2 = uVar2 * uVar4;
    uVar3 = param_1[1];
  }
  lVar9 = func_001104E4(uVar2,uVar3);
  uVar3 = (uint)lVar9;
  if ((*(char *)(uVar1 + 0x33a) == '\0') || (uVar3 < uVar4)) {
    if ((uVar5 != 0) && ((*(char *)(uVar1 + 0x33a) == '\0' && (*(char *)(uVar1 + 0x339) != '\0'))))
    {
      uVar3 = uVar3 + param_1[0x54];
    }
    uVar10 = func_00110710(uVar3,uVar4);
    uVar10 = func_00110710((uint)*(byte *)((int)((ulonglong)uVar10 >> 0x20) + uVar1 + 0x344),
                           (uint)*(byte *)(uVar1 + 0x33b));
    fVar8 = *(float *)(uVar1 + 0x36c);
    fVar7 = (float)VectorSignedToFloat((int)uVar10,(byte)(in_fpscr >> 0x15) & 3);
    fVar6 = (float)VectorSignedToFloat((int)((ulonglong)uVar10 >> 0x20),(byte)(in_fpscr >> 0x15) & 3
                                      );
    param_1[0x1d] = (uint)ALBW_AS_U32((*(float *)(uVar1 + 0x368) * fVar6));
    param_1[0x1e] = (uint)ALBW_AS_U32((fVar8 * fVar7));
  }
  return;
}

