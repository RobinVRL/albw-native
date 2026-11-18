#include "ghidra_types.h"

extern int func_001566B4(int param_1);
extern int func_00520FC0(void);
extern int func_00657E5C(undefined4 *param_1,undefined1 param_2);
extern undefined4 DAT_00156010;
extern undefined4 DAT_00156014;
extern undefined4 DAT_00156018;
extern undefined4 DAT_0015601c;
extern int DAT_00156020;
extern int DAT_00156024;

// USA 00155F30 <- EU 00155F34 (Ghidra, non-matching)
// GLOBAL DAT_00156010 undefined4
// GLOBAL DAT_00156014 undefined4
// GLOBAL DAT_00156018 undefined4
// GLOBAL DAT_0015601c undefined4
// GLOBAL DAT_00156020 int
// GLOBAL DAT_00156024 int

undefined4 func_00155F30(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float *pfVar3;
  undefined4 *puVar4;
  float fVar5;
  float fVar6;
  
  uVar2 = DAT_00156014;
  uVar1 = DAT_00156010;
  if (*(char *)(*(int *)(param_1 + 0x510) + 4) == '\x06') {
    *(undefined4 *)(param_1 + 0x470) = DAT_00156010;
    *(undefined4 *)(param_1 + 0x474) = uVar2;
    *(undefined4 *)(param_1 + 0x478) = uVar1;
    uVar2 = DAT_0015601c;
    uVar1 = DAT_00156018;
    *(undefined4 *)(param_1 + 0x464) = DAT_00156018;
    *(undefined4 *)(param_1 + 0x468) = uVar2;
    *(undefined4 *)(param_1 + 0x46c) = uVar1;
  }
  if (*(char *)(*(int *)(param_1 + 0x510) + 4) == '\0') {
    func_001566B4(param_1);
    puVar4 = (undefined4 *)(param_1 + 0x8bc);
    if (0 < *(short *)(DAT_00156020 + param_1)) {
      pfVar3 = (float *)func_00520FC0();
      fVar5 = *pfVar3 - *(float *)(param_1 + 8);
      fVar6 = pfVar3[2] - *(float *)(param_1 + 0x10);
      if (DAT_00156024 <= (int)ALBW_AS_U32((fVar5 * fVar5 + fVar6 * fVar6))) {
        return func_00657E5C(puVar4,3);
      }
      return func_00657E5C(puVar4,1);
    }
    func_00657E5C(puVar4,5);
  }
  return 0;
}

