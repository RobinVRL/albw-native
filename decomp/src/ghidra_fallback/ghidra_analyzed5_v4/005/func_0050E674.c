#include "ghidra_types.h"

extern int func_00291CC4(int param_1);
extern int func_002CDFC4(int param_1,undefined4 param_2);
extern int func_002CF064(int param_1,undefined4 *param_2);
extern int func_002CF084(int param_1);
extern int func_0050F444(int param_1);
extern int func_0051D27C(int *param_1,int param_2,int param_3);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_00687E28(undefined4 *param_1);
extern int *DAT_0050e830;
extern int *DAT_0050e834;
extern undefined4 DAT_0050e838;
extern int DAT_0050e83c;

// USA 0050E674 <- EU 0050E64C (Ghidra, non-matching)
// GLOBAL DAT_0050e830 int *
// GLOBAL DAT_0050e834 int *
// GLOBAL DAT_0050e838 undefined4
// GLOBAL DAT_0050e83c int

undefined4 func_0050E674(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  bool bVar2;
  undefined4 *puVar3;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(uint *)(albw_frame + 0x0))
  switch(param_2) {
  case 0:
    if (*(int *)(param_1 + 0xa10) == 1) {
      puVar3 = (undefined4 *)func_0052FBA0(*DAT_0050e830 + 0x3dbbc,*(uint *)(param_1 + 0xa08));
      puVar3 = func_00687E28(puVar3);
      if ((puVar3 != (undefined4 *)0x0) && (*(char *)(puVar3 + 0x128) != '\0')) {
        return 1;
      }
    }
    else {
      if (*(int *)(param_1 + 0xa08) == 0) {
        func_0050F444(param_1);
      }
      local_10 = *(uint *)(param_1 + 0xa08);
      puVar3 = (undefined4 *)func_0052FBA0(*DAT_0050e830 + 0x3dbbc,local_10);
      puVar3 = func_00687E28(puVar3);
      if (puVar3 != (undefined4 *)0x0) {
        local_10 = *(uint *)(param_1 + 0x2cc);
        func_002CF064((int)puVar3,&local_10);
        *(undefined1 *)(param_1 + 0x853) = 8;
        *(undefined1 *)(param_1 + 0x855) = 8;
        *(undefined1 *)(param_1 + 0x854) = 7;
        func_00291CC4(*DAT_0050e834);
        uVar1 = DAT_0050e838;
        *(undefined4 *)(param_1 + 0xa10) = 1;
        *(undefined4 *)(param_1 + 0x8b4) = uVar1;
      }
    }
    break;
  case 1:
    puVar3 = (undefined4 *)func_0052FBA0(*DAT_0050e830 + 0x3dbbc,*(uint *)(param_1 + 0xa08));
    puVar3 = func_00687E28(puVar3);
    if (puVar3 != (undefined4 *)0x0) {
      func_002CF084((int)puVar3);
      *(undefined4 *)(param_1 + 0xa10) = 2;
      *(undefined1 *)(param_1 + 0x856) = 7;
      return 1;
    }
    break;
  case 2:
    bVar2 = func_0051D27C((int *)(param_1 + 1000),-1,DAT_0050e83c);
    if (bVar2) {
      return 1;
    }
    break;
  default:
    return 1;
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
    puVar3 = (undefined4 *)func_0052FBA0(*DAT_0050e830 + 0x3dbbc,*(uint *)(param_1 + 0xa08));
    puVar3 = func_00687E28(puVar3);
    if (puVar3 == (undefined4 *)0x0) {
      return 1;
    }
    func_002CDFC4((int)puVar3,param_2);
    return 1;
  }
  return 0;
}

