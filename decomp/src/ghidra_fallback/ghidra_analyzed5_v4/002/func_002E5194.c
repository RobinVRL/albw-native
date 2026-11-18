#include "ghidra_types.h"

extern int func_002E4C30(int *param_1);
extern int func_00521078(int param_1);
extern int func_005487BC(int param_1,float fparam_0);
extern int func_00663E64(undefined4 *param_1,undefined1 param_2);
extern float DAT_002e5234;
extern float DAT_002e5238;
extern float DAT_002e523c;
extern int DAT_002e5240;

// USA 002E5194 <- EU 002E5170 (Ghidra, non-matching)
// GLOBAL DAT_002e5234 float
// GLOBAL DAT_002e5238 float
// GLOBAL DAT_002e523c float
// GLOBAL DAT_002e5240 int

undefined4 func_002E5194(int *param_1)

{
  float fVar1;
  bool bVar2;
  int iVar3;
  float fVar4;
  
  fVar1 = DAT_002e5234;
  fVar4 = DAT_002e5234 + (ALBW_AS_F32(param_1[0xf5]) - ALBW_AS_F32(param_1[0x242])) * DAT_002e5238;
  param_1[0x13c] = (int)ALBW_AS_U32(fVar4);
  if (fVar4 < fVar1) {
    param_1[0x13c] = (int)ALBW_AS_U32(fVar1);
  }
  bVar2 = func_00521078((int)param_1);
  if (bVar2) {
    iVar3 = func_005487BC((int)param_1,DAT_002e523c);
    if ((iVar3 == 0) ||
       (DAT_002e5240 <=
        (int)ALBW_AS_U32(((ALBW_AS_F32(param_1[0xf4]) - ALBW_AS_F32(param_1[2])) *
              (ALBW_AS_F32(param_1[0xf4]) - ALBW_AS_F32(param_1[2])) +
             (ALBW_AS_F32(param_1[0xf6]) - ALBW_AS_F32(param_1[4])) * (ALBW_AS_F32(param_1[0xf6]) - ALBW_AS_F32(param_1[4]))
             )))) {
      return func_00663E64(param_1 + 0x233,4);
    }
    func_002E4C30(param_1);
    func_00663E64(param_1 + 0x233,0);
  }
  return 0;
}

