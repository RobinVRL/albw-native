#include "ghidra_types.h"

extern longlong func_001104E4(int param_1,int param_2);
extern ulonglong func_00110710(uint param_1,uint param_2);

// USA 003EE4B0 <- EU 003EE490 (Ghidra, non-matching)

void func_003EE4B0(uint *param_1)

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
  float fVar9;
  longlong lVar10;
  undefined8 uVar11;
  
  uVar3 = param_1[0x4e];
  uVar1 = *param_1;
  uVar5 = (uint)*(short *)(uVar3 + 0x340);
  uVar4 = (uint)*(short *)(uVar3 + 0x342);
  uVar2 = uVar5;
  if (uVar5 == 0) {
    uVar1 = uVar1 * uVar4;
    uVar2 = param_1[1];
  }
  lVar10 = func_001104E4(uVar1,uVar2);
  uVar1 = (uint)lVar10;
  if ((*(char *)(uVar3 + 0x33a) == '\0') || (uVar1 < uVar4)) {
    if ((uVar5 != 0) && ((*(char *)(uVar3 + 0x33a) == '\0' && (*(char *)(uVar3 + 0x339) != '\0'))))
    {
      uVar1 = uVar1 + param_1[0x54];
    }
    uVar11 = func_00110710(uVar1,uVar4);
    uVar11 = func_00110710((uint)*(byte *)((int)((ulonglong)uVar11 >> 0x20) + uVar3 + 0x344),
                           (uint)*(byte *)(uVar3 + 0x33b));
    fVar8 = *(float *)(uVar3 + 0x36c);
    fVar7 = (float)VectorSignedToFloat((int)uVar11,(byte)(in_fpscr >> 0x15) & 3);
    fVar6 = (float)VectorSignedToFloat((int)((ulonglong)uVar11 >> 0x20),(byte)(in_fpscr >> 0x15) & 3
                                      );
    param_1[0x1d] = (uint)ALBW_AS_U32((*(float *)(uVar3 + 0x368) * fVar6));
    param_1[0x1e] = (uint)ALBW_AS_U32((fVar8 * fVar7));
  }
  fVar6 = *(float *)(uVar3 + 0x378);
  fVar7 = *(float *)(uVar3 + 0x390);
  fVar9 = *(float *)(uVar3 + 0x3a4);
  fVar8 = *(float *)(uVar3 + 0x38c);
  param_1[0x1f] = (uint)ALBW_AS_U32((ALBW_AS_F32(param_1[0x1f]) + *(float *)(uVar3 + 0x374)));
  param_1[0x1c] = (uint)ALBW_AS_U32((ALBW_AS_F32(param_1[0x1c]) + fVar9));
  param_1[0x20] = (uint)ALBW_AS_U32((ALBW_AS_F32(param_1[0x20]) + fVar6));
  param_1[0x21] = (uint)ALBW_AS_U32((ALBW_AS_F32(param_1[0x21]) + fVar8));
  param_1[0x22] = (uint)ALBW_AS_U32((ALBW_AS_F32(param_1[0x22]) + fVar7));
  return;
}

