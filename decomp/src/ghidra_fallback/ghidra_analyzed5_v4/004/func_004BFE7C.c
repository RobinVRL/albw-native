#include "ghidra_types.h"

extern int func_0014F85C(int param_1,uint param_2,undefined4 *param_3,undefined4 param_4,float fparam_0);
extern int func_001E5FC4(uint *param_1,float *param_2,int *param_3,uint *param_4,uint param_5,float fparam_0);
extern float DAT_004bff0c;
extern int DAT_004bff10;
extern float DAT_004bff14;
extern undefined4 DAT_004bff18;
extern undefined4 *DAT_004bff1c;
extern float DAT_004bff20;

// USA 004BFE7C <- EU 004BFE54 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 uint
// GLOBAL DAT_004bff0c float
// GLOBAL DAT_004bff10 int
// GLOBAL DAT_004bff14 float
// GLOBAL DAT_004bff18 undefined4
// GLOBAL DAT_004bff1c undefined4 *
// GLOBAL DAT_004bff20 float

undefined4
func_004BFE7C(int param_1,float *param_2,int *param_3,uint *param_4,uint param_5,float fparam_0)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  
  uVar1 = func_001E5FC4((uint *)(param_1 + 0x7c4),param_2,param_3,param_4,param_5,fparam_0);
  if ((uint)*(byte *)(param_1 + 0x852) == (int)*(char *)(param_1 + 0x85c)) {
    fVar3 = *(float *)(param_1 + 0x8b8);
  }
  else {
    fVar3 = *(float *)(param_1 + 0x8b4);
  }
  fVar2 = (*(float *)(param_1 + 0x834) / fVar3) * DAT_004bff0c;
  fVar3 = DAT_004bff0c;
  if (((int)ALBW_AS_U32(fVar2) <= DAT_004bff10) && (fVar3 = fVar2, (int)ALBW_AS_U32(fVar2) < 0x3f400000)) {
    fVar3 = DAT_004bff14;
  }
  *(float *)(*(int *)(*(int *)(param_1 + 0x7ac) + 0x14) + 0x10) = fVar3;
  if ((*(char *)(param_1 + 0x85d) != '\0') || ((*(uint *)(param_1 + 0x8ac) & 0x200) != 0)) {
    *(undefined4 *)(param_1 + 0x3b8) = 1;
    func_0014F85C(param_1,0,DAT_004bff1c,DAT_004bff18,DAT_004bff20);
  }
  return uVar1;
}

