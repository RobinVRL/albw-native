#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern int func_0058A7D4(void);
extern float fRam001a57cc;
extern int iRam001a57d4;
extern undefined4 uRam001a57c8;
extern undefined4 *puRam001a57d0;

// USA 001A5738 <- EU 001A5738 (Ghidra, non-matching)
// GLOBAL UNK_001a57c8 undefined4
// GLOBAL UNK_001a57cc float
// GLOBAL UNK_001a57d0 undefined4 *
// GLOBAL UNK_001a57d4 int

void func_001A5738(int param_1)

{
  undefined4 *puVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  uint in_fpscr;
  undefined4 in_s0;
  float fVar5;
  
  func_004FABDC(param_1,1,0xffffffff,0);
  puVar2 = (uint *)func_0058A7D4();
  uVar3 = func_00111A64(puVar2);
  iVar4 = (int)((ulonglong)uVar3 * 0x78 >> 0x20) + 0x3c;
  if (iVar4 == 0) {
    in_s0 = uRam001a57c8;
  }
  *(int *)(param_1 + 0x8e4) = iVar4;
  if (iVar4 == 0) {
    *(undefined4 *)(param_1 + 0x8e8) = in_s0;
  }
  else {
    fVar5 = (float)VectorUnsignedToFloat(iVar4,(byte)(in_fpscr >> 0x15) & 3);
    *(float *)(param_1 + 0x8e8) = fRam001a57cc / fVar5;
  }
  puVar1 = puRam001a57d0;
  *(undefined4 *)(param_1 + 0x8e0) = 0;
  uVar3 = func_00111A64((uint *)*puVar1);
  *(int *)(param_1 + 0x948) =
       ((int)((ulonglong)uVar3 * 0x5a >> 0x20) + -0x2d) * iRam001a57d4 + *(int *)(param_1 + 0x948);
  return;
}

