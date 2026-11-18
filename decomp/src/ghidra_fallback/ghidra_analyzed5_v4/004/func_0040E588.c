#include "ghidra_types.h"

extern int func_00100790(int *param_1);
extern int func_001007A2(byte *param_1,int param_2,undefined4 param_3);
extern int func_001007C0(short *param_1,byte *param_2,int param_3,undefined4 param_4);
extern int func_0010AC24(undefined4 param_1,undefined4 param_2);
extern int func_003C8874(undefined4 *param_1,short *param_2,undefined4 param_3);
extern int DAT_0040e6c4;

// USA 0040E588 <- EU 0040E568 (Ghidra, non-matching)
// GLOBAL DAT_0040e6c4 int

int func_0040E588(int param_1,byte *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  short *psVar4;
  short *psVar5;
  _Alignas(8) unsigned char albw_frame[0x240];
  #define asStack_240 ((short *)(albw_frame + 0x0))
  #define local_30 ((int *)(albw_frame + 0x210))
  iVar3 = DAT_0040e6c4;
  psVar4 = asStack_240;
  psVar5 = asStack_240;
  *(char *)(param_1 + 0x1c) = (char)param_3;
  if (param_3 != 0) {
    local_30[0] = 0;
    local_30[1] = 0;
    func_00100790(local_30);
    while ((iVar1 = func_001007A2(param_2,iVar3,local_30), iVar1 != 0 &&
           (iVar2 = func_001007C0(psVar4,param_2,iVar1,local_30), iVar2 != 0))) {
      psVar4 = psVar4 + 1;
      param_2 = param_2 + iVar1;
    }
    *psVar4 = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    iVar3 = func_003C8874((undefined4 *)(param_1 + 4),asStack_240,1);
    *(int *)(param_1 + 0x18) = iVar3;
    return (iVar3 >> 0x1f) + 1;
  }
  local_30[0] = 0;
  local_30[1] = 0;
  func_00100790(local_30);
  while ((iVar1 = func_001007A2(param_2,iVar3,local_30), iVar1 != 0 &&
         (iVar2 = func_001007C0(psVar5,param_2,iVar1,local_30), iVar2 != 0))) {
    psVar5 = psVar5 + 1;
    param_2 = param_2 + iVar1;
  }
  *psVar5 = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  iVar3 = func_003C8874((undefined4 *)(param_1 + 4),asStack_240,1);
  if ((iVar3 < 0) && (iVar3 < 0)) {
    func_0010AC24(iVar3,0x40e6b4);
  }
  return 1;
}

