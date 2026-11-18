#include "ghidra_types.h"

extern int func_001507D8(int param_1,int *param_2,int param_3);
extern int func_00160430(int param_1,undefined1 param_2);
extern int func_00161178(undefined4 *param_1);
extern int func_0065836C(undefined4 *param_1,undefined1 param_2);
extern int DAT_0015af20;
extern char s_SE_EN_FAINT_0015af14[];

// USA 0015AE04 <- EU 0015AE08 (Ghidra, non-matching)
// GLOBAL DAT_0015af20 int
// GLOBAL s_SE_EN_FAINT_0015af14 string

undefined4 func_0015AE04(undefined4 *param_1,undefined4 param_2,uint param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  iVar1 = param_1[0x394];
  if (((iVar1 != 0) && (*(int *)(iVar1 + 0x1c) == param_1[0x395])) &&
     (((*(uint *)(iVar1 + 0x3c) & 4) != 0 || (*(uint *)(iVar1 + 0x3c) & 0x40) != 0 ||
      (((iVar3 = *(int *)(iVar1 + 0x20), iVar3 != 0 &&
        (*(int *)(iVar1 + 0x24) == *(int *)(iVar3 + 0xc))) && (0 < *(int *)(iVar3 + 4))))))) {
    local_14 = s_SE_EN_FAINT_0015af14;
    local_18 = DAT_0015af20;
    func_001507D8((int)param_1,&local_18,0);
  }
  if ((uint)param_1[0x24c] <= (uint)param_1[0x24b]) {
    if (*(char *)((int)param_1 + 0xf9d) == '\x01') {
      *(undefined1 *)((int)param_1 + 0xf9d) = 2;
    }
    if ((*(ushort *)((int)param_1 + 0x2e) & 0xff) != 0) {
      puVar2 = func_00161178(param_1);
      if ((puVar2 != (undefined4 *)0x0) && (*(char *)(puVar2 + 0x230) != '\x16')) {
        func_0065836C(puVar2 + 0x22f,0x13);
      }
      return func_00160430((int)param_1,4);
    }
    func_0065836C(param_1 + 0x22f,0x13);
  }
  return 0;
}

