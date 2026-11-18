#include "ghidra_types.h"

extern int func_00520FC0(void);
extern int func_00588BE4(int param_1);
extern int func_00588BF0(int param_1,int param_2);
extern int func_00658C58(undefined4 *param_1,undefined1 param_2);
extern int *DAT_001750fc;
extern int DAT_00175100;
extern int DAT_00175104;

// USA 00175024 <- EU 00175024 (Ghidra, non-matching)
// GLOBAL DAT_001750fc int *
// GLOBAL DAT_00175100 int
// GLOBAL DAT_00175104 int

undefined4 func_00175024(int param_1)

{
  bool bVar1;
  int iVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  
  if ((*(short *)(param_1 + 0x36) == 0) || (bVar1 = func_00588BF0(param_1,0), !bVar1)) {
    iVar2 = func_00588BE4(param_1);
    if (iVar2 == *DAT_001750fc) {
      pfVar3 = (float *)func_00520FC0();
      fVar4 = *(float *)(param_1 + 0x3d0) - *pfVar3;
      fVar5 = *(float *)(param_1 + 0x3d8) - pfVar3[2];
      if ((int)ALBW_AS_U32(SQRT(fVar4 * fVar4 + fVar5 * fVar5)) < DAT_00175100) {
        return 0;
      }
    }
    else {
      pfVar3 = (float *)func_00520FC0();
      fVar5 = *(float *)(param_1 + 0x3d0) - *pfVar3;
      fVar4 = *(float *)(param_1 + 0x3d8) - pfVar3[2];
      if ((int)ALBW_AS_U32(SQRT(fVar5 * fVar5 + fVar4 * fVar4)) < DAT_00175104) {
        return 0;
      }
    }
  }
  return func_00658C58((undefined4 *)(param_1 + 0x40c),3);
}

