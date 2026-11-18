#include "ghidra_types.h"

extern int DAT_00564694;
extern int DAT_00564698;
extern float DAT_0056469c;
extern float DAT_005646a0;

// USA 00564688 <- EU 00564660 (Ghidra, non-matching)
// GLOBAL DAT_00564694 int
// GLOBAL DAT_00564698 int
// GLOBAL DAT_0056469c float
// GLOBAL DAT_005646a0 float

float func_00564688(int param_1)

{
  bool bVar1;
  float fVar2;
  
  bVar1 = *(char *)(DAT_00564698 + 0x84) != '\0';
  fVar2 = *(float *)(param_1 + 0x48);
  if (bVar1) {
    fVar2 = DAT_005646a0;
  }
  if (!bVar1) {
    fVar2 = *(float *)(DAT_00564698 + 0x80);
  }
  return (*(float *)(param_1 + 0x48) / *(float *)(DAT_00564694 + 8)) * DAT_0056469c * fVar2;
}

