#include "ghidra_types.h"

extern int func_002C2C9C(undefined4 *param_1,undefined4 param_2);
extern int func_002C2D00(int *param_1);
extern int func_002D42E8(int param_1);
extern int func_00537B48(int param_1);
extern int *DAT_0038b35c;

// USA 0038B298 <- EU 0038B274 (Ghidra, non-matching)
// GLOBAL DAT_0038b35c int *

undefined4 func_0038B298(int param_1)

{
  int *piVar1;
  int iVar2;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define aiStack_50 ((int *)(albw_frame + 0x0))
  #define local_38 (*(uint *)(albw_frame + 0x18))
  #define local_34 (*(undefined1 *)(albw_frame + 0x1c))
  iVar2 = *(int *)(*DAT_0038b35c + 0x10);
  func_002C2C9C(aiStack_50,*(undefined4 *)(iVar2 + 0x1c));
  local_34 = 1;
  local_38 = local_38 | 1;
  piVar1 = func_002C2D00(aiStack_50);
  *(int **)(param_1 + 0x1c) = piVar1;
  func_002C2C9C(aiStack_50,*(undefined4 *)(iVar2 + 0x20));
  local_34 = 1;
  local_38 = local_38 | 1;
  piVar1 = func_002C2D00(aiStack_50);
  *(int **)(param_1 + 0x20) = piVar1;
  func_002C2C9C(aiStack_50,*(undefined4 *)(iVar2 + 0x24));
  local_34 = 1;
  local_38 = local_38 | 1;
  piVar1 = func_002C2D00(aiStack_50);
  *(int **)(param_1 + 0x24) = piVar1;
  func_002C2C9C(aiStack_50,*(undefined4 *)(iVar2 + 0x28));
  local_34 = 1;
  local_38 = local_38 | 1;
  piVar1 = func_002C2D00(aiStack_50);
  *(int **)(param_1 + 0x28) = piVar1;
  iVar2 = func_00537B48(*(int *)(param_1 + 8));
  if (iVar2 == 4) {
    iVar2 = 0;
  }
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + iVar2 * 4 + 0x1c);
  return func_002D42E8(param_1);
}

