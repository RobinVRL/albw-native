#include "ghidra_types.h"

extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_002E2940(uint *param_1,int param_2);
extern int func_003C02E0(uint *param_1,int param_2);
extern int func_005583F8(char *param_1);
extern int DAT_003c04d0;

// USA 003C0408 <- EU 003C03E4 (Ghidra, non-matching)
// GLOBAL DAT_003c04d0 int

undefined4 func_003C0408(uint *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define local_60 ((uint *)(albw_frame + 0x0))
  iVar1 = DAT_003c04d0;
  local_60[8] = 0;
  local_60[0xd] = 0;
  local_60[0] = 0;
  local_60[2] = 0;
  local_60[4] = 0;
  local_60[5] = 0;
  local_60[6] = 0;
  iVar5 = 0;
  local_60[7] = 0;
  local_60[9] = 0;
  local_60[10] = 0;
  local_60[0xb] = 0;
  iVar4 = 999;
  iVar3 = 0;
  local_60[0xc] = 0;
  local_60[0xe] = 0;
  local_60[0xf] = 0;
  local_60[1] = 0xff0000;
  local_60[3] = 0x101;
  do {
    func_0010E3C4(local_60,(uint *)(iVar1 + iVar3 * 0x40),0x40);
    iVar2 = func_005583F8((char *)local_60);
    iVar2 = param_2 - iVar2;
    if ((-1 < iVar2 && iVar2 <= iVar4) && (iVar4 = iVar2, iVar5 = iVar3, iVar2 == 0)) break;
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x14);
  func_003C02E0(local_60,iVar5);
  return func_002E2940(param_1,(int)local_60);
}

