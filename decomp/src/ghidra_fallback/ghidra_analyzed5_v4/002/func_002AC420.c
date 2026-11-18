#include "ghidra_types.h"

extern int func_002AD658(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, undefined1 param_5,int param_6);
extern int func_002ADE0C(int param_1,int param_2);
extern int func_004FBCC0(int *param_1);
extern int func_004FCD5C(int param_1,int param_2);
extern undefined4 *DAT_002ac4ec;

// USA 002AC420 <- EU 002AC3FC (Ghidra, non-matching)
// GLOBAL DAT_002ac4ec undefined4 *

undefined4 func_002AC420(int param_1,uint param_2)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  
  if ((param_2 == 0) && (*(short *)(*(int *)(param_1 + 0x34) + 0x508) < 1)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  func_002ADE0C(param_1,param_2);
  func_004FBCC0(*(int **)(param_1 + 0x34));
  puVar2 = DAT_002ac4ec;
  if (bVar1) {
    *(ushort *)(param_1 + 0x38) = *(ushort *)(param_1 + 0x38) | 1;
    *(uint *)(*(int *)(param_1 + 0x34) + 0x5a0) =
         *(uint *)(*(int *)(param_1 + 0x34) + 0x5a0) & 0xffffefff;
    iVar3 = *(int *)(param_1 + 0x34);
    *(uint *)(iVar3 + 0x59c) = *(uint *)(iVar3 + 0x59c) & 0xfffffffe;
    func_004FCD5C(iVar3 + 0x5a8,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x70) = *DAT_002ac4ec;
    *(undefined4 *)(param_1 + 0x74) = puVar2[1];
    *(undefined4 *)(param_1 + 0x78) = puVar2[2];
    *(undefined4 *)(*(int *)(param_1 + 0x34) + 0x500) = *(undefined4 *)(param_1 + 0x174);
  }
  *(undefined4 *)(param_1 + 0x6c) = 0;
  return func_002AD658(param_1,0xb,param_2 & 0xff,(int)*(char *)(param_1 + 0x110),
                *(undefined1 *)(param_1 + 0x111),1);
}

