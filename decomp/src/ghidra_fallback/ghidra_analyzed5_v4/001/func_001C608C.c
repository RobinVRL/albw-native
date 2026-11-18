#include "ghidra_types.h"

extern void func_0010F1F8(int *param_1,float fparam_0);
extern undefined4 func_00151148(int param_1,int param_2);
extern int func_0019A4C4(int param_1,undefined4 param_2);
extern int func_0019A778(int param_1);
extern int func_0019A848(int param_1);
extern int func_0019A9DC(int param_1);
extern int func_004ECEFC(void *param_1);
extern int func_0052781C(int param_1);
extern float DAT_001c60cc;

// USA 001C608C <- EU 001C608C (Ghidra, non-matching)
// GLOBAL DAT_001c60cc float

undefined4 func_001C608C(int param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  float fparam_0;
  
  func_00151148(*(int *)(param_1 + 0x410),
                           (uint)(DAT_001c60cc < *(float *)(*(int *)(param_1 + 0x40c) + 0x154)));
  *(bool *)(param_1 + 0x3cd) = param_2 == 0;
  iVar4 = *(int *)(param_1 + 0x404);
  iVar3 = *(int *)(param_1 + 0x3fc) - iVar4;
  iVar1 = *(int *)(iVar3 + iVar4 + 4);
  while (iVar3 != (param_1 + 0x3f8) - iVar4) {
    bVar2 = func_0052781C(iVar3);
    if (bVar2) {
      if (*(char *)(param_1 + 0x3cd) == '\0') {
        func_0019A9DC(iVar3);
      }
      else {
        func_0019A778(iVar3);
      }
    }
    else if ((*(char *)(iVar3 + 0x4d) == '\0') && (bVar2 = func_0052781C(iVar3), !bVar2)) {
      func_0019A848(iVar3);
      func_0010F1F8((int *)(*(int *)(param_1 + 0x404) + iVar3),fparam_0);
      *(int *)(param_1 + 0x400) = *(int *)(param_1 + 0x400) + -1;
    }
    iVar3 = iVar1 - iVar4;
    iVar1 = *(int *)(iVar1 + 4);
  }
  if (*(int *)(param_1 + 0x3f0) != 0) {
    func_0019A4C4(*(int *)(param_1 + 0x3f0),param_1 + 0x3d0);
    *(undefined4 *)(param_1 + 0x3f0) = 0;
  }
  iVar3 = *(int *)(param_1 + 0x3f4);
  if (iVar3 != 0) {
    if ((*(char *)(iVar3 + 0x4d) != '\0') || (bVar2 = func_0052781C(iVar3), bVar2)) {
      func_0019A4C4(*(int *)(param_1 + 0x3f4),param_1 + 0x3d0);
    }
    else {
      *(undefined4 *)(param_1 + 0x3f4) = 0;
    }
  }
  if (param_2 == 2) {
    if (*(char *)(param_1 + 0x395) != '\0') {
      *(char *)(param_1 + 0x395) = *(char *)(param_1 + 0x395) + -1;
    }
    if (*(char *)(param_1 + 0x396) != '\0') {
      *(char *)(param_1 + 0x396) = *(char *)(param_1 + 0x396) + -1;
    }
  }
  return func_004ECEFC(param_1);
}

