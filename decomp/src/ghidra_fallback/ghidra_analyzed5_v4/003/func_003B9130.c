#include "ghidra_types.h"

extern int func_0016898C(int param_1,uint *param_2);
extern int func_003838A8(int param_1,int param_2);
extern int func_003840A0(int param_1,int param_2);
extern undefined4 DAT_003b9208;
extern undefined4 DAT_003b920c;
extern undefined4 DAT_003b9210;

// USA 003B9130 <- EU 003B910C (Ghidra, non-matching)
// GLOBAL DAT_003b9208 undefined4
// GLOBAL DAT_003b920c undefined4
// GLOBAL DAT_003b9210 undefined4

undefined4 func_003B9130(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint in_r3;
  int iVar4;
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
  iVar2 = *(int *)(param_1 + 0x48);
  if (*(char *)(iVar2 + 0x936) == '\x02') {
    *(undefined1 *)(param_1 + 0x62) = 0;
  }
  if (((*(char *)(param_1 + 0x70) != '\n') && (*(char *)(iVar2 + 0x936) == '\x02')) &&
     (iVar3 = func_003838A8(iVar2 + 0x8c0,0x18), **(int **)(*(int *)(iVar2 + 0x8dc) + 0x14) != iVar3
     )) {
    iVar2 = *(int *)(param_1 + 0x48);
    iVar4 = iVar2 + 0x8c0;
    iVar3 = func_003838A8(iVar4,0x18);
    bVar1 = func_003840A0(iVar4,iVar3);
    if (!bVar1) {
      local_68 = &local_64;
      local_70[1] = 3;
      local_1c = 10;
      local_18 = 0;
      local_70[0] = 1;
      local_60 = DAT_003b920c;
      local_5c = DAT_003b9208;
      local_58 = DAT_003b9210;
      local_50 = in_r3 | 0xff;
      local_54 = DAT_003b9208;
      local_64 = iVar3;
      func_0016898C(*(int *)(iVar2 + 0x8dc),local_70);
    }
  }
  return 1;
}

