#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int func_001164F4(undefined4 *param_1,uint param_2);
extern int func_001520C4(int param_1,uint param_2);
extern int func_001DF478(byte *param_1,int param_2);
extern int func_00256810(byte *param_1);
extern int func_004A143C(byte *param_1,uint param_2);
extern int DAT_00293c3c;
extern int *DAT_00293c40;
extern undefined4 *DAT_00293c44;
extern uint DAT_00293c48;

// USA 00293AE4 <- EU 00293B0C (Ghidra, non-matching)
// GLOBAL DAT_00293c3c int
// GLOBAL DAT_00293c40 int *
// GLOBAL DAT_00293c44 undefined4 *
// GLOBAL DAT_00293c48 uint

void func_00293AE4(int param_1,int param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  byte *pbVar5;
  
  pbVar5 = (byte *)(param_1 + param_2 * DAT_00293c3c * 4);
  uVar4 = (uint)*(ushort *)(pbVar5 + 0x260);
  uVar2 = DAT_00293c48;
  puVar1 = DAT_00293c44;
  if (param_2 == 0) {
LAB_00293b58:
    if (*(ushort *)(param_1 + 0x1864) == uVar4) goto LAB_00293b90;
    if (param_2 != 2) goto LAB_00293b6c;
  }
  else {
    if (*(ushort *)(param_1 + 0x260) == uVar4) goto LAB_00293b90;
    if (param_2 != 1) goto LAB_00293b58;
LAB_00293b6c:
    if (*(ushort *)(param_1 + 0x2e68) == uVar4) goto LAB_00293b90;
  }
  if (*DAT_00293c40 != 0) {
    func_001520C4(*DAT_00293c40,uVar4);
    uVar2 = DAT_00293c48;
    puVar1 = DAT_00293c44;
  }
LAB_00293b90:
  do {
    do {
      uVar4 = func_00111A64((uint *)*puVar1);
      uVar4 = uVar4 & 0xffff;
    } while (uVar4 == uVar2);
    if (param_2 == 0) {
LAB_00293bc0:
      if (*(ushort *)(param_1 + 0x1864) == uVar4) goto LAB_00293b90;
      if (param_2 == 2) goto LAB_00293be0;
    }
    else {
      if (*(ushort *)(param_1 + 0x260) == uVar4) goto LAB_00293b90;
      if (param_2 != 1) goto LAB_00293bc0;
    }
    if (*(ushort *)(param_1 + 0x2e68) != uVar4) {
LAB_00293be0:
      func_001DF478(pbVar5,uVar4);
      func_00256810(pbVar5 + 0xe00);
      func_001164F4((undefined4 *)(pbVar5 + 0x1400),0x200);
      uVar2 = func_004A143C(pbVar5 + 0x1400,0x1fc);
      *(uint *)(pbVar5 + 0x15fc) = uVar2;
      pbVar5[0x1600] = 1;
      puVar3 = (uint *)(param_1 + 0x440c + param_2 * 4);
      *puVar3 = *puVar3 | 8;
      return;
    }
  } while( true );
}

