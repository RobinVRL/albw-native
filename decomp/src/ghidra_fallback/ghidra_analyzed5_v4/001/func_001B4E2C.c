#include "ghidra_types.h"

extern int func_00520FC0(void);
extern int func_0065B29C(undefined4 *param_1,undefined1 param_2);
extern int DAT_001b4ee8;
extern int DAT_001b4eec;
extern int DAT_001b4ef0;

// USA 001B4E2C <- EU 001B4E2C (Ghidra, non-matching)
// GLOBAL DAT_001b4ee8 int
// GLOBAL DAT_001b4eec int
// GLOBAL DAT_001b4ef0 int

undefined4 func_001B4E2C(int param_1)

{
  float *pfVar1;
  undefined4 *puVar2;
  float fVar3;
  float fVar4;
  
  if (*(char *)(*(int *)(param_1 + 0x510) + 4) == '\0') {
    puVar2 = (undefined4 *)(param_1 + 0x8bc);
    if (0 < *(short *)(DAT_001b4ee8 + param_1)) {
      pfVar1 = (float *)func_00520FC0();
      fVar3 = *(float *)(param_1 + 0x3d0) - *pfVar1;
      fVar4 = *(float *)(param_1 + 0x3d8) - pfVar1[2];
      if (DAT_001b4eec < (int)ALBW_AS_U32((fVar3 * fVar3 + fVar4 * fVar4))) {
        return func_0065B29C(puVar2,0);
      }
      if (*(char *)(DAT_001b4ef0 + param_1) != '\x03' && *(char *)(DAT_001b4ef0 + param_1) != '\x02'
         ) {
        return func_0065B29C(puVar2,2);
      }
      return func_0065B29C(puVar2,3);
    }
    func_0065B29C(puVar2,8);
  }
  return 0;
}

