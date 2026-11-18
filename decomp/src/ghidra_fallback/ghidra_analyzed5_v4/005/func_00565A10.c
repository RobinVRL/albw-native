#include "ghidra_types.h"

extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_003CC090(int *param_1,int param_2,uint param_3);
extern int DAT_00565b60;

// USA 00565A10 <- EU 005659E8 (Ghidra, non-matching)
// GLOBAL DAT_00565b60 int

void func_00565A10(int *param_1,int *param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  byte *pbVar4;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_2c ((byte *)(albw_frame + 0x4))
  puVar3 = (uint *)*param_2;
  func_0010E3C4(puVar3,(uint *)(*param_1 + 0xa8),0x18);
  iVar1 = DAT_00565b60;
  *param_2 = *param_2 + 0x18;
  uVar2 = puVar3[2];
  puVar3[2] = uVar2 & 0xfffff8ff;
  puVar3[2] = uVar2 & 0xfffff8ff | (uint)*(byte *)(param_3 + 0x19c) << 8;
  uVar2 = puVar3[4];
  puVar3[4] = uVar2 & 0xfffff8ff;
  puVar3[4] = uVar2 & 0xfffff8ff | (uint)*(byte *)(param_3 + 0x19e) << 8;
  uVar2 = 0;
  do {
    pbVar4 = *(byte **)(*param_1 + uVar2 * 4 + 0x8c);
    if (pbVar4 != (byte *)0x0) {
      local_2c[uVar2] = *pbVar4 & 1;
      func_0010E3C4((uint *)*param_2,(uint *)(iVar1 + (uVar2 & 0xff) * 8),8);
      *param_2 = *param_2 + 8;
      func_003CC090(param_2,*(int *)(pbVar4 + 4),*(int *)(pbVar4 + 8) << 2);
    }
    uVar2 = uVar2 + 1;
  } while ((int)uVar2 < 6);
  *puVar3 = (uint)(local_2c[0] == 0) << 1 | (uint)(local_2c[1] == '\0') << 5 |
            (uint)(*(char *)(param_3 + 0x19d) == '\0') << 9 | (uint)(local_2c[2] == '\0') << 0xd |
            (uint)(local_2c[5] == '\0') << 0x11 | (uint)(local_2c[4] == '\0') << 0x15 |
            (uint)(local_2c[3] == '\0') << 0x19;
  return;
}

