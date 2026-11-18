#include "ghidra_types.h"

extern int func_00520FC0(void);
extern int func_00521058(void);
extern int func_00588BF0(int param_1,int param_2);
extern int func_00663E64(undefined4 *param_1,undefined1 param_2);
extern float DAT_002e5428;
extern float DAT_002e542c;
extern float DAT_002e5430;
extern int DAT_002e5434;
extern float DAT_002e5438;

// USA 002E5378 <- EU 002E5354 (Ghidra, non-matching)
// GLOBAL DAT_002e5428 float
// GLOBAL DAT_002e542c float
// GLOBAL DAT_002e5430 float
// GLOBAL DAT_002e5434 int
// GLOBAL DAT_002e5438 float

void func_002E5378(int param_1)

{
  bool bVar1;
  int iVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  
  *(undefined4 *)(param_1 + 0x908) = *(undefined4 *)(param_1 + 0x3d4);
  if ((*(short *)(param_1 + 0x2e) != 2) || (bVar1 = func_00588BF0(param_1,0), bVar1)) {
    fVar5 = DAT_002e5428;
    iVar2 = func_00521058();
    fVar4 = *(float *)(iVar2 + 4) - (*(float *)(param_1 + 0xc) + fVar5);
    fVar5 = DAT_002e542c;
    if (*(char *)(param_1 + 0x8d0) != '\0') {
      fVar5 = DAT_002e5430;
    }
    if (((fVar5 < fVar4) && ((int)ALBW_AS_U32(fVar4) < DAT_002e5434)) &&
       (pfVar3 = (float *)func_00520FC0(), fVar4 = *(float *)(param_1 + 8) - *pfVar3,
       fVar5 = *(float *)(param_1 + 0x10) - pfVar3[2], fVar4 * fVar4 + fVar5 * fVar5 < DAT_002e5438)
       ) {
      func_00663E64((undefined4 *)(param_1 + 0x8cc),1);
    }
  }
  return;
}

