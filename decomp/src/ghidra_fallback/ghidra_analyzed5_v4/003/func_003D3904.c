#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern undefined8 func_00110D44(undefined4 *param_1,byte *param_2,uint param_3);
extern int func_003D4220(int param_1,undefined4 *param_2,int *param_3,int param_4);
extern undefined *DAT_003d3a08;

// USA 003D3904 <- EU 003D38E0 (Ghidra, non-matching)
// GLOBAL DAT_003d3a08 undefined *

bool func_003D3904(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  _Alignas(8) unsigned char albw_frame[0x7b0];
  #define abStack_7a8 ((byte *)(albw_frame + 0x8))
  #define local_28 ((int *)(albw_frame + 0x788))
  if (*param_1 == 0) {
    func_003D4220((int)param_1,param_1 + 1,param_1,0x20);
  }
  else {
    local_28[0] = 0;
    func_00100118((int)abStack_7a8,DAT_003d3a08,0x3c,0x20);
    func_003D4220((int)param_1,(undefined4 *)abStack_7a8,local_28,0x20);
    iVar1 = *param_1;
    if (0x20 - local_28[0] <= *param_1) {
      iVar1 = 0x20 - local_28[0];
    }
    *param_1 = iVar1;
    func_00110D44(param_1 + local_28[0] * 0xf + 1,(byte *)(param_1 + 1),iVar1 * 0x3c);
    func_00110D44(param_1 + 1,abStack_7a8,local_28[0] * 0x3c);
    *param_1 = *param_1 + local_28[0];
  }
  bVar8 = param_1[0x533] != -1 || param_1[0x532] != -1;
  if (bVar8) {
    iVar1 = param_1[0x1f9];
    iVar2 = param_1[0x1fa];
    iVar3 = param_1[0x1fb];
    iVar4 = param_1[0x1fc];
    iVar5 = param_1[0x1fd];
    iVar6 = param_1[0x1fe];
    iVar7 = param_1[0x1ff];
    *param_2 = param_1[0x1f8];
    param_2[1] = iVar1;
    param_2[2] = iVar2;
    param_2[3] = iVar3;
    param_2[4] = iVar4;
    param_2[5] = iVar5;
    param_2[6] = iVar6;
    param_2[7] = iVar7;
    iVar5 = param_1[0x205];
    iVar1 = param_1[0x200];
    iVar2 = param_1[0x201];
    iVar3 = param_1[0x202];
    iVar4 = param_1[0x203];
    iVar6 = param_1[0x204];
    param_2[0xe] = param_1[0x206];
    param_2[0xd] = iVar5;
    param_2[8] = iVar1;
    param_2[9] = iVar2;
    param_2[10] = iVar3;
    param_2[0xb] = iVar4;
    param_2[0xc] = iVar6;
  }
  return bVar8;
}

