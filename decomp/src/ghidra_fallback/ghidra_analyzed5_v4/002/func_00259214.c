#include "ghidra_types.h"

extern int func_00297448(int param_1,int param_2,float fparam_0);
extern int func_00297474(int param_1,int param_2,float fparam_0);
extern int func_004EAC54(int param_1,uint param_2);
extern int func_004EB9F4(int param_1);
extern int func_004EC074(int param_1,int param_2,float fparam_0);
extern float DAT_0025931c;
extern int *DAT_00259320;
extern int *DAT_00259324;
extern int *DAT_00259328;

// USA 00259214 <- EU 0025923C (Ghidra, non-matching)
// GLOBAL DAT_0025931c float
// GLOBAL DAT_00259320 int *
// GLOBAL DAT_00259324 int *
// GLOBAL DAT_00259328 int *

undefined4 func_00259214(int param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  float fparam_0;
  
  piVar1 = DAT_00259320;
  fparam_0 = DAT_0025931c;
  func_00297448(*DAT_00259320,0x1e,DAT_0025931c);
  func_004EC074(*piVar1,0x1e,fparam_0);
  func_00297474(*piVar1,0x1e,fparam_0);
  if (*(char *)(*DAT_00259324 + 0x25) != '\x03') {
    iVar2 = *DAT_00259328;
    if (((iVar2 == 0 || *(char *)(*DAT_00259324 + 0x25) == '\x02') ||
        (*(char *)(iVar2 + 0x48) == '\b' || *(char *)(iVar2 + 0x48) == '&')) ||
       (*(char *)(iVar2 + 0x18) == '\b' || *(char *)(iVar2 + 0x18) == '&')) {
      return func_004EB9F4(*piVar1);
    }
    if (*(int *)(param_1 + 0x3c) != 0x1a) {
      return func_004EAC54(*piVar1,1);
    }
    if (*(char *)(*piVar1 + 0x81) != '\0') {
      return func_004EB9F4(*piVar1);
    }
  }
  return 0;
}

