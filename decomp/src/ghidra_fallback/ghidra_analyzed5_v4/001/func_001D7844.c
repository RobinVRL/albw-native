#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern int func_001D681C(int *param_1);
extern int func_00392E48(undefined4 *param_1,int param_2,undefined4 *param_3,undefined1 param_4);
extern int func_0052107C(int param_1);
extern int func_0065C988(undefined4 *param_1,undefined1 param_2);
extern float DAT_001d793c;
extern float DAT_001d7940;
extern float DAT_001d7944;
extern float DAT_001d7948;
extern float DAT_001d794c;

// USA 001D7844 <- EU 001D7844 (Ghidra, non-matching)
// GLOBAL DAT_001d793c float
// GLOBAL DAT_001d7940 float
// GLOBAL DAT_001d7944 float
// GLOBAL DAT_001d7948 float
// GLOBAL DAT_001d794c float

undefined4 func_001D7844(int *param_1)

{
  float fVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  float fVar5;
  
  fVar1 = DAT_001d7940;
  fVar5 = ALBW_AS_F32(param_1[0xf8]) - DAT_001d793c;
  param_1[0xf8] = (int)ALBW_AS_U32(fVar5);
  if ((uint)ALBW_AS_U32(fVar1) <= (uint)ALBW_AS_U32(fVar5)) {
    fVar5 = DAT_001d7944;
  }
  param_1[0xf8] = (int)ALBW_AS_U32(fVar5);
  func_00115C54((float *)(param_1 + 0xf4),(float *)(param_1 + 0xf4),(float *)(param_1 + 0xf7));
  if ((ALBW_AS_F32(param_1[0xf5]) <= ALBW_AS_F32(param_1[3])) &&
     (iVar4 = func_00392E48(param_1 + 0xf4,1,(undefined4 *)0x0,0), iVar4 == 0)) {
    return func_0065C988(param_1 + 0x135,6);
  }
  bVar2 = func_0052107C((int)param_1);
  if (bVar2) {
    if (ALBW_AS_F32(param_1[0xf8]) < DAT_001d7948) {
      param_1[0xf8] = (int)ALBW_AS_U32(-ALBW_AS_F32(param_1[0xf8]));
      func_00115D70((float *)(param_1 + 0xf7),(float *)(param_1 + 0xf7),DAT_001d794c);
      func_001D681C(param_1);
      bVar3 = *(char *)((int)param_1 + 0x516) + 1;
      *(byte *)((int)param_1 + 0x516) = bVar3;
      if (2 < bVar3) {
        func_0065C988(param_1 + 0x135,3);
      }
    }
  }
  return 0;
}

