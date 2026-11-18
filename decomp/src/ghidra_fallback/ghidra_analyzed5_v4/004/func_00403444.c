#include "ghidra_types.h"

extern undefined8 func_00110D44(undefined4 *param_1,byte *param_2,uint param_3);
extern int func_00401D90(int param_1,uint *param_2);
extern int func_00568BD8(undefined4 param_1,int param_2,undefined4 param_3,int param_4,float param_5);

// USA 00403444 <- EU 00403424 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 int

uint * func_00403444(int param_1,uint *param_2,int param_3,int param_4,int param_5)

{
  byte bVar1;
  undefined1 uVar2;
  uint uVar3;
  uint in_fpscr;
  undefined4 uVar4;
  
  if (((*(byte *)(param_5 + 0x9e) & 4) == 0) || (*(char *)(param_5 + 0x66) != '\0')) {
    func_00568BD8(param_1,param_3,param_4,param_5,0.0);
  }
  bVar1 = *(byte *)(param_5 + 100);
  uVar3 = (uint)bVar1;
  uVar2 = *(undefined1 *)(param_5 + 0x65);
  if (*(uint *)(param_1 + 0x624) != uVar3) {
    if (*(char *)(param_1 + 0x30) != '\0') {
      param_2 = (uint *)func_00401D90(param_1,param_2);
    }
    *(uint *)(param_1 + 0x624) = uVar3;
  }
  if (uVar3 != 0) {
    if ((1 < uVar3) && (*(char *)(param_1 + 0x30) != '\0')) {
      param_2 = (uint *)func_00401D90(param_1,param_2);
    }
    uVar4 = ALBW_AS_U32(VectorUnsignedToFloat((uint)*(byte *)(param_1 + 0x31),(byte)(in_fpscr >> 0x15) & 3));
    *(undefined4 *)(param_1 + 0x604) = uVar4;
    func_00110D44((undefined4 *)(param_1 + (uint)*(byte *)(param_1 + 0x31) * 0x10 + 0x1f8),
                  (byte *)(param_5 + 4),uVar3 << 4);
    *(byte *)(param_1 + 0x31) = *(char *)(param_1 + 0x31) + bVar1;
  }
  *(undefined1 *)(param_1 + 0x5fa) = uVar2;
  return param_2;
}

