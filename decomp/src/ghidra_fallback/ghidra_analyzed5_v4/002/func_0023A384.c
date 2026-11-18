#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern float func_00115DC8(float *param_1);
extern int func_0023BC9C(int param_1);
extern int func_0052FBA0(int param_1,uint param_2);
extern int *DAT_0023a508;
extern uint *DAT_0023a50c;
extern undefined4 *DAT_0023a510;
extern undefined4 DAT_0023a514;
extern undefined4 DAT_0023a518;
extern int DAT_0023a51c;
extern float DAT_0023a520;

// USA 0023A384 <- EU 0023A384 (Ghidra, non-matching)
// GLOBAL DAT_0023a508 int *
// GLOBAL DAT_0023a50c uint *
// GLOBAL DAT_0023a510 undefined4 *
// GLOBAL DAT_0023a514 undefined4
// GLOBAL DAT_0023a518 undefined4
// GLOBAL DAT_0023a51c int
// GLOBAL DAT_0023a520 float

undefined4 func_0023A384(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  
  if (*(int *)(param_2 + 0x2c) != 0) {
    puVar1 = (undefined4 *)func_0052FBA0(*DAT_0023a508 + 0x3dbbc,*(uint *)(param_2 + 0x28));
    if (((*DAT_0023a50c & 1) == 0) && (iVar2 = func_00100174((int *)DAT_0023a50c), iVar2 != 0)) {
      *DAT_0023a510 = DAT_0023a514;
    }
    if ((puVar1 == (undefined4 *)0x0) ||
       (iVar2 = (**(code **)*puVar1)(puVar1,DAT_0023a510), iVar2 == 0)) {
      puVar1 = (undefined4 *)0x0;
    }
    iVar2 = DAT_0023a51c;
    uVar6 = DAT_0023a518;
    if ((puVar1 != (undefined4 *)0x0) && (*(char *)(puVar1 + 0x10d) != '\0')) {
      *(float *)(param_1 + 0x434) = *(float *)(param_1 + 0x3d0) - ALBW_AS_F32(puVar1[0xf4]);
      *(undefined4 *)(param_1 + 0x438) = uVar6;
      *(float *)(param_1 + 0x43c) = *(float *)(param_1 + 0x3d8) - ALBW_AS_F32(puVar1[0xf6]);
      fVar4 = *(float *)(param_1 + 0x3d0) - ALBW_AS_F32(puVar1[0xf4]);
      fVar3 = *(float *)(param_1 + 0x3d4) - ALBW_AS_F32(puVar1[0xf5]);
      fVar5 = *(float *)(param_1 + 0x3d8) - ALBW_AS_F32(puVar1[0xf6]);
      fVar3 = SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar5 * fVar5);
      if (iVar2 < (int)ALBW_AS_U32(fVar3)) {
        *(float *)(param_1 + 0x438) = DAT_0023a520 / fVar3;
      }
      func_00115DC8((float *)(param_1 + 0x434));
      *(undefined4 *)(param_1 + 0x468) = *(undefined4 *)(param_2 + 0x28);
      if (*(int *)(param_1 + 0x464) == -1) {
        *(undefined4 *)(param_1 + 0x464) = 0;
        *(float *)(param_1 + 0x440) = ALBW_AS_F32(puVar1[0xf4]) - *(float *)(param_1 + 0x3d0);
        *(undefined4 *)(param_1 + 0x444) = uVar6;
        *(float *)(param_1 + 0x448) = ALBW_AS_F32(puVar1[0xf6]) - *(float *)(param_1 + 0x3d8);
        func_00115DC8((float *)(param_1 + 0x440));
      }
      func_0023BC9C((int)puVar1);
    }
  }
  return 0;
}

