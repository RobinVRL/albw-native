#include "ghidra_types.h"

extern int func_001151EC(undefined4 *param_1,undefined4 *param_2);
extern int func_0014D994(float *param_1,float fparam_0,float fparam_1,float fparam_2);
extern int func_004CEAF0(int param_1);
extern int func_0053ED3C(int param_1);
extern float DAT_0038b094;
extern float DAT_0038b098;
extern float DAT_0038b09c;
extern float DAT_0038b0a0;
extern int DAT_0038b0a4;
extern float DAT_0038b0a8;

// USA 0038AFEC <- EU 0038AFC8 (Ghidra, non-matching)
// GLOBAL DAT_0038b094 float
// GLOBAL DAT_0038b098 float
// GLOBAL DAT_0038b09c float
// GLOBAL DAT_0038b0a0 float
// GLOBAL DAT_0038b0a4 int
// GLOBAL DAT_0038b0a8 float

undefined4 func_0038AFEC(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  float fVar3;
  float fparam_2;
  
  fVar3 = DAT_0038b098;
  fparam_2 = DAT_0038b094;
  if (*(char *)(*(int *)(param_1 + 4) + 0x30) == '\0') {
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(float *)(param_1 + 0x20) = fparam_2;
    *(float *)(param_1 + 0x24) = fVar3;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x28);
    if ((iVar1 < 0x32) && (fVar3 = DAT_0038b094, 0x13 < iVar1)) {
      fVar3 = DAT_0038b09c;
    }
    *(int *)(param_1 + 0x28) = iVar1 + 1;
    func_0014D994((float *)(param_1 + 0x20),fVar3,DAT_0038b0a0,fparam_2);
    fparam_2 = *(float *)(param_1 + 0x20);
    if ((int)ALBW_AS_U32(*(float *)(param_1 + 0x20)) < DAT_0038b0a4) {
      fparam_2 = DAT_0038b0a8;
    }
  }
  iVar1 = *(int *)(param_1 + 4);
  *(uint *)(iVar1 + 0x164) = *(uint *)(iVar1 + 0x164) | 0x40000000;
  *(float *)(iVar1 + 0x74) = fparam_2;
  *(float *)(iVar1 + 0x78) = fparam_2;
  *(float *)(iVar1 + 0x7c) = fparam_2;
  puVar2 = (undefined4 *)func_0053ED3C(*(int *)(param_2 + 0x600));
  iVar1 = *(int *)(param_1 + 4);
  *(uint *)(iVar1 + 0x164) = *(uint *)(iVar1 + 0x164) | 0x40000000;
  func_001151EC((undefined4 *)(iVar1 + 0x80),puVar2);
  return func_004CEAF0(*(int *)(param_1 + 4));
}

