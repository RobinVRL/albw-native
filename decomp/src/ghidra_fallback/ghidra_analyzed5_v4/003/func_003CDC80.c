#include "ghidra_types.h"

extern int func_003C7AB0(int param_1,undefined4 param_2,undefined4 param_3);
extern int func_003CE0B4(int param_1);
extern int func_003CE480(int *param_1,int *param_2);
extern int func_003CE5EC(int *param_1,int param_2);
extern int *DAT_003cdd54;
extern undefined4 DAT_003cdd58;
extern undefined4 DAT_003cdd5c;

// USA 003CDC80 <- EU 003CDC5C (Ghidra, non-matching)
// GLOBAL DAT_003cdd54 int *
// GLOBAL DAT_003cdd58 undefined4
// GLOBAL DAT_003cdd5c undefined4

undefined4 func_003CDC80(short *param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_44 ((int *)(albw_frame + 0xc))
  #define iStack_24 (*(int *)(albw_frame + 0x2c))
  #define local_20 (*(ushort *)(albw_frame + 0x30))
  local_44[2] = 0;
  local_44[3] = 0;
  local_44[4] = 0;
  local_44[5] = 0;
  local_44[6] = 0;
  local_44[0] = *DAT_003cdd54;
  *(int *)((int)local_44 + *(int *)(local_44[0] + -0x30)) = DAT_003cdd54[8];
  local_44[1] = DAT_003cdd54[9];
  piVar3 = DAT_003cdd54;
  iVar2 = func_003CE480(local_44,&iStack_24);
  func_003CE0B4((int)&iStack_24);
  if (local_20 < param_2) {
    func_003CE5EC(local_44,(int)&iStack_24);
    uVar1 = DAT_003cdd58;
    func_003C7AB0((int)local_44,0,piVar3);
    return uVar1;
  }
  local_20 = local_20 - (short)param_2;
  func_003CE5EC(local_44,(int)&iStack_24);
  *param_1 = local_20;
  uVar1 = DAT_003cdd5c;
  if (iVar2 != 0) {
    func_003C7AB0((int)local_44,0,piVar3);
    return uVar1;
  }
  func_003C7AB0((int)local_44,0,piVar3);
  return 0;
}

