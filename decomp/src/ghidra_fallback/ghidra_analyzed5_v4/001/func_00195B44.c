#include "ghidra_types.h"

extern int func_00520FC0(void);
extern int func_005211F4(int param_1,float fparam_0,float fparam_1);
extern int func_00659A54(undefined4 *param_1,undefined1 param_2);
extern float DAT_00195c28;
extern float DAT_00195c2c;
extern int DAT_00195c30;

// USA 00195B44 <- EU 00195B44 (Ghidra, non-matching)
// GLOBAL DAT_00195c28 float
// GLOBAL DAT_00195c2c float
// GLOBAL DAT_00195c30 int

undefined4 func_00195B44(int param_1)

{
  int iVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  iVar1 = func_005211F4(param_1,DAT_00195c2c,DAT_00195c28);
  if (iVar1 == 0) {
    if (*(uint *)(param_1 + 0x468) < *(uint *)(param_1 + 0x46c)) {
      *(uint *)(param_1 + 0x468) = *(uint *)(param_1 + 0x468) + 1;
    }
    else {
      pfVar2 = (float *)func_00520FC0();
      fVar3 = *(float *)(param_1 + 0x3d0) - *pfVar2;
      fVar4 = *(float *)(param_1 + 0x3d8) - pfVar2[2];
      fVar5 = SQRT(fVar3 * fVar3 + fVar4 * fVar4);
      pfVar2 = (float *)func_00520FC0();
      fVar4 = *(float *)(param_1 + 8) - *pfVar2;
      fVar3 = *(float *)(param_1 + 0x10) - pfVar2[2];
      if ((DAT_00195c30 <= (int)ALBW_AS_U32(fVar5)) &&
         (DAT_00195c30 + 0x200000 <= (int)ALBW_AS_U32(SQRT(fVar4 * fVar4 + fVar3 * fVar3)))) {
        return func_00659A54((undefined4 *)(param_1 + 0x41c),6);
      }
    }
  }
  else {
    func_00659A54((undefined4 *)(param_1 + 0x41c),3);
  }
  return 0;
}

