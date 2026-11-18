#include "ghidra_types.h"

extern int func_00103CBC(char *param_1);
extern int func_005FEE34(byte *param_1,uint param_2);
extern int func_006019B8(int param_1,int param_2,int param_3,uint param_4,undefined4 *param_5);

// USA 0011E55C <- EU 0011E55C (Ghidra, non-matching)

int func_0011E55C(int param_1,byte *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_1c (*(byte * *)(albw_frame + 0x4))
  #define uStack_18 (*(uint *)(albw_frame + 0x8))
  #define local_14 (*(int *)(albw_frame + 0xc))
  if (param_1 != 0 && param_2 != (byte *)0x0) {
    uVar1 = func_00103CBC((char *)param_2);
    uVar2 = func_005FEE34(param_2,uVar1);
    iVar4 = *(int *)(param_1 + 0x10) + param_1;
    local_1c = param_2;
    uStack_18 = uVar1;
    local_14 = param_1;
    iVar3 = func_006019B8(iVar4,(uint)*(ushort *)(param_1 + 6),8,uVar2,&local_1c);
    if (-1 < iVar3) {
      return (int)(short)*(undefined4 *)(iVar4 + iVar3 * 8 + 4);
    }
  }
  return -1;
}

