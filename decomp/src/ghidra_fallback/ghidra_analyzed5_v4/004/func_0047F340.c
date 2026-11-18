#include "ghidra_types.h"

extern int func_0012C718(int param_1);
extern int func_004B96A0(int param_1,int param_2);
extern int func_00533078(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_00559010(int param_1);
extern int func_0066EB20(undefined4 *param_1,undefined1 param_2);
extern int DAT_0047f408;
extern int DAT_0047f40c;
extern char s_SE_S_CANCEL_0047f3fc[];

// USA 0047F340 <- EU 0047F318 (Ghidra, non-matching)
// GLOBAL DAT_0047f408 int
// GLOBAL DAT_0047f40c int
// GLOBAL s_SE_S_CANCEL_0047f3fc string

undefined4 func_0047F340(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  if ((*(ushort *)(*(int *)(param_1 + 0x14) + 0x16) & 4) == 0) {
    iVar2 = func_00559010(*(int *)(param_1 + 0x110));
    iVar1 = DAT_0047f40c;
    if (iVar2 != 0) {
      *(undefined4 *)(param_1 + 0x118) = *(undefined4 *)(param_1 + 0x110);
      func_004B96A0(param_1,*(int *)(*(int *)(param_1 + 0x114) + 0x14));
      uVar3 = *(undefined4 *)(iVar1 + 0x2c);
      *(undefined4 *)(param_1 + 0x11c) = *(undefined4 *)(iVar1 + 0x28);
      *(undefined4 *)(param_1 + 0x120) = uVar3;
      return func_0066EB20((undefined4 *)(param_1 + 0x74),1);
    }
    iVar2 = func_00559010(*(int *)(param_1 + 0x114));
    if (iVar2 != 0) {
      *(undefined4 *)(param_1 + 0x118) = *(undefined4 *)(param_1 + 0x114);
      func_004B96A0(param_1,*(int *)(*(int *)(param_1 + 0x110) + 0x14));
      uVar3 = *(undefined4 *)(iVar1 + 0x34);
      *(undefined4 *)(param_1 + 0x11c) = *(undefined4 *)(iVar1 + 0x30);
      *(undefined4 *)(param_1 + 0x120) = uVar3;
      return func_0066EB20((undefined4 *)(param_1 + 0x74),1);
    }
  }
  else {
    func_0012C718(param_1);
    local_14 = s_SE_S_CANCEL_0047f3fc;
    local_18 = DAT_0047f408;
    func_00533078(param_1,&local_18,0);
  }
  return 0;
}

