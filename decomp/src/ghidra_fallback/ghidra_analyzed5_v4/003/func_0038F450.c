#include "ghidra_types.h"

extern int func_004ED534(int param_1,int param_2);
extern int func_004ED5E4(int param_1);
extern int func_004ED600(int param_1,float fparam_0);
extern int func_00581D60(int param_1);
extern int func_00588BF0(int param_1,int param_2);
extern int *DAT_0038f500;
extern int *DAT_0038f504;
extern float DAT_0038f508;
extern float DAT_0038f50c;
extern float DAT_0038f510;

// USA 0038F450 <- EU 0038F42C (Ghidra, non-matching)
// GLOBAL DAT_0038f500 int *
// GLOBAL DAT_0038f504 int *
// GLOBAL DAT_0038f508 float
// GLOBAL DAT_0038f50c float
// GLOBAL DAT_0038f510 float

undefined4 func_0038F450(int param_1)

{
  short sVar1;
  int *piVar2;
  bool bVar3;
  int iVar4;
  uint in_fpscr;
  float fVar5;
  
  if ((((*(short *)(param_1 + 0x36) == 0) || (bVar3 = func_00588BF0(param_1,0), bVar3)) &&
      (bVar3 = func_00588BF0(param_1,1), !bVar3)) &&
     ((*(char *)(param_1 + 0x40c) == '\0' ||
      (sVar1 = *(short *)(param_1 + 0x54), iVar4 = func_00581D60(*DAT_0038f500), sVar1 == iVar4))))
  {
    piVar2 = DAT_0038f504;
    func_004ED600(*DAT_0038f504,*(float *)(param_1 + 0x48));
    if (*(short *)(param_1 + 0x2c) != 0) {
      fVar5 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x2c),
                                         (byte)(in_fpscr >> 0x15) & 3);
      func_004ED534(*piVar2,(int)(fVar5 * DAT_0038f508 * DAT_0038f50c * DAT_0038f510));
    }
    if ((*(ushort *)(param_1 + 0x32) & 2) != 0) {
      return func_004ED5E4(*piVar2);
    }
  }
  return 0;
}

