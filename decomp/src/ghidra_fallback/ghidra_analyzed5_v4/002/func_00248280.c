#include "ghidra_types.h"

extern int func_00247830(int param_1,float fparam_0);
extern int func_00352210(int param_1,uint param_2,float fparam_0);
extern undefined4 func_0065F560(undefined4 *param_1,undefined1 param_2,float fparam_0);
extern int DAT_00248340;

// USA 00248280 <- EU 00248280 (Ghidra, non-matching)
// GLOBAL DAT_00248340 int

undefined4 func_00248280(int param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  code *pcVar4;
  uint in_fpscr;
  float in_s0;
  
  uVar2 = *(uint *)(*(int *)(param_1 + 0x42c) + *(char *)(param_1 + 0x414) * 8 + 4);
  pcVar4 = *(code **)(*(int *)(param_1 + 0x42c) + *(char *)(param_1 + 0x414) * 8);
  if ((uVar2 & 1) != 0) {
    pcVar4 = *(code **)(pcVar4 + *(int *)(*(int *)(param_1 + 0x424) + ((int)uVar2 >> 1)));
  }
  (*pcVar4)((int)(*(int *)(param_1 + 0x424)) + ((int)uVar2 >> 1));
  iVar3 = *(int *)(param_1 + 0x410) + 1;
  *(int *)(param_1 + 0x410) = iVar3;
  if (*(int *)(param_1 + 0x420) != 0) {
    in_s0 = (float)VectorUnsignedToFloat(iVar3,(byte)(in_fpscr >> 0x15) & 3);
    func_00352210(*(int *)(param_1 + 0x420),1,in_s0);
  }
  cVar1 = *(char *)(DAT_00248340 + param_1);
  if (cVar1 == '\x01' || cVar1 == '\x02') {
    func_00247830(param_1,in_s0);
    if (3 < *(byte *)(param_1 + 0x4c2)) {
      func_0065F560((undefined4 *)(param_1 + 0x410),3,in_s0);
    }
  }
  else if (cVar1 == '\x03') {
    return func_00247830(param_1,in_s0);
  }
  return 0;
}

