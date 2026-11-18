#include "ghidra_types.h"

extern int func_0048E140(int param_1,int *param_2,int param_3);
extern int func_00491260(undefined4 *param_1);
extern int DAT_0034b648;
extern undefined4 DAT_0034b64c;
extern char s_BootLoadFader_0034b638[];

// USA 0034B60C <- EU 0034B5E8 (Ghidra, non-matching)
// GLOBAL DAT_0034b648 int
// GLOBAL DAT_0034b64c undefined4
// GLOBAL s_BootLoadFader_0034b638 string

int func_0034B60C(int param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define iStack_18 (*(int *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  iStack_18 = DAT_0034b648;
  local_14 = s_BootLoadFader_0034b638;
  (**(code **)(DAT_0034b648 + 8))(&iStack_18);
  puVar1 = func_0048E140(param_1,param_2,(int)local_14);
  *puVar1 = DAT_0034b64c;
  iVar2 = func_00491260(puVar1 + 0x7b);
  return iVar2 + -0x1ec;
}

