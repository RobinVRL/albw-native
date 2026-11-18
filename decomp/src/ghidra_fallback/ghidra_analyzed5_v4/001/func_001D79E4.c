#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern int func_001D681C(int *param_1);
extern int func_00392E48(undefined4 *param_1,int param_2,undefined4 *param_3,undefined1 param_4);
extern int func_0052107C(int param_1);
extern int func_0065C988(undefined4 *param_1,undefined1 param_2);
extern float DAT_001d7af0;
extern float DAT_001d7af4;
extern float DAT_001d7af8;
extern float DAT_001d7afc;
extern float DAT_001d7b00;

// USA 001D79E4 <- EU 001D79E4 (Ghidra, non-matching)
// GLOBAL DAT_001d7af0 float
// GLOBAL DAT_001d7af4 float
// GLOBAL DAT_001d7af8 float
// GLOBAL DAT_001d7afc float
// GLOBAL DAT_001d7b00 float

undefined4 func_001D79E4(int *param_1)

{
  bool bVar1;
  int iVar2;
  byte bVar3;
  bool bVar4;
  bool bVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar8 = DAT_001d7afc;
  fVar7 = DAT_001d7af4;
  fVar6 = ALBW_AS_F32(param_1[0xf8]) - DAT_001d7af0;
  param_1[0xf8] = (int)ALBW_AS_U32(fVar6);
  if ((uint)ALBW_AS_U32(fVar7) <= (uint)ALBW_AS_U32(fVar6)) {
    fVar6 = DAT_001d7af8;
  }
  param_1[0xf8] = (int)ALBW_AS_U32(fVar6);
  if (fVar6 < fVar8) {
    param_1[0xee] = 0xff;
  }
  func_00115C54((float *)(param_1 + 0xf4),(float *)(param_1 + 0xf4),(float *)(param_1 + 0xf7));
  fVar7 = ALBW_AS_F32(param_1[0xf5]);
  if ((fVar7 <= ALBW_AS_F32(param_1[3])) &&
     (iVar2 = func_00392E48(param_1 + 0xf4,1,(undefined4 *)0x0,0), iVar2 == 0)) {
    return func_0065C988(param_1 + 0x135,6);
  }
  bVar1 = func_0052107C((int)param_1);
  bVar5 = false;
  bVar1 = !bVar1;
  bVar4 = false;
  if (!bVar1) {
    fVar7 = ALBW_AS_F32(param_1[0xf8]);
    bVar5 = fVar8 < fVar7;
    bVar1 = fVar8 == fVar7;
    bVar4 = NAN(fVar8) || NAN(fVar7);
  }
  if (!bVar1 && bVar5 == bVar4) {
    param_1[0xf8] = (int)ALBW_AS_U32(-fVar7);
    func_00115D70((float *)(param_1 + 0xf7),(float *)(param_1 + 0xf7),DAT_001d7b00);
    func_001D681C(param_1);
    bVar3 = *(char *)((int)param_1 + 0x516) + 1;
    *(byte *)((int)param_1 + 0x516) = bVar3;
    if (2 < bVar3) {
      func_0065C988(param_1 + 0x135,3);
    }
  }
  return 0;
}

