// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_005568E8(int param_1);
extern int func_00556A04();
extern int *DAT_001bc84c;
extern float DAT_001bc850;
extern float DAT_001bc854;
extern int DAT_001bc858;
extern int *DAT_001bc85c;
extern uint *DAT_001bc860;
extern undefined4 *DAT_001bc864;
extern undefined4 DAT_001bc868;

// USA 001BC72C <- EU 001BC72C (Ghidra, non-matching)
// GLOBAL DAT_001bc84c int *
// GLOBAL DAT_001bc850 float
// GLOBAL DAT_001bc854 float
// GLOBAL DAT_001bc858 int
// GLOBAL DAT_001bc85c int *
// GLOBAL DAT_001bc860 uint *
// GLOBAL DAT_001bc864 undefined4 *
// GLOBAL DAT_001bc868 undefined4

void func_001BC72C(char *param_1,uint *param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  float fVar5;
  
  if (*param_1 != '\0') {
    return;
  }
  if (param_3 == 0) {
    return;
  }
  iVar4 = *DAT_001bc84c;
  if ((iVar4 == 0) || (uVar1 = func_005568E8(iVar4), *param_2 != uVar1)) {
    puVar3 = (undefined4 *)func_0052FBA0(*DAT_001bc85c + 0x3dbbc,*param_2);
    if (puVar3 == (undefined4 *)0x0) {
      return;
    }
    if (((*DAT_001bc860 & 1) == 0) && (iVar4 = func_00100174((int *)DAT_001bc860), iVar4 != 0)) {
      *DAT_001bc864 = DAT_001bc868;
    }
    iVar4 = (**(code **)*puVar3)(puVar3,DAT_001bc864);
    if (iVar4 == 0) {
      puVar3 = (undefined4 *)0x0;
    }
    if (puVar3 == (undefined4 *)0x0) {
      return;
    }
  }
  else {
    iVar2 = func_00556A04(iVar4);
    if (iVar2 == 0) {
      fVar5 = *(float *)(*(int *)(iVar4 + 0x1c) + 4) -
              (*(float *)(*(int *)(param_1 + 0x8c) + 8) + DAT_001bc850);
      if (fVar5 <= DAT_001bc854) {
        fVar5 = -fVar5;
      }
      if (DAT_001bc858 <= (int)ALBW_AS_U32(fVar5)) {
        return;
      }
    }
  }
  *param_1 = '\x02';
  return;
}

