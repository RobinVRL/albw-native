#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int func_0015AD54(int param_1,undefined4 param_2,uint param_3,float fparam_0);
extern int func_0058A7D4(void);
extern float DAT_0015bbec;
extern float DAT_0015bbf0;

// USA 0015BB18 <- EU 0015BB1C (Ghidra, non-matching)
// GLOBAL DAT_0015bbec float
// GLOBAL DAT_0015bbf0 float

void func_0015BB18(int param_1)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  uint in_fpscr;
  float fVar4;
  
  fVar4 = DAT_0015bbec;
  if (*(char *)(param_1 + 0x8c0) == '\x02') {
    func_0015AD54(param_1,0,0,*(float *)(param_1 + 4000));
  }
  else {
    func_0015AD54(param_1,1,0xffffffff,DAT_0015bbec);
  }
  if ((*(ushort *)(param_1 + 0x2e) & 0xff) == 0) {
    puVar1 = (uint *)func_0058A7D4();
    uVar2 = func_00111A64(puVar1);
    iVar3 = (int)((ulonglong)uVar2 * 0xf >> 0x20) + 5;
    *(int *)(param_1 + 0x8f0) = iVar3;
    if (iVar3 == 0) {
      *(float *)(param_1 + 0x8f4) = fVar4;
    }
    else {
      fVar4 = (float)VectorUnsignedToFloat(iVar3,(byte)(in_fpscr >> 0x15) & 3);
      *(float *)(param_1 + 0x8f4) = DAT_0015bbf0 / fVar4;
    }
    *(undefined4 *)(param_1 + 0x8ec) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0x8f0) = 0;
    *(float *)(param_1 + 0x8f4) = fVar4;
    *(undefined4 *)(param_1 + 0x8ec) = 0;
  }
  *(undefined1 *)(param_1 + 0x9ae) = 0;
  return;
}

