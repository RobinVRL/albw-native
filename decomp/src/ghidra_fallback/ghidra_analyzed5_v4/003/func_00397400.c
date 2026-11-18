#include "ghidra_types.h"

extern int func_0014D994(float *param_1,float fparam_0,float fparam_1,float fparam_2);
extern float DAT_00397464;
extern float DAT_00397468;
extern float DAT_0039746c;
extern float DAT_00397470;
extern int DAT_00397474;
extern float DAT_00397478;

// USA 00397400 <- EU 003973DC (Ghidra, non-matching)
// GLOBAL DAT_00397464 float
// GLOBAL DAT_00397468 float
// GLOBAL DAT_0039746c float
// GLOBAL DAT_00397470 float
// GLOBAL DAT_00397474 int
// GLOBAL DAT_00397478 float

void func_00397400(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  
  fVar1 = DAT_00397468;
  fVar2 = DAT_00397464;
  if (*(char *)(param_2 + 0x30) == '\0') {
    *(float *)(param_1 + 0x48) = DAT_00397464;
    *(float *)(param_1 + 0x4c) = fVar1;
  }
  else {
    fVar2 = DAT_00397468;
    if ((*(int *)(param_1 + 0x10) < 0x32) && (fVar2 = DAT_00397464, 0x13 < *(int *)(param_1 + 0x10))
       ) {
      fVar2 = DAT_0039746c;
    }
    func_0014D994((float *)(param_1 + 0x48),fVar2,DAT_00397470,DAT_00397464);
    fVar2 = *(float *)(param_1 + 0x48);
    if ((int)ALBW_AS_U32(*(float *)(param_1 + 0x48)) < DAT_00397474) {
      fVar2 = DAT_00397478;
    }
  }
  *(uint *)(param_2 + 0x164) = *(uint *)(param_2 + 0x164) | 0x40000000;
  *(float *)(param_2 + 0x74) = fVar2;
  *(float *)(param_2 + 0x78) = fVar2;
  *(float *)(param_2 + 0x7c) = fVar2;
  return;
}

