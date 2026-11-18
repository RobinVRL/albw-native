#include "ghidra_types.h"

extern int func_0045F6B0(int param_1,int param_2,undefined1 param_3);
extern int func_00522958(int param_1);
extern int func_0066BFFC(undefined4 *param_1,char param_2);
extern int *DAT_0042344c;
extern float DAT_00423450;
extern float DAT_00423454;
extern float DAT_00423458;
extern int *DAT_0042345c;

// USA 004233C0 <- EU 004233A0 (Ghidra, non-matching)
// GLOBAL DAT_0042344c int *
// GLOBAL DAT_00423450 float
// GLOBAL DAT_00423454 float
// GLOBAL DAT_00423458 float
// GLOBAL DAT_0042345c int *

undefined4 func_004233C0(int param_1)

{
  int *piVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  
  piVar1 = DAT_0042344c;
  iVar2 = func_00522958(*DAT_0042344c);
  if (iVar2 == 0) {
    return func_0066BFFC((undefined4 *)(param_1 + 0x38),'\x03');
  }
  iVar2 = *(int *)(*(int *)(param_1 + 0x14) + 4);
  fVar3 = DAT_00423450;
  if (iVar2 != 0) {
    fVar3 = *(float *)(iVar2 + 0x40);
  }
  fVar4 = *(float *)(*piVar1 + 0x14) - *(float *)(param_1 + 0xf0);
  if (fVar4 <= DAT_00423450) {
    fVar4 = -fVar4;
  }
  if (fVar4 <= DAT_00423458 + fVar3 * DAT_00423454) {
    if (*(int *)(*DAT_0042345c + 0xe8) != 0) {
      return func_0045F6B0(*(int *)(*DAT_0042345c + 0xe8),0,0);
    }
  }
  else {
    func_0066BFFC((undefined4 *)(param_1 + 0x38),'\x02');
  }
  return 0;
}

