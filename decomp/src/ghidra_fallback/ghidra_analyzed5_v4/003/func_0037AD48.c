#include "ghidra_types.h"

extern int func_0048E140(int param_1,int *param_2,int param_3);
extern int DAT_0037ad7c;
extern undefined4 DAT_0037ad80;
extern char s_TaskCircleWipe_0037ad6c[];

// USA 0037AD48 <- EU 0037AD24 (Ghidra, non-matching)
// GLOBAL DAT_0037ad7c int
// GLOBAL DAT_0037ad80 undefined4
// GLOBAL s_TaskCircleWipe_0037ad6c string

undefined4 func_0037AD48(int param_1,int *param_2)

{
  undefined4 *puVar1;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define iStack_18 (*(int *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  iStack_18 = DAT_0037ad7c;
  local_14 = s_TaskCircleWipe_0037ad6c;
  (**(code **)(DAT_0037ad7c + 8))(&iStack_18);
  puVar1 = func_0048E140(param_1,param_2,(int)local_14);
  *puVar1 = DAT_0037ad80;
  return (undefined4)param_1;
}

