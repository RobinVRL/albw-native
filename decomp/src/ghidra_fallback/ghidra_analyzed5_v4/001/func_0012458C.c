#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_004FC07C(int param_1,int param_2,uint param_3,int param_4);
extern int func_0058A7D4(void);
extern int func_0068C690(float *param_1);
extern undefined4 DAT_0012468c;
extern int *DAT_00124690;

// USA 0012458C <- EU 0012458C (Ghidra, non-matching)
// GLOBAL DAT_0012468c undefined4
// GLOBAL DAT_00124690 int *

undefined4 func_0012458C(int param_1)

{
  undefined4 uVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;
  
  if (*(int *)(param_1 + 0x8f4) != 0) {
    iVar4 = *(int *)(param_1 + 0x8ec);
    puVar2 = (uint *)func_0058A7D4();
    uVar3 = func_00111A64(puVar2);
    *(uint *)(param_1 + 0x8ec) =
         (int)((ulonglong)uVar3 * 0x80000000 >> 0x20) + (iVar4 + 0x20000000U & 0xc0000000) +
         0x60000000 & 0xc0000000;
    goto LAB_001245dc;
  }
  func_00115C70((float *)(param_1 + 0x8e0),*(float **)(*DAT_00124690 + 0x1c),
                (float *)(param_1 + 0x3d0));
  uVar3 = func_0068C690((float *)(param_1 + 0x8e0));
  if (*(char *)(param_1 + 0x958) == '\0') {
    uVar3 = uVar3 + 0x20000000;
  }
  else {
    uVar5 = uVar3 - 1;
    bVar6 = uVar5 < 0x1fffffff;
    if (!bVar6) {
      uVar5 = uVar3 + 0xbfffffff;
    }
    if (bVar6 || uVar5 < 0x1fffffff) {
LAB_00124670:
      uVar3 = uVar3 + 0x40000000;
    }
    else {
      uVar5 = uVar3 + 0x7fffffff;
      bVar6 = 0x1ffffffe < uVar5;
      if (bVar6) {
        uVar5 = uVar3 + 0x3fffffff;
      }
      if (!bVar6 || uVar5 < 0x1fffffff) goto LAB_00124670;
    }
    *(undefined1 *)(param_1 + 0x958) = 0;
  }
  *(uint *)(param_1 + 0x8ec) = uVar3 & 0xc0000000;
LAB_001245dc:
  uVar1 = DAT_0012468c;
  *(undefined4 *)(param_1 + 0x3dc) = DAT_0012468c;
  *(undefined4 *)(param_1 + 0x3e0) = uVar1;
  *(undefined4 *)(param_1 + 0x3e4) = uVar1;
  *(undefined4 *)(param_1 + 0x4fc) = 0;
  return func_004FC07C(param_1,0,0xffffffff,0);
}

