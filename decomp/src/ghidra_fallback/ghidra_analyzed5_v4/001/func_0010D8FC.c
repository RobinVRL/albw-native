#include "ghidra_types.h"

extern int func_0010CC7C(undefined4 *param_1,int param_2,int param_3,int param_4);
extern int *DAT_0010d968;
extern undefined4 DAT_0010d96c;
extern undefined4 DAT_0010d970;
extern int *DAT_0010d974;

// USA 0010D8FC <- EU 0010D8FC (Ghidra, non-matching)
// GLOBAL DAT_0010d968 int *
// GLOBAL DAT_0010d96c undefined4
// GLOBAL DAT_0010d970 undefined4
// GLOBAL DAT_0010d974 int *

void func_0010D8FC(undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define local_14 (*(undefined4 *)(albw_frame + 0xc))
  local_14 = DAT_0010d96c;
  piVar1 = DAT_0010d968;
  piVar4 = DAT_0010d968 + 2;
  DAT_0010d968[1] = (int)param_1;
  piVar1[3] = 0;
  local_18 = DAT_0010d970;
  piVar3 = func_0010CC7C((undefined4 *)*param_1,param_1[1],(int)&local_18,0);
  piVar2 = DAT_0010d974;
  if (*DAT_0010d974 < DAT_0010d974[1]) {
    *(int **)(DAT_0010d974[2] + *DAT_0010d974 * 4) = piVar3;
    *piVar2 = *piVar2 + 1;
  }
  *piVar1 = (int)piVar4;
  return;
}

