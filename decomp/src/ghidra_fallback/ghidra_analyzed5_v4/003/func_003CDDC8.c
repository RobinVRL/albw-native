#include "ghidra_types.h"

extern int func_003C7AB0(int param_1,undefined4 param_2,undefined4 param_3);
extern int func_003CE0B4(int param_1);
extern int func_003CE480(int *param_1,int *param_2);
extern int func_003CE5EC(int *param_1,int param_2);
extern int *DAT_003cde5c;
extern undefined4 DAT_003cde60;

// USA 003CDDC8 <- EU 003CDDA4 (Ghidra, non-matching)
// GLOBAL DAT_003cde5c int *
// GLOBAL DAT_003cde60 undefined4

undefined4 func_003CDDC8(undefined2 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_40 ((int *)(albw_frame + 0x0))
  #define local_20 (*(undefined2 *)(albw_frame + 0x20))
  piVar3 = local_40;
  local_40[2] = 0;
  local_40[3] = 0;
  local_40[4] = 0;
  local_40[5] = 0;
  local_40[6] = 0;
  local_40[0] = *DAT_003cde5c;
  *(int *)((int)local_40 + *(int *)(local_40[0] + -0x30)) = DAT_003cde5c[8];
  local_40[1] = DAT_003cde5c[9];
  iVar2 = func_003CE480(local_40,local_40 + 7);
  func_003CE0B4((int)(local_40 + 7));
  func_003CE5EC(local_40,(int)(local_40 + 7));
  *param_1 = local_20;
  uVar1 = DAT_003cde60;
  if (iVar2 != 0) {
    func_003C7AB0((int)local_40,0,piVar3);
    return uVar1;
  }
  func_003C7AB0((int)local_40,0,piVar3);
  return 0;
}

