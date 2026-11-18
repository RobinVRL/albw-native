#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_0068C690(float *param_1);
extern int *DAT_002b7aa8;

// USA 002B7A88 <- EU 002B7A64 (Ghidra, non-matching)
// GLOBAL DAT_002b7aa8 int *

void func_002B7A88(int param_1)

{
  int iVar1;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define afStack_18 ((float *)(albw_frame + 0x8))
  if (*(char *)(param_1 + 0x936) == '\x01') {
    func_00115C70(afStack_18,*(float **)(*DAT_002b7aa8 + 0x1c),(float *)(param_1 + 0x3d0));
    iVar1 = func_0068C690(afStack_18);
    *(int *)(param_1 + 0xa20) = iVar1;
  }
  return;
}

