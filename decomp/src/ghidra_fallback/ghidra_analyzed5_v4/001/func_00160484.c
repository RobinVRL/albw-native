#include "ghidra_types.h"

extern int func_00160430(int param_1,undefined1 param_2);
extern int func_00161178(undefined4 *param_1);
extern int func_00520FC0(void);
extern int func_0065836C(undefined4 *param_1,undefined1 param_2);
extern int DAT_00160534;

// USA 00160484 <- EU 00160488 (Ghidra, non-matching)
// GLOBAL DAT_00160534 int

undefined4 func_00160484(undefined4 *param_1)

{
  float *pfVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  pfVar1 = (float *)func_00520FC0();
  if ((int)ALBW_AS_U32(SQRT((ALBW_AS_F32(param_1[0xf4]) - *pfVar1) * (ALBW_AS_F32(param_1[0xf4]) - *pfVar1) +
                (ALBW_AS_F32(param_1[0xf6]) - pfVar1[2]) * (ALBW_AS_F32(param_1[0xf6]) - pfVar1[2]))) <
      DAT_00160534) {
    if ((*(ushort *)((int)param_1 + 0x2e) & 0xff) == 0) {
      func_0065836C(param_1 + 0x22f,4);
    }
    else {
      puVar3 = func_00161178(param_1);
      if ((puVar3 != (undefined4 *)0x0) && (*(char *)(puVar3 + 0x230) != '\x16')) {
        func_0065836C(puVar3 + 0x22f,4);
      }
      func_00160430((int)param_1,4);
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

