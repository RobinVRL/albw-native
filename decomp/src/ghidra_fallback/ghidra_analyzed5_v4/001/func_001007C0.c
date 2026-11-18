#include "ghidra_types.h"

extern int func_00301084(undefined2 *param_1,int param_2,undefined4 param_3);
extern int func_003010C4(void);
extern undefined1 DAT_00100830;

// GLOBAL DAT_00100830 undefined1
// USA 001007C0 <- EU 001007C0 (Ghidra, function missing from the decomp table)

int func_001007C0(short *param_1,byte *param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 ((short *)(albw_frame + 0x8))
  #define local_24 (*(short * *)(albw_frame + 0xc))
  #define pbStack_20 (*(byte * *)(albw_frame + 0x10))
  #define iStack_1c (*(int *)(albw_frame + 0x14))
  #define local_18 (*(undefined4 *)(albw_frame + 0x18))
  iVar4 = 0;
  pbVar3 = param_2;
  iVar5 = param_3;
  local_24 = param_1;
  pbStack_20 = param_2;
  iStack_1c = param_3;
  local_18 = param_4;
  if (param_2 == (byte *)0x0) {
    iVar5 = 1;
    pbVar3 = &DAT_00100830;
    local_24 = (short *)0x0;
  }
  while( true ) {
    if (iVar5 == 0) {
      return -2;
    }
    iVar1 = func_00301084(local_28,(uint)*pbVar3,local_18);
    iVar4 = iVar4 + 1;
    if (iVar1 == -1) break;
    pbVar3 = pbVar3 + 1;
    iVar5 = iVar5 + -1;
    if (iVar1 != -2) {
      if (local_24 != (short *)0x0) {
        *local_24 = local_28[0];
      }
      iVar5 = 0;
      if (local_28[0] != 0) {
        iVar5 = iVar4;
      }
      return iVar5;
    }
  }
  puVar2 = (undefined4 *)func_003010C4();
  *puVar2 = 4;
  return -1;
}

