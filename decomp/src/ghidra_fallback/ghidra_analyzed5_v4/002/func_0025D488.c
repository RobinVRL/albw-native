#include "ghidra_types.h"

extern int func_0025D640(undefined4 *param_1,int param_2,int *param_3,undefined4 param_4, undefined4 param_5,int param_6,byte param_7);
extern undefined DAT_0025d50c;
extern undefined4 DAT_0025d514;
extern int DAT_0025d518;

// USA 0025D488 <- EU 0025D4B0 (Ghidra, non-matching)
// GLOBAL DAT_0025d50c undefined
// GLOBAL DAT_0025d514 undefined4
// GLOBAL DAT_0025d518 int

undefined4 * func_0025D488(undefined4 *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(undefined4 *)(albw_frame + 0x0))
  #define local_c (*(undefined * *)(albw_frame + 0x4))
  local_c = &DAT_0025d50c;
  local_10 = DAT_0025d514;
  piVar2 = func_0025D640(param_1,(int)&local_10,param_2,0x12,0x2800,2,0);
  iVar1 = DAT_0025d518;
  piVar2[0x2c] = 0;
  piVar2[6] = iVar1 + 0x54;
  *piVar2 = iVar1;
  return piVar2;
}

