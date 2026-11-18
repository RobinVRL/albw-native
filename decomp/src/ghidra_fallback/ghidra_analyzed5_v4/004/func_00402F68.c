#include "ghidra_types.h"

extern int func_00401434(int param_1,uint param_2);
extern int func_0041F5E4(int param_1);
extern int func_00568A68(int *param_1);
extern float DAT_004030c0;

// USA 00402F68 <- EU 00402F48 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 float *
// PARAM param_6 Stack[0x4]:4 float *
// GLOBAL DAT_004030c0 float

undefined4
func_00402F68(int param_1,undefined4 param_2,int *param_3,undefined4 param_4,float *param_5,
             float *param_6)

{
  char cVar1;
  int iVar2;
  uint in_fpscr;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  
  func_00568A68(param_3);
  if ((*(byte *)((int)param_3 + 0xce) & 1) == 0) {
    func_00401434(param_1,0);
  }
  else {
    func_00401434(param_1,0xd00);
  }
  if ((*(byte *)((int)param_3 + 0xce) & 8) == 0) {
    fVar3 = *param_5 + *param_6;
    fVar5 = param_5[1] - param_6[2];
    fVar6 = (ALBW_AS_F32(param_3[0x10]) - param_6[2]) - param_6[3];
    fVar4 = (ALBW_AS_F32(param_3[0xf]) - *param_6) - param_6[1];
  }
  else {
    fVar9 = (float)VectorSignedToFloat((int)(short)param_3[0x29],(byte)(in_fpscr >> 0x15) & 3);
    fVar7 = (float)VectorSignedToFloat((int)*(short *)((int)param_3 + 0xa6),
                                       (byte)(in_fpscr >> 0x15) & 3);
    fVar6 = (float)VectorSignedToFloat((int)(short)param_3[0x2a],(byte)(in_fpscr >> 0x15) & 3);
    fVar4 = (float)VectorSignedToFloat((int)*(short *)((int)param_3 + 0xaa),
                                       (byte)(in_fpscr >> 0x15) & 3);
    fVar3 = (*param_5 + *param_6) - fVar9 * DAT_004030c0;
    fVar5 = (param_5[1] - param_6[2]) + fVar6 * DAT_004030c0;
    fVar6 = (((ALBW_AS_F32(param_3[0x10]) - param_6[2]) + fVar6 * DAT_004030c0) - param_6[3]) +
            fVar4 * DAT_004030c0;
    fVar4 = (((ALBW_AS_F32(param_3[0xf]) - *param_6) + fVar9 * DAT_004030c0) - param_6[1]) +
            fVar7 * DAT_004030c0;
  }
  iVar2 = param_1 + (uint)*(byte *)(param_1 + 0x33) * 0x10;
  uVar8 = ALBW_AS_U32(VectorUnsignedToFloat(*(byte *)(param_1 + 0x33) + 0x20,(byte)(in_fpscr >> 0x15) & 3));
  *(undefined4 *)(param_1 + 0x600) = uVar8;
  cVar1 = *(char *)(param_1 + 0x33);
  *(float *)(iVar2 + 0x400) = fVar3;
  *(float *)(iVar2 + 0x404) = fVar5;
  *(float *)(iVar2 + 0x3f8) = fVar4;
  *(float *)(iVar2 + 0x3fc) = fVar6;
  *(char *)(param_1 + 0x33) = cVar1 + '\x01';
  func_0041F5E4(param_1);
  return param_2;
}

