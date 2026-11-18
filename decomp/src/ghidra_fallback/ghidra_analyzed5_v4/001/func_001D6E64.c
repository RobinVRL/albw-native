#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern int func_001D681C(int *param_1);
extern int func_00392E48(undefined4 *param_1,int param_2,undefined4 *param_3,undefined1 param_4);
extern int func_0052107C(int param_1);
extern int func_0065C988(undefined4 *param_1,undefined1 param_2);
extern float DAT_001d6f70;
extern float DAT_001d6f74;
extern float DAT_001d6f78;
extern float DAT_001d6f7c;
extern float DAT_001d6f80;

// USA 001D6E64 <- EU 001D6E64 (Ghidra, non-matching)
// GLOBAL DAT_001d6f70 float
// GLOBAL DAT_001d6f74 float
// GLOBAL DAT_001d6f78 float
// GLOBAL DAT_001d6f7c float
// GLOBAL DAT_001d6f80 float

undefined4 func_001D6E64(int *param_1)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar7 = DAT_001d6f78;
  fVar8 = DAT_001d6f74;
  fVar6 = ALBW_AS_F32(param_1[0xf8]) - DAT_001d6f70;
  param_1[0xf8] = (int)ALBW_AS_U32(fVar6);
  if (fVar6 < fVar8) {
    param_1[0xee] = 0xff;
  }
  if ((uint)ALBW_AS_U32(fVar7) <= (uint)ALBW_AS_U32(fVar6)) {
    fVar6 = DAT_001d6f7c;
  }
  param_1[0xf8] = (int)ALBW_AS_U32(fVar6);
  func_00115C54((float *)(param_1 + 0xf4),(float *)(param_1 + 0xf4),(float *)(param_1 + 0xf7));
  fVar7 = ALBW_AS_F32(param_1[0xf5]);
  if ((fVar7 <= ALBW_AS_F32(param_1[3])) &&
     (iVar3 = func_00392E48(param_1 + 0xf4,1,(undefined4 *)0x0,0), iVar3 == 0)) {
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
    func_00115D70((float *)(param_1 + 0xf7),(float *)(param_1 + 0xf7),DAT_001d6f80);
    func_001D681C(param_1);
    bVar2 = *(char *)((int)param_1 + 0x516) + 1;
    *(byte *)((int)param_1 + 0x516) = bVar2;
    if (2 < bVar2) {
      func_0065C988(param_1 + 0x135,3);
    }
  }
  return 0;
}

