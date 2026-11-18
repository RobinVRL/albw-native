#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern float func_00115DC8(float *param_1);
extern int func_0014EB3C(int param_1);
extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern int func_004F4A68();
extern int func_0058A7D4(void);
extern float DAT_0021d29c;
extern float DAT_0021d2a0;
extern undefined4 DAT_0021d2a4;
extern undefined4 DAT_0021d2a8;

// USA 0021D1A0 <- EU 0021D1A0 (Ghidra, non-matching)
// GLOBAL DAT_0021d29c float
// GLOBAL DAT_0021d2a0 float
// GLOBAL DAT_0021d2a4 undefined4
// GLOBAL DAT_0021d2a8 undefined4

undefined4 func_0021D1A0(int param_1,int param_2)

{
  byte bVar1;
  float fparam_0;
  undefined4 uVar2;
  uint *puVar3;
  uint uVar4;
  
  if (*(char *)(param_1 + 0x8c0) == '\x01') {
    func_0014EB3C(param_1);
    if (*(uint *)(param_1 + 0x908) < *(uint *)(param_1 + 0x90c)) {
      *(uint *)(param_1 + 0x908) = *(uint *)(param_1 + 0x908) + 1;
    }
    else if ((uint)ALBW_AS_U32(DAT_0021d29c) <
             (uint)ALBW_AS_U32((*(float *)(param_1 + 0x374) * *(float *)(param_2 + 4) +
                    *(float *)(param_1 + 0x378) * *(float *)(param_2 + 8) +
                   *(float *)(param_1 + 0x37c) * *(float *)(param_2 + 0xc)))) {
      bVar1 = *(byte *)(param_1 + 0x8e0);
      puVar3 = (uint *)func_0058A7D4();
      uVar4 = func_00111A64(puVar3);
      fparam_0 = DAT_0021d2a0;
      uVar4 = (int)((ulonglong)uVar4 * 0x80000000 >> 0x20) + (uint)bVar1 * 0x40000000 + 0x60000000;
      *(byte *)(param_1 + 0x8e0) = (byte)(uVar4 >> 0x1e);
      func_004D80A4((float *)(param_1 + 0x8e4),uVar4 & 0xc0000000,fparam_0);
      *(undefined4 *)(param_1 + 0x8e8) = DAT_0021d2a4;
      func_00115DC8((float *)(param_1 + 0x8e4));
      uVar2 = DAT_0021d2a8;
      *(undefined4 *)(param_1 + 0x90c) = 0x78;
      *(undefined4 *)(param_1 + 0x910) = uVar2;
      *(undefined4 *)(param_1 + 0x908) = 0;
    }
  }
  return func_004F4A68(param_1,param_2);
}

