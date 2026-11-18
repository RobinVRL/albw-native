#include "ghidra_types.h"

extern int func_00563220(int param_1,uint *param_2,int param_3);
extern uint DAT_005636c0;
extern uint DAT_005636c4;
extern float DAT_005636c8;
extern float DAT_005636cc;
extern float DAT_005636d0;
extern int DAT_005636d4;
extern float DAT_005636d8;
extern float DAT_005636dc;
extern uint DAT_005636e0;
extern uint DAT_005636e4;

// USA 00563548 <- EU 00563520 (Ghidra, non-matching)
// GLOBAL DAT_005636c0 uint
// GLOBAL DAT_005636c4 uint
// GLOBAL DAT_005636c8 float
// GLOBAL DAT_005636cc float
// GLOBAL DAT_005636d0 float
// GLOBAL DAT_005636d4 int
// GLOBAL DAT_005636d8 float
// GLOBAL DAT_005636dc float
// GLOBAL DAT_005636e0 uint
// GLOBAL DAT_005636e4 uint

uint * func_00563548(uint *param_1,uint *param_2,int param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  bool bVar7;
  float fVar8;
  float fVar9;
  
  if (param_3 != 0) {
    param_2 = func_00563220(param_1[8],param_2,1);
  }
  uVar2 = DAT_005636c0;
  *param_2 = *(uint *)((int)param_1 + 0x16) & 0xffffff |
             (uint)*(byte *)((int)param_1 + 0x19) << 0x18;
  param_2[1] = uVar2;
  param_2[2] = param_1[1] >> 0x10 | param_1[1] << 0x10;
  param_2[3] = uVar2 + 1;
  uVar2 = DAT_005636c4;
  cVar1 = (char)param_1[3];
  if ((cVar1 == '\x03' || cVar1 == '\x04') || (cVar1 == '\x05')) {
    iVar5 = 1;
  }
  else {
    iVar5 = 0;
  }
  if ((char)param_1[2] == '\f') {
    iVar3 = 2;
  }
  else {
    iVar3 = 0;
  }
  param_2[4] = (uint)*(byte *)((int)param_1 + 0xb) << 1 | iVar5 << 2 | iVar3 << 4 |
               (uint)*(byte *)((int)param_1 + 9) << 8 | (uint)*(byte *)((int)param_1 + 10) << 0xc |
               (uint)(cVar1 == '\x02' || cVar1 == '\x05') << 0x18;
  uVar4 = 0;
  uVar6 = uVar2 + 1;
  param_2[5] = uVar2;
  if ((char)param_1[3] == '\x03' || (char)param_1[3] == '\0') {
    param_2[6] = 0;
    param_2[7] = uVar6;
    goto LAB_0056369c;
  }
  fVar9 = ALBW_AS_F32(param_1[4]);
  if ((fVar9 != DAT_005636c8) && ((uint)((int)ALBW_AS_U32(fVar9) << 1) >> 0x18 != 0xff)) {
    fVar8 = (fVar9 + DAT_005636cc) * DAT_005636d0;
    fVar9 = DAT_005636c8;
    if (DAT_005636c8 <= fVar8) {
      bVar7 = SBORROW4((int)ALBW_AS_U32(fVar8),0x46000000);
      iVar5 = (int)ALBW_AS_U32(fVar8) + -0x46000000;
      fVar9 = DAT_005636dc;
      if ((int)ALBW_AS_U32(fVar8) < 0x46000000) {
        bVar7 = SBORROW4((int)ALBW_AS_U32(fVar8),DAT_005636d4);
        iVar5 = (int)ALBW_AS_U32(fVar8) - DAT_005636d4;
        fVar9 = fVar8;
      }
      if (iVar5 < 0 == bVar7) {
        uVar4 = VectorFloatToUnsigned(fVar9 - DAT_005636d8,3);
        goto LAB_00563680;
      }
    }
    uVar4 = VectorFloatToUnsigned(fVar9 + DAT_005636d8,3);
  }
LAB_00563680:
  param_2[6] = uVar4 | (uint)*(byte *)((int)param_1 + 0x15) << 0x10 | (uint)(byte)param_1[5] << 0x18
  ;
  param_2[7] = uVar6;
LAB_0056369c:
  uVar2 = DAT_005636e0;
  param_2[8] = *param_1 >> 3;
  uVar4 = DAT_005636e4;
  param_2[9] = uVar2;
  param_2[10] = (uint)(byte)param_1[2];
  param_2[0xb] = uVar4;
  return param_2 + 0xc;
}

