#include "ghidra_types.h"

extern int func_00108630(undefined4 param_1,int param_2,undefined4 param_3);
extern int func_0010AC24(undefined4 param_1,undefined4 param_2);
extern int func_0010C0C0(int *param_1);
extern int func_0010C160(int *param_1);
extern int func_003C7EEC(uint param_1);
extern int *DAT_003d2460;
extern undefined4 DAT_003d2464;
extern int DAT_003d2468;

// USA 003D2410 <- EU 003D23EC (Ghidra, non-matching)
// GLOBAL DAT_003d2460 int *
// GLOBAL DAT_003d2464 undefined4
// GLOBAL DAT_003d2468 int

bool func_003D2410(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  uint in_r3;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(uint *)(albw_frame + 0x0))
  local_10 = in_r3;
  uVar2 = func_00108630(&local_10,4,0xd0000);
  if ((int)uVar2 < 0) {
    func_0010AC24(uVar2,0x3d2408);
  }
  func_0010C0C0(DAT_003d2460);
  iVar3 = func_003C7EEC(DAT_003d2464);
  if (-1 < iVar3) {
    uVar1 = *(ushort *)(DAT_003d2468 + 0x2c);
    func_0010C160(DAT_003d2460);
    return (uint)uVar1 <= (local_10 & 0xffff);
  }
  func_0010C160(DAT_003d2460);
  return false;
}

