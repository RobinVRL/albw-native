#include "ghidra_types.h"

extern int func_0016898C(int param_1,uint *param_2);
extern int func_002C11E8(int *param_1,undefined4 param_2,int param_3,undefined1 param_4);
extern int func_004CDF40(int param_1,int param_2,int param_3);
extern undefined4 DAT_0031d86c;
extern int *DAT_0031d870;
extern int DAT_0031d874;
extern int *DAT_0031d878;

// USA 0031D7E8 <- EU 0031D7C4 (Ghidra, non-matching)
// GLOBAL DAT_0031d86c undefined4
// GLOBAL DAT_0031d870 int *
// GLOBAL DAT_0031d874 int
// GLOBAL DAT_0031d878 int *

undefined4 func_0031D7E8(int param_1)

{
  int *piVar1;
  int iVar2;
  uint *puVar3;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define aiStack_68 ((int *)(albw_frame + 0x8))
  puVar3 = (uint *)func_002C11E8(aiStack_68,1,10,0);
  func_0016898C(*(int *)(param_1 + 0x40),puVar3);
  piVar1 = DAT_0031d870;
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x40) + 0x14) + 0x10) = DAT_0031d86c;
  *(byte *)(*piVar1 + 0x2c1e) = *(byte *)(*piVar1 + 0x2c1e) & 0xfe;
  *(byte *)(*piVar1 + 0x2c1f) = *(byte *)(*piVar1 + 0x2c1f) & 0xfd;
  iVar2 = DAT_0031d874;
  *(undefined1 *)(*piVar1 + 0x2c1c) = 0;
  return func_004CDF40(*DAT_0031d878,iVar2,1);
}

