#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int func_002E2940(uint *param_1,int param_2);
extern int func_003C02E0(uint *param_1,int param_2);
extern int *DAT_003c0598;

// USA 003C04F8 <- EU 003C04D4 (Ghidra, non-matching)
// GLOBAL DAT_003c0598 int *

undefined4 func_003C04F8(uint *param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define local_58 ((uint *)(albw_frame + 0x8))
  piVar1 = DAT_003c0598;
  uVar2 = func_00111A64((uint *)(*DAT_003c0598 + 0x660));
  iVar3 = (int)((ulonglong)uVar2 * 0x14 >> 0x20);
  if (param_2 == 0 && iVar3 == 5) {
    uVar2 = func_00111A64((uint *)(*piVar1 + 0x660));
    iVar3 = (int)((ulonglong)uVar2 * 5 >> 0x20);
  }
  local_58[8] = 0;
  local_58[0xd] = 0;
  local_58[0] = 0;
  local_58[2] = 0;
  local_58[4] = 0;
  local_58[5] = 0;
  local_58[6] = 0;
  local_58[7] = 0;
  local_58[9] = 0;
  local_58[10] = 0;
  local_58[0xb] = 0;
  local_58[0xc] = 0;
  local_58[0xe] = 0;
  local_58[0xf] = 0;
  local_58[3] = 0x101;
  local_58[1] = 0xff0000;
  func_003C02E0(local_58,iVar3);
  return func_002E2940(param_1,(int)local_58);
}

