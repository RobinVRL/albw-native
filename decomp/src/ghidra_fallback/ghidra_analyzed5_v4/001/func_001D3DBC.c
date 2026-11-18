#include "ghidra_types.h"

extern int func_002C41BC(int *param_1,undefined4 *param_2,int param_3);
extern int func_003529A0(undefined4 *param_1,undefined4 param_2,undefined4 param_3);
extern int DAT_001d3e90;
extern int DAT_001d3e94;
extern int DAT_001d3e98;
extern int DAT_001d3e9c;
extern int DAT_001d3ea0;

// USA 001D3DBC <- EU 001D3DBC (Ghidra, non-matching)
// GLOBAL DAT_001d3e90 int
// GLOBAL DAT_001d3e94 int
// GLOBAL DAT_001d3e98 int
// GLOBAL DAT_001d3e9c int
// GLOBAL DAT_001d3ea0 int

undefined4 func_001D3DBC(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define auStack_30 ((undefined4 *)(albw_frame + 0x0))
  #define local_24 (*(int * *)(albw_frame + 0xc))
  #define local_18 (*(undefined4 *)(albw_frame + 0x18))
  piVar1 = (int *)(**(code **)(*param_1 + 0x48))(param_1);
  (**(code **)(*piVar1 + 8))(piVar1);
  func_003529A0(auStack_30,piVar1[1],param_1 + 200);
  iVar2 = DAT_001d3e9c;
  iVar3 = DAT_001d3e90;
  local_18 = 1;
  if (*(char *)((int)param_1 + 0x48d) == '\0') {
    param_1[0x120] = 0x1e;
    param_1[0x121] = iVar2;
    param_1[0x11f] = 0;
    local_18 = 0;
    iVar3 = DAT_001d3ea0;
  }
  else {
    if (*(short *)((int)param_1 + 0x2e) == 1) {
      iVar2 = 0x14;
      iVar4 = DAT_001d3e94;
    }
    else {
      iVar2 = 8;
      iVar4 = DAT_001d3e98;
    }
    param_1[0x120] = iVar2;
    param_1[0x121] = iVar4;
    param_1[0x11f] = 0;
  }
  param_1[0x11e] = iVar3;
  local_24 = param_1 + 0xf4;
  return func_002C41BC(param_1 + 200,auStack_30,0);
}

