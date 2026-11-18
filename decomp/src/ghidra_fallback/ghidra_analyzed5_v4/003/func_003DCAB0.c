#include "ghidra_types.h"

extern int func_0010C0C0(int *param_1);
extern int func_0010C160(int *param_1);
extern int func_003DFDD8(int param_1,int *param_2);
extern int func_003E02D0(int param_1,undefined4 *param_2);

// USA 003DCAB0 <- EU 003DCA90 (Ghidra, non-matching)

undefined4 func_003DCAB0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(int *)(albw_frame + 0x8))
  #define local_24 (*(int *)(albw_frame + 0xc))
  #define iStack_20 (*(int *)(albw_frame + 0x10))
  #define iStack_1c (*(int *)(albw_frame + 0x14))
  func_0010C0C0((int *)(param_1 + 0x44));
  local_24 = param_3 + 0x280;
  iStack_20 = param_3 + 0x500;
  iStack_1c = param_3 + 0x780;
  iVar2 = param_1 + param_2 * 8;
  iVar1 = *(int *)(iVar2 + 0x34);
  local_28 = param_3;
  if (iVar1 == 0) {
    iVar1 = *(int *)(iVar2 + 0x38);
    if (iVar1 != 0) {
      func_003E02D0(iVar1,&local_28);
    }
  }
  else {
    func_003DFDD8(iVar1,&local_28);
  }
  return func_0010C160((int *)(param_1 + 0x44));
}

