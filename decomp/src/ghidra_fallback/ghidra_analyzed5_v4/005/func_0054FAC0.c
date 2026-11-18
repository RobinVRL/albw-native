#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_0068C690(float *param_1);
extern uint *DAT_0054fb18;
extern float DAT_0054fb1c;
extern float *DAT_0054fb20;
extern float DAT_0054fb24;

// USA 0054FAC0 <- EU 0054FA98 (Ghidra, non-matching)
// GLOBAL DAT_0054fb18 uint *
// GLOBAL DAT_0054fb1c float
// GLOBAL DAT_0054fb20 float *
// GLOBAL DAT_0054fb24 float

int func_0054FAC0(int param_1,uint param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float *pfVar4;
  
  if (param_2 < *(uint *)(param_1 + 0xc)) {
    iVar3 = param_1 + 0x10;
    if (param_2 < 0x14) {
      iVar3 = iVar3 + param_2 * 0x34;
    }
    pfVar4 = (float *)(iVar3 + 0x24);
  }
  else {
    pfVar4 = DAT_0054fb20;
    if (((*DAT_0054fb18 & 1) == 0) &&
       (iVar3 = func_00100174((int *)DAT_0054fb18), fVar2 = DAT_0054fb24, pfVar4 = DAT_0054fb20,
       fVar1 = DAT_0054fb1c, iVar3 != 0)) {
      *DAT_0054fb20 = DAT_0054fb1c;
      pfVar4[1] = fVar1;
      pfVar4[2] = fVar2;
      pfVar4 = DAT_0054fb20;
    }
  }
  iVar3 = func_0068C690(pfVar4);
  return iVar3;
}

