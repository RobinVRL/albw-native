#include "ghidra_types.h"

extern int func_001788DC(int param_1,undefined4 *param_2);
extern int func_0031B348(int param_1,uint param_2);
extern int func_0031B570(int param_1,int param_2,int param_3);
extern int func_005826A4(int param_1,int *param_2,int *param_3,int *param_4);
extern undefined DAT_0046da98;
extern undefined4 DAT_0046da9c;
extern int *DAT_0046daa0;
extern int *DAT_0046daa4;

// USA 0046D984 <- EU 0046D95C (Ghidra, non-matching)
// GLOBAL DAT_0046da98 undefined
// GLOBAL DAT_0046da9c undefined4
// GLOBAL DAT_0046daa0 int *
// GLOBAL DAT_0046daa4 int *

undefined4 func_0046D984(uint param_1,int *param_2,uint param_3,int param_4)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 ((int *)(albw_frame + 0x0))
  #define local_1c (*(undefined4 *)(albw_frame + 0x14))
  bVar5 = param_3 == 0;
  uVar1 = param_1;
  if (-1 < (int)param_3) {
    uVar1 = *(uint *)(param_1 + 0x110);
    bVar5 = uVar1 == param_3;
  }
  if (!bVar5 && (-1 < (int)param_3 && (int)param_3 <= (int)uVar1)) {
    puVar2 = (undefined4 *)(param_1 + 200);
    if (param_3 < 9) {
      puVar2 = puVar2 + param_3 * 2;
    }
    iVar4 = puVar2[1];
    if (param_2 != (int *)0x0) {
      local_30[0] = 0;
      local_30[3] = 0xffffffff;
      local_30[4] = DAT_0046da9c;
      local_30[1] = 0;
      local_30[2] = 0;
      local_1c = *puVar2;
      func_005826A4(*DAT_0046daa4,local_30,DAT_0046daa0,local_30 + 4);
      if (local_30[0] != 0) {
        func_001788DC(*(int *)(param_1 + 0xb8),local_30);
        iVar3 = *(int *)(param_1 + 0xb8);
        *(undefined2 *)(iVar3 + 0x32) = 0;
        *(undefined1 *)(iVar3 + 0x3d) = 0;
        (**(code **)(*param_2 + 0x60))
                  (param_2,*(undefined4 *)(*(int *)(param_1 + 0xb8) + 8),0,
                   *(ushort *)(*(int *)(param_1 + 0xb8) + 0x20) >> 1);
      }
    }
    if (param_4 != 0) {
      return func_0031B570(*(int *)(param_1 + 0xa4),iVar4,0);
    }
  }
  else {
    if (param_2 != (int *)0x0) {
      if (*(int *)(param_1 + 0x98) == 0) {
        (**(code **)(*param_2 + 0x5c))(param_2,&DAT_0046da98,0);
      }
      else {
        (**(code **)(*param_2 + 0x5c))(param_2);
      }
    }
    if (param_4 != 0) {
      return func_0031B348(*(int *)(param_1 + 0xa4),0);
    }
  }
  return 0;
}

