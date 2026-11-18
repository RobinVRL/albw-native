#include "ghidra_types.h"

extern int DAT_00567168;
extern int DAT_0056716c;

// USA 005670D8 <- EU 005670B0 (Ghidra, non-matching)
// GLOBAL DAT_00567168 int
// GLOBAL DAT_0056716c int

float func_005670D8(int param_1,int param_2,float fparam_0)

{
  int iVar1;
  int *piVar2;
  float fVar3;
  
  piVar2 = (int *)(param_2 + (uint)*(ushort *)(param_1 + 10) * 0x20);
  if ((fparam_0 < ALBW_AS_F32(piVar2[3])) ||
     ((*piVar2 != 0 &&
      (iVar1 = (**(code **)(DAT_00567168 + (uint)*(byte *)(param_1 + 0xd) * 4))(param_1,piVar2),
      iVar1 != 0)))) {
    if (ALBW_AS_F32(piVar2[2]) <= fparam_0) goto LAB_00567138;
  }
  (**(code **)(DAT_0056716c + (uint)*(byte *)(param_1 + 0xd) * 4))(param_1,piVar2);
LAB_00567138:
  fVar3 = fparam_0 - ALBW_AS_F32(piVar2[2]);
  return ALBW_AS_F32(piVar2[4]) + ALBW_AS_F32(piVar2[5]) * fVar3 +
         (ALBW_AS_F32(piVar2[6]) + ALBW_AS_F32(piVar2[7]) * fVar3) * fVar3 * fVar3;
}

