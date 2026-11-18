#include "ghidra_types.h"

extern int func_004BCAE0(int param_1,int param_2);
extern int func_004DD20C(undefined4 param_1,float *param_2,int param_3);
extern int func_006356F4(int param_1,int param_2,undefined1 param_3);

// USA 004DCD98 <- EU 004DCD70 (Ghidra, non-matching)

undefined4 func_004DCD98(int param_1)

{
  int iVar1;
  short sVar2;
  
  iVar1 = func_004DD20C(param_1,(float *)(param_1 + 0x3d0),1);
  sVar2 = *(short *)(param_1 + 0x9ba);
  if (iVar1 == 0) {
    *(short *)(param_1 + 0x9ba) = sVar2 + 1;
    if (0x27 < (ushort)(sVar2 + 1U)) {
      if (0xf0 < (ushort)(sVar2 + 1U)) {
        *(undefined2 *)(param_1 + 0x9ba) = 0xf0;
      }
      return 0;
    }
    sVar2 = 0x28;
  }
  else {
    if (sVar2 == 0) {
      *(undefined4 *)(param_1 + 0x3ac) = *(undefined4 *)(param_1 + 0x83c);
      func_004BCAE0(param_1,1);
      return func_006356F4(param_1,5,0);
    }
    sVar2 = sVar2 + -1;
  }
  *(short *)(param_1 + 0x9ba) = sVar2;
  return 0;
}

