#include "ghidra_types.h"

extern int func_002FF068(int param_1,int param_2,int param_3,float fparam_0);
extern int func_00660BA4(undefined4 *param_1,undefined1 param_2);
extern float DAT_0026f764;
extern int DAT_0026f768;
extern float DAT_0026f76c;

// USA 0026F67C <- EU 0026F6A4 (Ghidra, non-matching)
// GLOBAL DAT_0026f764 float
// GLOBAL DAT_0026f768 int
// GLOBAL DAT_0026f76c float

void func_0026F67C(int *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  uint in_fpscr;
  float fVar5;
  float fVar6;
  
  uVar1 = (uint)(char)param_1[2];
  fVar6 = DAT_0026f764;
  if ((uVar1 != 0xf && uVar1 != 0xc) && (*(char *)(DAT_0026f768 + uVar1 * 0xc + 1) == '\0')) {
    fVar6 = DAT_0026f76c;
  }
  piVar4 = param_1 + 0xc;
  if (uVar1 < 0x10) {
    piVar4 = (int *)((int)piVar4 + uVar1);
  }
  fVar5 = (float)VectorSignedToFloat(param_1[3] + 1,(byte)(in_fpscr >> 0x15) & 3);
  if ((uint)(int)(char)*piVar4 < *(uint *)*param_1) {
    iVar2 = *(int *)(((uint *)*param_1)[2] + (char)*piVar4 * 4);
  }
  else {
    iVar2 = 0;
  }
  fVar5 = fVar5 / fVar6;
  if (*(int *)param_1[1] == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)((int *)param_1[1])[2];
  }
  func_002FF068(iVar3,*(int *)(iVar2 + 0x6c),0,fVar5);
  *(undefined1 *)((int)param_1 + 0x71) = 1;
  if (0x3f7fffff < (int)ALBW_AS_U32(fVar5)) {
    func_00660BA4(param_1 + 3,0);
  }
  return;
}

