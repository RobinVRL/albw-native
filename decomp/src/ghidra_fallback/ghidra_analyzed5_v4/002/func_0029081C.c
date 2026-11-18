#include "ghidra_types.h"

extern int func_001DE378(int param_1,undefined4 *param_2,undefined4 param_3);
extern int func_002D55D0(int param_1,uint param_2);
extern int *DAT_002908dc;

// USA 0029081C <- EU 00290844 (Ghidra, non-matching)
// GLOBAL DAT_002908dc int *

undefined4 func_0029081C(int param_1,float fparam_0)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define uStack_18 (*(undefined4 *)(albw_frame + 0x8))
  #define fStack_14 (*(float *)(albw_frame + 0xc))
  #define uStack_10 (*(undefined4 *)(albw_frame + 0x10))
  iVar2 = *(int *)(param_1 + 0x14);
  pcVar3 = (char *)(*DAT_002908dc + 0x18);
  cVar1 = *pcVar3;
  if (cVar1 == '\x16') {
    pcVar3 = *(char **)(*DAT_002908dc + 0x1c);
  }
  if (((cVar1 == '\x16' && pcVar3 == (char *)0x1) &&
      (iVar4 = *(int *)(iVar2 + 0x10), *(int *)(iVar4 + 0x5b0) == 0x3f800000)) &&
     (*(short *)(iVar2 + 0x42) != 0x3f)) {
    uStack_10 = *(undefined4 *)(iVar4 + 0x3d8);
    uStack_18 = *(undefined4 *)(iVar4 + 0x3d0);
    fStack_14 = fparam_0;
    func_001DE378(*(int *)(iVar2 + 0x10),&uStack_18,*(undefined4 *)(*(int *)(iVar2 + 0x10) + 1000));
    func_002D55D0(*(int *)(iVar2 + 0x48),0x3f);
    return 0;
  }
  return 0;
}

