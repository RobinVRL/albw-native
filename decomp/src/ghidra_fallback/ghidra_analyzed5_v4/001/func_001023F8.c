#include "ghidra_types.h"

extern int func_00104418(int param_1,undefined4 param_2,undefined4 param_3);
extern int func_001044B0(undefined1 *param_1);
extern int func_00108630(undefined4 param_1,int param_2,undefined4 param_3);
extern int func_0010AC24(undefined4 param_1,undefined4 param_2);
extern int DAT_0010246c;

// USA 001023F8 <- EU 001023F8 (Ghidra, non-matching)
// GLOBAL DAT_0010246c int

byte func_001023F8(void)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 extraout_r1;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define uStack_10 (*(undefined1 *)(albw_frame + 0x0))
  #define local_f (*(byte *)(albw_frame + 0x1))
  #define local_c ((byte *)(albw_frame + 0x4))
  if ((*(byte *)(DAT_0010246c + 0x14) & 1) == 0) {
    iVar2 = func_001044B0(local_c);
    if ((iVar2 < 0) && (iVar2 < 0)) {
      func_0010AC24(iVar2,0x10242c);
    }
    uVar3 = func_00108630(&uStack_10,4,0x130000);
    uVar4 = 0x102448;
    iVar2 = -((int)uVar3 >> 0x1f);
    if (iVar2 != 0) {
      func_0010AC24(uVar3,0x102448);
      uVar4 = extraout_r1;
    }
    func_00104418((uint)local_c[0],uVar4,iVar2);
    bVar1 = local_f & 1;
    if ((local_f & 1) != 0) {
      bVar1 = 1;
    }
    return bVar1;
  }
  return 0;
}

