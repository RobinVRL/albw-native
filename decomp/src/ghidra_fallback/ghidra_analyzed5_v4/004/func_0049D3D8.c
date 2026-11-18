#include "ghidra_types.h"

extern int func_0010983C(undefined4 param_1,undefined4 param_2);
extern int func_0010C0B8(int param_1);
extern int func_0010EEE0(int param_1);
extern int func_0049FBC4(int param_1,int *param_2);
extern int func_0057D87C(char *param_1,undefined4 param_2);
extern undefined4 *DAT_0049d474;

// USA 0049D3D8 <- EU 0049D3B0 (Ghidra, non-matching)
// GLOBAL DAT_0049d474 undefined4 *

int func_0049D3D8(int param_1,undefined4 *param_2,int param_3)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 (*(undefined4 *)(albw_frame + 0x8))
  #define uStack_34 (*(undefined4 *)(albw_frame + 0xc))
  #define local_30 (*(int *)(albw_frame + 0x10))
  #define iStack_2c (*(int *)(albw_frame + 0x14))
  #define local_28 (*(undefined4 *)(albw_frame + 0x18))
  func_0010C0B8(param_1 + 4);
  puVar2 = DAT_0049d474;
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uVar1 = *(undefined1 *)(param_2 + 0x1e);
  iVar4 = *(int *)(param_3 + *(int *)(param_3 + 0x14) * 4);
  if (iVar4 == 0) {
    iVar4 = 1;
  }
  else {
    iVar4 = func_0010983C(*DAT_0049d474,iVar4);
  }
  local_28 = param_2[0x18];
  local_30 = param_3;
  iStack_2c = param_1;
  iVar3 = func_0057D87C((char *)&local_38,&local_30);
  if (iVar4 != 1) {
    func_0010983C(*puVar2,iVar4);
  }
  *(undefined4 *)(iVar3 + 100) = local_38;
  *(undefined4 *)(iVar3 + 0x68) = uStack_34;
  *(undefined1 *)(iVar3 + 0x61) = uVar1;
  if (param_2[0x17] != 0) {
    if (iVar3 == 0) {
      piVar5 = (int *)0x0;
    }
    else {
      piVar5 = (int *)(iVar3 + 0x10);
    }
    func_0049FBC4(param_2[0x17] + 0x10,piVar5);
  }
  func_0010EEE0(param_1 + 4);
  return iVar3;
}

