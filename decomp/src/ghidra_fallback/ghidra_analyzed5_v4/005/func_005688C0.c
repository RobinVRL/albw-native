#include "ghidra_types.h"

extern int func_00567198(int *param_1,ushort *param_2,int *param_3,float *param_4);
extern int DAT_00568988;

// USA 005688C0 <- EU 00568898 (Ghidra, non-matching)
// GLOBAL DAT_00568988 int

void func_005688C0(int param_1,int *param_2,int *param_3,float *param_4)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(ushort *)(albw_frame + 0x8))
  #define local_26 (*(byte *)(albw_frame + 0xa))
  #define local_25 (*(byte *)(albw_frame + 0xb))
  #define local_24 (*(byte *)(albw_frame + 0xc))
  uVar1 = param_1 - *(int *)(*(int *)(param_1 + 0x2c) + 0x40);
  iVar2 = (int)((longlong)(int)uVar1 * (longlong)DAT_00568988 + ((ulonglong)uVar1 << 0x20) >> 0x20);
  piVar6 = (int *)(*(int *)(*(int *)(param_1 + 0x2c) + 0x68) +
                  ((iVar2 >> 5) - (iVar2 >> 0x1f)) * 0x1c);
  local_28 = 0;
  local_26 = 0;
  local_25 = 0;
  local_24 = (byte)((uint)*(undefined4 *)piVar6[4] >> 0x1f);
  *(undefined1 *)(param_2 + 2) = 0;
  while (iVar2 = func_00567198(piVar6,&local_28,param_3,param_4), iVar2 != 0) {
    piVar3 = (int *)(piVar6[4] + ((uint)local_26 + (uint)local_25 + -1) * 8);
    iVar4 = *(int *)(piVar6[4] + (uint)local_26 * 8);
    iVar5 = *piVar3;
    iVar2 = piVar3[1];
    *(int *)(*param_2 + (uint)*(byte *)(param_2 + 2) * 8) = iVar4;
    *(uint *)(*param_2 + (uint)*(byte *)(param_2 + 2) * 8 + 4) =
         iVar2 + ((uint)(iVar5 - iVar4) >> local_24);
    *(char *)(param_2 + 2) = (char)param_2[2] + '\x01';
  }
  return;
}

