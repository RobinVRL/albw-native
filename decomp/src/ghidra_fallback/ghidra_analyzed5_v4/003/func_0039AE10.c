#include "ghidra_types.h"

extern int func_00270DFC(undefined4 *param_1);
extern undefined4 DAT_0039aefc;
extern undefined4 *DAT_0039af00;
extern undefined4 DAT_0039af04;
extern undefined4 DAT_0039af08;
extern undefined4 DAT_0039af0c;
extern undefined4 DAT_0039af10;
extern undefined4 *DAT_0039af14;
extern undefined4 DAT_0039af18;

// USA 0039AE10 <- EU 0039ADEC (Ghidra, non-matching)
// GLOBAL DAT_0039aefc undefined4
// GLOBAL DAT_0039af00 undefined4 *
// GLOBAL DAT_0039af04 undefined4
// GLOBAL DAT_0039af08 undefined4
// GLOBAL DAT_0039af0c undefined4
// GLOBAL DAT_0039af10 undefined4
// GLOBAL DAT_0039af14 undefined4 *
// GLOBAL DAT_0039af18 undefined4

undefined4 func_0039AE10(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  
  *param_1 = DAT_0039aefc;
  param_1[1] = 0;
  param_1[2] = 0x12;
  param_1[3] = 0;
  if (param_1 + 4 != (undefined4 *)0x0) {
    param_1[3] = param_1 + 4;
  }
  uVar2 = DAT_0039af10;
  uVar6 = DAT_0039af0c;
  uVar1 = DAT_0039af08;
  puVar5 = DAT_0039af00;
  param_1[0x16] = *DAT_0039af00;
  param_1[0x17] = puVar5[1];
  param_1[0x18] = puVar5[2];
  param_1[0x19] = *puVar5;
  param_1[0x1a] = puVar5[1];
  param_1[0x1b] = puVar5[2];
  param_1[0x1c] = *puVar5;
  param_1[0x1d] = puVar5[1];
  puVar3 = DAT_0039af14;
  param_1[0x1e] = puVar5[2];
  uVar4 = DAT_0039af18;
  *param_1 = DAT_0039af04;
  param_1[0x22] = 0;
  *(undefined2 *)(param_1 + 0x28) = 0;
  param_1[0x23] = 0;
  param_1[0x24] = uVar2;
  *(undefined1 *)((int)param_1 + 0xa2) = 0;
  param_1[0x25] = *puVar3;
  param_1[0x26] = puVar3[1];
  param_1[0x27] = puVar3[2];
  param_1[0x21] = uVar2;
  param_1[0x20] = uVar2;
  param_1[0x1f] = uVar2;
  *param_1 = uVar4;
  puVar5 = func_00270DFC(param_1 + 0x29);
  puVar5 = func_00270DFC(puVar5 + 0x15);
  puVar5[0x17] = 0xffffffff;
  puVar5[0x19] = uVar1;
  puVar5[0x1a] = uVar6;
  puVar5[0x18] = 0;
  puVar5[0x1b] = 0;
  return (undefined4)param_1;
}

