#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_00588BF0(int param_1,int param_2);
extern int func_00660E2C(undefined4 *param_1,undefined1 param_2);
extern undefined4 DAT_0027d100;
extern float DAT_0027d104;
extern undefined4 DAT_0027d108;

// USA 0027CFD8 <- EU 0027D000 (Ghidra, non-matching)
// GLOBAL DAT_0027d100 undefined4
// GLOBAL DAT_0027d104 float
// GLOBAL DAT_0027d108 undefined4

undefined4 func_0027CFD8(int param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  uint in_fpscr;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  
  puVar2 = (undefined4 *)func_0010BAB4(0x1c);
  fVar6 = DAT_0027d104;
  uVar5 = DAT_0027d100;
  if (puVar2 != (undefined4 *)0x0) {
    puVar2[2] = DAT_0027d108;
    *puVar2 = uVar5;
    puVar2[1] = ALBW_AS_U32(fVar6);
    puVar2[3] = uVar5;
    puVar2[4] = uVar5;
    puVar2[5] = 0;
    puVar2[6] = 0;
  }
  *(undefined4 **)(param_1 + 0x5ac) = puVar2;
  puVar2 = (undefined4 *)(param_1 + 0x40c);
  if ((*(char *)(param_1 + 0x598) != '\0') && (bVar1 = func_00588BF0(param_1,0), !bVar1)) {
    iVar3 = *(int *)(param_1 + 0x5ac);
    *(undefined4 *)(iVar3 + 0x10) = *(undefined4 *)(iVar3 + 4);
    *(float *)(iVar3 + 0xc) = fVar6;
    if (*(char *)(param_1 + 0x599) == '\0') {
      return func_00660E2C(puVar2,0);
    }
    func_00660E2C(puVar2,1);
    iVar3 = *(int *)(param_1 + 0x590);
    *(int *)(param_1 + 0x5a0) = iVar3;
    if (iVar3 == 0) {
      *(undefined4 *)(param_1 + 0x5a4) = uVar5;
    }
    else {
      fVar4 = (float)VectorUnsignedToFloat(iVar3,(byte)(in_fpscr >> 0x15) & 3);
      *(float *)(param_1 + 0x5a4) = fVar6 / fVar4;
    }
    *(undefined4 *)(param_1 + 0x59c) = 0;
    return 0;
  }
  return func_00660E2C(puVar2,2);
}

