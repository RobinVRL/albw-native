#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int func_00352210(int param_1,uint param_2,float fparam_0);
extern int func_004BC8D8(int param_1);
extern float func_00521298(int param_1);
extern int func_00588BE4(int param_1);
extern int func_00666AC0(undefined4 *param_1,undefined1 param_2);
extern int *DAT_0035d820;
extern int DAT_0035d824;
extern int *DAT_0035d828;

// USA 0035D760 <- EU 0035D73C (Ghidra, non-matching)
// GLOBAL DAT_0035d820 int *
// GLOBAL DAT_0035d824 int
// GLOBAL DAT_0035d828 int *

undefined4 func_0035D760(int param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  uint in_fpscr;
  float fVar4;
  
  iVar1 = func_00588BE4(param_1);
  if ((((iVar1 == *DAT_0035d820) && (*(char *)(param_1 + 0x85d) == '\0')) &&
      (fVar4 = func_00521298(param_1), DAT_0035d824 <= (int)ALBW_AS_U32(fVar4))) &&
     (uVar2 = func_00111A64((uint *)(*DAT_0035d828 + 0x660)),
     (int)((ulonglong)uVar2 * 300 >> 0x20) == 0)) {
    func_00666AC0((undefined4 *)(param_1 + 0x960),5);
  }
  piVar3 = (int *)(*(int *)(param_1 + 0x97c) + *(char *)(param_1 + 0x964) * 8);
  uVar2 = *(uint *)(*(int *)(param_1 + 0x97c) + *(char *)(param_1 + 0x964) * 8 + 4);
  if ((uVar2 & 1) != 0) {
    piVar3 = (int *)(*piVar3 + *(int *)(*(int *)(param_1 + 0x974) + ((int)uVar2 >> 1)));
  }
  (*(code *)*piVar3)();
  iVar1 = *(int *)(param_1 + 0x960) + 1;
  *(int *)(param_1 + 0x960) = iVar1;
  if (*(int *)(param_1 + 0x970) != 0) {
    fVar4 = (float)VectorUnsignedToFloat(iVar1,(byte)(in_fpscr >> 0x15) & 3);
    func_00352210(*(int *)(param_1 + 0x970),1,fVar4);
  }
  return func_004BC8D8(param_1);
}

