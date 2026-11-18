#include "ghidra_types.h"

extern int func_001DE378(int param_1,undefined4 *param_2,undefined4 param_3);
extern int func_002D55D0(int param_1,uint param_2);
extern int *DAT_002908dc;

// USA 00290824 <- EU 0029084C (Ghidra, non-matching)
// GLOBAL DAT_002908dc int *

undefined4 func_00290824(int param_1,float fparam_0)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define local_14 (*(float *)(albw_frame + 0xc))
  #define local_10 (*(undefined4 *)(albw_frame + 0x10))
  pcVar2 = (char *)(*DAT_002908dc + 0x18);
  cVar1 = *pcVar2;
  if (cVar1 == '\x16') {
    pcVar2 = *(char **)(*DAT_002908dc + 0x1c);
  }
  if (((cVar1 == '\x16' && pcVar2 == (char *)0x1) &&
      (iVar3 = *(int *)(param_1 + 0x10), *(int *)(iVar3 + 0x5b0) == 0x3f800000)) &&
     (*(short *)(param_1 + 0x42) != 0x3f)) {
    local_10 = *(undefined4 *)(iVar3 + 0x3d8);
    local_18 = *(undefined4 *)(iVar3 + 0x3d0);
    local_14 = fparam_0;
    func_001DE378(*(int *)(param_1 + 0x10),&local_18,
                  *(undefined4 *)(*(int *)(param_1 + 0x10) + 1000));
    func_002D55D0(*(int *)(param_1 + 0x48),0x3f);
    return 0;
  }
  return 0;
}

