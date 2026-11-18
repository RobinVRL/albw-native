#include "ghidra_types.h"

extern int func_00104418(int param_1,undefined4 param_2,undefined4 param_3);
extern int func_001044B0(undefined1 *param_1);
extern int func_00108630(undefined4 param_1,int param_2,undefined4 param_3);
extern int func_0010AC24(undefined4 param_1,undefined4 param_2);
extern int DAT_001024dc;

// USA 00102470 <- EU 00102470 (Ghidra, non-matching)
// GLOBAL DAT_001024dc int

undefined1 func_00102470(void)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 extraout_r1;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define auStack_10 ((undefined1 *)(albw_frame + 0x0))
  #define local_e (*(undefined1 *)(albw_frame + 0x2))
  #define local_c ((byte *)(albw_frame + 0x4))
  if ((*(byte *)(DAT_001024dc + 0x14) & 1) == 0) {
    iVar1 = func_001044B0(local_c);
    if ((iVar1 < 0) && (iVar1 < 0)) {
      func_0010AC24(iVar1,0x1024a4);
    }
    uVar2 = func_00108630(auStack_10,4,0x130000);
    uVar3 = 0x1024c0;
    iVar1 = -((int)uVar2 >> 0x1f);
    if (iVar1 != 0) {
      func_0010AC24(uVar2,0x1024c0);
      uVar3 = extraout_r1;
    }
    func_00104418((uint)local_c[0],uVar3,iVar1);
    return local_e;
  }
  return 0;
}

