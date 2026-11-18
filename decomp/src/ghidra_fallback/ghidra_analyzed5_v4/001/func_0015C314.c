#include "ghidra_types.h"

extern int func_00160430(int param_1,undefined1 param_2);
extern int func_00160484(undefined4 *param_1);
extern int func_00161178(undefined4 *param_1);
extern int func_0052FD14(int param_1,undefined4 *param_2);
extern int func_0065836C(undefined4 *param_1,undefined1 param_2);
extern undefined4 DAT_0015c41c;
extern int *DAT_0015c420;

// USA 0015C314 <- EU 0015C318 (Ghidra, non-matching)
// GLOBAL DAT_0015c41c undefined4
// GLOBAL DAT_0015c420 int *

undefined4 func_0015C314(undefined4 *param_1,undefined4 param_2,uint param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  uVar1 = *(ushort *)((int)param_1 + 0x2e) & 0xff;
  if ((uVar1 < 4) && (1 < uVar1)) {
    iVar2 = uVar1 - 2;
  }
  else {
    iVar2 = -1;
  }
  local_18 = param_4;
  if (((iVar2 < 0) && ((*(ushort *)((int)param_1 + 0x2e) & 0xff) != 0)) &&
     (-1 < (int)param_1[0x3e6])) {
    puVar3 = func_00161178(param_1);
    if ((puVar3 != (undefined4 *)0x0) && (*(char *)(puVar3 + 0x230) != '\x16')) {
      func_0065836C(puVar3 + 0x22f,4);
    }
    func_00160430((int)param_1,4);
    param_1[0x3e6] = 0xffffffff;
  }
  else if ((((*(ushort *)((int)param_1 + 0x2e) & 0xff) != 0) ||
           (iVar2 = func_00160484(param_1), iVar2 == 0)) &&
          ((uint)param_1[0x24f] <= (uint)param_1[0x24e])) {
    local_18 = DAT_0015c41c;
    iVar2 = func_0052FD14(*DAT_0015c420 + 0x3dbbc,&local_18);
    if (iVar2 == 0) {
      return func_0065836C(param_1 + 0x22f,3);
    }
  }
  return 0;
}

