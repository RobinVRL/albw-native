#include "ghidra_types.h"

extern int func_0019B04C(uint param_1);
extern int func_002DFF7C(undefined4 *param_1);
extern int func_004C43E0(int param_1,int *param_2);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_00581D60(int param_1);
extern uint *DAT_00189574;
extern int *DAT_00189578;
extern int *DAT_0018957c;

// USA 00189494 <- EU 00189494 (Ghidra, non-matching)
// GLOBAL DAT_00189574 uint *
// GLOBAL DAT_00189578 int *
// GLOBAL DAT_0018957c int *

undefined4 func_00189494(undefined4 *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  _Alignas(8) unsigned char albw_frame[0x2e0];
  #define local_2d8 (*(int *)(albw_frame + 0x8))
  #define local_2d4 (*(undefined4 *)(albw_frame + 0xc))
  #define local_2d0 (*(undefined4 *)(albw_frame + 0x10))
  #define local_2cc (*(undefined4 *)(albw_frame + 0x14))
  #define local_2bc (*(undefined4 *)(albw_frame + 0x24))
  #define local_2b8 (*(undefined4 *)(albw_frame + 0x28))
  #define local_2b4 (*(undefined4 *)(albw_frame + 0x2c))
  #define local_2b0 (*(undefined2 *)(albw_frame + 0x30))
  #define local_2ae (*(undefined2 *)(albw_frame + 0x32))
  #define local_2ac (*(undefined2 *)(albw_frame + 0x34))
  #define local_2aa (*(undefined2 *)(albw_frame + 0x36))
  #define local_290 (*(undefined4 *)(albw_frame + 0x50))
  #define local_28c (*(uint *)(albw_frame + 0x54))
  #define local_288 (*(undefined2 *)(albw_frame + 0x58))
  #define local_286 (*(undefined2 *)(albw_frame + 0x5a))
  #define local_18 (*(undefined4 *)(albw_frame + 0x2c8))
  local_2b8 = 0;
  local_2b4 = 0;
  local_2bc = 0;
  local_290 = 0;
  local_28c = 0;
  local_18 = 0;
  func_002DFF7C(&local_2d8);
  local_2d8 = func_0019B04C(*DAT_00189574);
  piVar1 = DAT_00189578;
  local_2b0 = 3;
  local_2ae = 2;
  local_2ac = 4;
  local_2d4 = *param_1;
  local_2d0 = param_1[1];
  local_2cc = param_1[2];
  local_2b8 = param_2;
  local_2aa = (undefined2)param_3;
  local_28c = param_4;
  iVar2 = func_0052FBA0(*DAT_00189578 + 0x3dbbc,param_4);
  if (iVar2 == 0) {
    uVar3 = func_00581D60(*DAT_0018957c);
    local_286 = (undefined2)uVar3;
  }
  else {
    local_286 = *(undefined2 *)(iVar2 + 0x56);
  }
  local_288 = local_286;
  return func_004C43E0(*piVar1,&local_2d8);
}

