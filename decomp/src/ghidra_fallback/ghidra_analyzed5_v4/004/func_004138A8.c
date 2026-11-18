#include "ghidra_types.h"

extern float DAT_0041396c;
extern float DAT_00413970;
extern float DAT_00413974;
extern int DAT_00413978;
extern int DAT_0041397c;
extern int DAT_00413980;
extern float DAT_00413984;
extern float DAT_00413988;
extern float DAT_0041398c;

// USA 004138A8 <- EU 00413888 (Ghidra, non-matching)
// GLOBAL DAT_0041396c float
// GLOBAL DAT_00413970 float
// GLOBAL DAT_00413974 float
// GLOBAL DAT_00413978 int
// GLOBAL DAT_0041397c int
// GLOBAL DAT_00413980 int
// GLOBAL DAT_00413984 float
// GLOBAL DAT_00413988 float
// GLOBAL DAT_0041398c float

float func_004138A8(byte *param_1,float fparam_0)

{
  int iVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = DAT_0041396c;
  if ((fparam_0 <= DAT_0041396c) && (fVar2 = fparam_0, fparam_0 < DAT_00413970)) {
    fVar2 = DAT_00413970;
  }
  iVar1 = DAT_00413980;
  if ((param_1[3] == 0) && (*(char *)(DAT_00413978 + 1) == '\x02')) {
    iVar1 = DAT_0041397c;
  }
  iVar1 = *(int *)(iVar1 + (uint)*param_1 * 4);
  fVar2 = *(float *)(iVar1 + (int)(DAT_00413974 +
                                  (fVar2 + DAT_0041396c) * DAT_00413974 * DAT_00413984) * 4);
  if (param_1[1] != 0) {
    fVar2 = fVar2 / *(float *)(iVar1 + 0x200);
  }
  fVar3 = DAT_0041398c;
  if (param_1[2] != 0) {
    fVar3 = DAT_0041396c;
  }
  if ((fVar2 <= fVar3) && (fVar3 = fVar2, fVar2 < DAT_00413988)) {
    return DAT_00413988;
  }
  return fVar3;
}

