#include "ghidra_types.h"

extern int func_001696F8(int param_1,uint *param_2);
extern undefined4 DAT_0016cf2c;
extern undefined4 DAT_0016cf30;
extern undefined4 DAT_0016cf34;

// USA 0016CEA0 <- EU 0016CEA0 (Ghidra, non-matching)
// GLOBAL DAT_0016cf2c undefined4
// GLOBAL DAT_0016cf30 undefined4
// GLOBAL DAT_0016cf34 undefined4

undefined4 func_0016CEA0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint in_lr;
  bool bVar3;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define local_70 ((uint *)(albw_frame + 0x0))
  #define local_68 (*(int * *)(albw_frame + 0x8))
  #define local_64 (*(int *)(albw_frame + 0xc))
  #define local_60 (*(undefined4 *)(albw_frame + 0x10))
  #define local_5c (*(undefined4 *)(albw_frame + 0x14))
  #define local_58 (*(undefined4 *)(albw_frame + 0x18))
  #define local_54 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_50 (*(uint *)(albw_frame + 0x20))
  #define local_1c (*(undefined4 *)(albw_frame + 0x54))
  #define local_18 (*(undefined1 *)(albw_frame + 0x58))
  bVar3 = *(int *)(param_1 + 0xc) != 0;
  iVar1 = 0;
  iVar2 = 0;
  if (bVar3) {
    iVar2 = *(int *)(*(int *)(param_1 + 0xc) + 4);
    iVar1 = iVar2 - param_2;
  }
  if ((bVar3 && iVar2 != param_2) && iVar1 < 0 == (bVar3 && SBORROW4(iVar2,param_2))) {
    local_70[1] = 3;
    local_68 = &local_64;
    local_1c = 10;
    local_18 = 0;
    local_70[0] = 1;
    local_60 = DAT_0016cf30;
    local_5c = DAT_0016cf2c;
    local_58 = DAT_0016cf34;
    local_50 = in_lr | 0xff;
    local_54 = DAT_0016cf2c;
    local_64 = param_2;
    return func_001696F8(*(int *)(param_1 + 0xc),local_70);
  }
  return 0;
}

