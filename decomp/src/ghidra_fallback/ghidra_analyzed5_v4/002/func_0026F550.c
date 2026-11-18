#include "ghidra_types.h"

extern int func_002FEC08(int param_1,int param_2,int param_3,float fparam_0);
extern int func_00660BA4(undefined4 *param_1,undefined1 param_2);
extern int DAT_0026f678;

// USA 0026F550 <- EU 0026F578 (Ghidra, non-matching)
// GLOBAL DAT_0026f678 int

undefined4 func_0026F550(int *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  uint in_fpscr;
  float fVar7;
  float fVar8;
  
  iVar1 = DAT_0026f678;
  uVar2 = (uint)(char)param_1[2];
  if (uVar2 == 0xf) {
    uVar5 = 0x3c;
  }
  else if (uVar2 == 0xc) {
    uVar5 = 0x1e;
  }
  else if (*(char *)(DAT_0026f678 + uVar2 * 0xc + 1) == '\0') {
    uVar5 = 3;
  }
  else {
    uVar5 = 8;
  }
  fVar7 = (float)VectorSignedToFloat(uVar5,(byte)(in_fpscr >> 0x15) & 3);
  piVar6 = param_1 + 0xc;
  if (uVar2 < 0x10) {
    piVar6 = (int *)((int)piVar6 + uVar2);
  }
  fVar8 = (float)VectorSignedToFloat(param_1[3] + 1,(byte)(in_fpscr >> 0x15) & 3);
  if ((uint)(int)(char)*piVar6 < *(uint *)*param_1) {
    iVar3 = *(int *)(((uint *)*param_1)[2] + (char)*piVar6 * 4);
  }
  else {
    iVar3 = 0;
  }
  fVar8 = fVar8 / fVar7;
  if (*(int *)param_1[1] == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)((int *)param_1[1])[2];
  }
  func_002FEC08(iVar4,*(int *)(iVar3 + 0x6c),1,fVar8);
  *(undefined1 *)((int)param_1 + 0x71) = 1;
  if (0x3f7fffff < (int)ALBW_AS_U32(fVar8)) {
    if (*(char *)(iVar1 + (char)param_1[2] * 0xc + 1) == '\0') {
      return func_00660BA4(param_1 + 3,3);
    }
    func_00660BA4(param_1 + 3,2);
  }
  return 0;
}

