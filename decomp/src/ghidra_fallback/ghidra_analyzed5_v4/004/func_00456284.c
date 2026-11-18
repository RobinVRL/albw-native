#include "ghidra_types.h"

extern int func_001B6A48(int *param_1,undefined4 param_2,undefined4 param_3,int param_4);
extern int func_0066D2AC(undefined4 *param_1,undefined1 param_2);

// USA 00456284 <- EU 0045625C (Ghidra, non-matching)

undefined4 func_00456284(int *param_1,undefined4 param_2,undefined4 param_3,int param_4,float fparam_0,
                  float fparam_1)

{
  char cVar1;
  bool bVar2;
  
  param_1[0x24] = (int)ALBW_AS_U32(fparam_0);
  param_1[0x25] = (int)ALBW_AS_U32(fparam_1);
  cVar1 = *(char *)((int)param_1 + 0xd);
  bVar2 = cVar1 == '\0';
  if (bVar2) {
    cVar1 = *(char *)((int)param_1 + 0xe);
  }
  if (bVar2 && cVar1 == '\0') {
    *(undefined1 *)((int)param_1 + 0xe) = 1;
    func_001B6A48(param_1,param_2,param_3,param_4);
  }
  return func_0066D2AC(param_1 + 0x1a,1);
}

